#include "lvgl.h"
#include "ui.h"
#include "ArduinoJson.h"
#include "NtpClientLib.h"
#include "HTTPClient.h"
#include "ArduinoZlib.h"
#include "WeatherNow.h"

String getIps(void);

void ui_main(void);

void do_main_ui_init(void);

void scan_wifi_task(void *pvParameters);

void ui_event_Key_Ok(lv_event_t *e);

void ui_event_Button_scan(lv_event_t *e);

void connect_wifi_task(void *pvParameters);

void getWeather(void *pvParameters);

void getNtpTime(void *pvParameters);

float *getCityPosition(String ips);

void ui_event_All_on(lv_event_t *e);

void ui_event_All_off(lv_event_t *e);

void ui_event_light1(lv_event_t *e);

void ui_event_light2(lv_event_t *e);

void ui_event_light3(lv_event_t *e);

boolean get_light1_status();

boolean get_light2_status();

boolean get_light3_status();

void init_light();


