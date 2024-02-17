/*******************************************************************************
   LVGL Widgets
   This is a widgets demo for LVGL - Light and Versatile Graphics Library
   import from: https://github.com/lvgl/lv_demos.git

   Dependent libraries:
   LVGL: https://github.com/lvgl/lvgl.git

   Touch libraries:
   FT6X36: https://github.com/strange-v/FT6X36.git
   GT911: https://github.com/TAMCTec/gt911-arduino.git
   XPT2046: https://github.com/PaulStoffregen/XPT2046_Touchscreen.git

   LVGL Configuration file:
   Copy your_arduino_path/libraries/lvgl/lv_conf_template.h
   to your_arduino_path/libraries/lv_conf.h
   Then find and set:
   #define LV_COLOR_DEPTH     16
   #define LV_TICK_CUSTOM     1

   For SPI display set color swap can be faster, parallel screen don't set!
   #define LV_COLOR_16_SWAP   1

   Optional: Show CPU usage and FPS count
   #define LV_USE_PERF_MONITOR 1
 ******************************************************************************/
// #include "lv_demo_widgets.h"
#include <Ticker.h>
//#include "demos/lv_demos.h"
#include "doMain.h"

/*******************************************************************************
   Start of Arduino_GFX setting

   Arduino_GFX try to find the settings depends on selected board in Arduino IDE
   Or you can define the display dev kit not in the board list
   Defalult pin list for non display dev kit:
   Arduino Nano, Micro and more: CS:  9, DC:  8, RST:  7, BL:  6, SCK: 13, MOSI: 11, MISO: 12
   ESP32 various dev board     : CS:  5, DC: 27, RST: 33, BL: 22, SCK: 18, MOSI: 23, MISO: nil
   ESP32-C3 various dev board  : CS:  7, DC:  2, RST:  1, BL:  3, SCK:  4, MOSI:  6, MISO: nil
   ESP32-S2 various dev board  : CS: 34, DC: 35, RST: 33, BL: 21, SCK: 36, MOSI: 35, MISO: nil
   ESP32-S3 various dev board  : CS: 40, DC: 41, RST: 42, BL: 48, SCK: 36, MOSI: 35, MISO: nil
   ESP8266 various dev board   : CS: 15, DC:  4, RST:  2, BL:  5, SCK: 14, MOSI: 13, MISO: 12
   Raspberry Pi Pico dev board : CS: 17, DC: 27, RST: 26, BL: 28, SCK: 18, MOSI: 19, MISO: 16
   RTL8720 BW16 old patch core : CS: 18, DC: 17, RST:  2, BL: 23, SCK: 19, MOSI: 21, MISO: 20
   RTL8720_BW16 Official core  : CS:  9, DC:  8, RST:  6, BL:  3, SCK: 10, MOSI: 12, MISO: 11
   RTL8722 dev board           : CS: 18, DC: 17, RST: 22, BL: 23, SCK: 13, MOSI: 11, MISO: 12
   RTL8722_mini dev board      : CS: 12, DC: 14, RST: 15, BL: 13, SCK: 11, MOSI:  9, MISO: 10
   Seeeduino XIAO dev board    : CS:  3, DC:  2, RST:  1, BL:  0, SCK:  8, MOSI: 10, MISO:  9
   Teensy 4.1 dev board        : CS: 39, DC: 41, RST: 40, BL: 22, SCK: 13, MOSI: 11, MISO: 12
 ******************************************************************************/
#include <Arduino_GFX_Library.h>

#define GFX_BL 38

Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
    39 /* CS */, 48 /* SCK */, 47 /* SDA */,
    18 /* DE */, 17 /* VSYNC */, 16 /* HSYNC */, 21 /* PCLK */,
    11 /* R0 */, 12 /* R1 */, 13 /* R2 */, 14 /* R3 */, 0 /* R4 */,
    8 /* G0 */, 20 /* G1 */, 3 /* G2 */, 46 /* G3 */, 9 /* G4 */, 10 /* G5 */,
    4 /* B0 */, 5 /* B1 */, 6 /* B2 */, 7 /* B3 */, 15 /* B4 */
);
Arduino_ST7701_RGBPanel *gfx = new Arduino_ST7701_RGBPanel(
    bus, GFX_NOT_DEFINED /* RST */, 0 /* rotation */,
    true /* IPS */, 480 /* width */, 480 /* height */,
    st7701_type1_init_operations, sizeof(st7701_type1_init_operations), true /* BGR */,
    10 /* hsync_front_porch */, 8 /* hsync_pulse_width */, 50 /* hsync_back_porch */,
    10 /* vsync_front_porch */, 8 /* vsync_pulse_width */, 20 /* vsync_back_porch */);

/*******************************************************************************
   Please config the touch panel in touch.h
 ******************************************************************************/
#include "touch.h"

#include <esp_heap_caps.h>

/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  // gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
    }
    else if (touch_released())
    {
      data->state = LV_INDEV_STATE_REL;
    }
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
}

Ticker ticker;

void tcr1s()
{
  Serial.printf("SRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_INTERNAL));
  Serial.printf("PSRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
}

void setup()
{
  Serial.begin(115200);

  Serial.printf("SRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_INTERNAL));
  Serial.printf("PSRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_SPIRAM));

  // while (!Serial);
  Serial.println("LVGL Widgets Demo");

  // Init touch device
  touch_init();

  // Init Display
  gfx->begin(11000000);
  gfx->fillScreen(BLACK);

#ifdef GFX_BL
  // pinMode(GFX_BL, OUTPUT);
  // digitalWrite(GFX_BL, HIGH);
  ledcSetup(0, 600, 8);
  ledcAttachPin(GFX_BL, 0);
  ledcWrite(0, 150);
#endif

  lv_init();

  screenWidth = gfx->width();
  screenHeight = gfx->height();
  // #ifdef ESP32
  // disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 480, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);
  // #else
  //   disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 100);
  // #endif
  //  disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 480, MALLOC_CAP_SPIRAM);

   lv_color_t *buf_3_1 = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 480, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);
  //  lv_color_t *buf_3_2 = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 480, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);

  //lv_color_t *buf_3_1 = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 100, MALLOC_CAP_INTERNAL | MALLOC_CAP_DMA);
  // lv_color_t *buf_3_2 = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 100, MALLOC_CAP_INTERNAL | MALLOC_CAP_DMA);

  // if (!disp_draw_buf)
  // {
  //   Serial.println("LVGL disp_draw_buf allocate failed!");
  // }
  // if (!buf_3_1 && !buf_3_2)
  // {
  //   Serial.println("LVGL disp_draw_buf allocate failed!");
  // }

  if (!buf_3_1)
  {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  }

  else
  {
     lv_disp_draw_buf_init(&draw_buf, buf_3_1, NULL, screenWidth * 480);
    //lv_disp_draw_buf_init(&draw_buf, buf_3_1, NULL, screenWidth * 100);
    // lv_disp_draw_buf_init(&draw_buf, buf_3_1, buf_3_2, screenWidth * 480);
    // lv_disp_draw_buf_init(&draw_buf, buf_3_1, buf_3_2, screenWidth * 100);

    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the (dummy) input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    // lv_demo_widgets();
    // lv_demo_benchmark();
    ui_main();
    Serial.println("Setup done");

    Serial.printf("SRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_INTERNAL));
    Serial.printf("PSRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_SPIRAM));

    ticker.attach(1, tcr1s);
    lv_timer_handler(); /* let the GUI do its work */
  }
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */
  delay(5);
  // digitalWrite(40, HIGH);
  // digitalWrite(2, HIGH);
  // digitalWrite(1, HIGH);
  // Serial.println("HIGH");
  // delay(5000);

  // digitalWrite(40, LOW);
  // digitalWrite(2, LOW);
  // digitalWrite(1, LOW);
  // Serial.println("LOW");
  // delay(5000);
}
