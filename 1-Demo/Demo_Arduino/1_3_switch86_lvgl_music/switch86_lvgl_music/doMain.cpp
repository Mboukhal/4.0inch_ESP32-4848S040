
#include "doMain.h"
#include "ui.h"
#include "doLRC.h"
#include "HAL.h"

int light_brightness = 100;

int counter = 0;
int brightness = 0;
bool is_light_screen = true;

// blinker end

int play_mode = 0;
int play_index = 0;
int play_state = 0;
int play_mode_select = 0;
bool net_pic_is_open = false;

boolean audio_data_init_flag = false;

String lrc_time[100];
String lrc_text[100];
Mp3Info mp3_list_info[20];
unsigned long lrc_time_millis[100];
long now_time = 0;
long running_time = 0;
int lrc_show_index = 0;
String mp3_url;
int play_pos = 0;
lv_timer_t *lrc_timer_lrc;
lv_obj_t *ui_ImageList[10];

bool net_is_ok = false;
bool sd_is_ok = false;

void ui_main()
{

    ui_init();
    do_main_ui_init();
}

void ui_timer1(lv_timer_t *timer)
{
    _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen2_screen_init);
    lv_timer_del(timer);
}

void do_main_ui_init(void)
{
    audioInit();
    audio.setVolume(20); // 0...21
    Serial.println("audio init");
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_CLICKED, NULL);
    lv_timer_t *timer1 = lv_timer_create(ui_timer1, 1000, NULL);
}

void ui_event_Button1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen2_screen_init();
        lv_disp_load_scr(ui_Screen2);
        lv_obj_del(ui_Screen1);
        // _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

void ui_event_Button2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen2_screen_init();
        lv_disp_load_scr(ui_Screen2);
        lv_obj_del(ui_Screen1);
        // _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button3(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen1_screen_init();
        lv_disp_load_scr(ui_Screen1);
        lv_obj_del(ui_Screen2);
        lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_CLICKED, NULL);
    }
}
void ui_event_play_mode(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_clear_flag(ui_Panel16, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_play_vol(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_clear_flag(ui_Panel15, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_play_vol_close(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_add_flag(ui_Panel15, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_play_mode_close(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_add_flag(ui_Panel16, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_play_vol_change(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        int vol = lv_slider_get_value(ui_Slider3);
        audio.setVolume(vol);
    }
}
void ui_event_play_mode_change(lv_event_t *e)
{

    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        int mode = lv_roller_get_selected(ui_Roller1);

        play_mode_select = mode;
        Serial.printf("play_mode_select:%d\n", play_mode_select);
    }
}
bool go_music_flag = false;
void ui_event_Button4(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        // lv_obj_del(ui_Screen1);
        // goto music list

        if (go_music_flag == false)
        {
            go_music_flag = true;
            ui_Screen4_screen_init();
            lv_disp_load_scr(ui_Screen4);
            lv_obj_del(ui_Screen2);
            lv_obj_add_event_cb(ui_Button11, ui_event_Button_Play, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button17, ui_event_Button_list, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button12, ui_event_play_pre, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button10, ui_event_play_next, LV_EVENT_ALL, NULL);

            lv_obj_add_event_cb(ui_Button13, ui_event_play_mode, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button14, ui_event_play_vol, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button18, ui_event_play_vol_close, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Button19, ui_event_play_mode_close, LV_EVENT_ALL, NULL);
            lv_obj_add_event_cb(ui_Slider3, ui_event_play_vol_change, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_add_event_cb(ui_Roller1, ui_event_play_mode_change, LV_EVENT_VALUE_CHANGED, NULL);

            if (net_is_ok)
            {
                /* Core where the task should run */
            }
            else
            {
                lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_HIDDEN);
                sd_is_ok = sdcard_init();
                Serial.printf("sd_is_ok:%d\n", sd_is_ok);
                if (sd_is_ok)
                {
                    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_HIDDEN);
                    lv_label_set_text(ui_Label27, "Scan sdcard music file...");
                    xTaskCreatePinnedToCore(
                        audio_data_init_sd,   /* Function to implement the task */
                        "audio_data_init_sd", /* Name of the task */
                        1024 * 10,            /* Stack size in words */
                        NULL,                 /* Task input parameter */
                        10,                   /* Priority of the task */
                        NULL,                 /* Task handle. */
                        1);                   /* Core where the task should run */
                }
                else
                {
                    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_HIDDEN);
                    lv_obj_add_flag(ui_Spinner2, LV_OBJ_FLAG_HIDDEN);
                    lv_label_set_text(ui_Label27, "SD card not found");
                    lv_obj_set_y(ui_Label27, -18);
                }
            }

            // lv_obj_t *btn1 = lv_btn_create(lv_scr_act());
            // lv_obj_add_event_cb(btn1, event_handler, LV_EVENT_ALL, NULL);
            // lv_obj_align(btn1, LV_ALIGN_CENTER, 0, 0);

            // lv_obj_t *btn2 = lv_btn_create(lv_scr_act());
            // lv_obj_add_event_cb(btn2, event_handler1, LV_EVENT_ALL, NULL);
            // lv_obj_align(btn2, LV_ALIGN_CENTER, 0, 40);

            // lv_obj_t *label1 = lv_label_create(btn1);
            // lv_label_set_text(label1, "play");
            // lv_obj_center(label1);

            // lv_obj_t *label2 = lv_label_create(btn2);
            // lv_label_set_text(label2, "stop");
            // lv_obj_center(label2);
        }
        else
        {

            lv_disp_load_scr(ui_Screen4);
            lv_obj_del(ui_Screen2);
        }
    }
}
char *all_songs[99];
int is_have_music = 0;

void listDirMusic(fs::FS &fs, const char *dirname, uint8_t levels)
{
    Serial.printf("Listing directory: %s\n", dirname);

    File root = fs.open(dirname);
    if (!root)
    {
        Serial.println("Failed to open directory");
        return;
    }
    if (!root.isDirectory())
    {
        Serial.println("Not a directory");
        return;
    }

    File file = root.openNextFile();
    int i = 0;
    while (file)
    {
        if (file.isDirectory())
        {
            Serial.print("  DIR : ");
            Serial.println(file.name());
            if (levels)
            {
                listDirMusic(fs, file.path(), levels - 1);
            }
        }
        else
        {

            char *filename = (char *)file.name();
            Serial.println(filename);
            int8_t len = strlen(filename);
            if (strstr(strlwr(filename + (len - 4)), ".mp3"))
            {

                all_songs[i] = new char[len]; // new memory
                is_have_music = 1;
                strcpy(all_songs[i], filename);
                Serial.print("out:");
                Serial.println(filename);
                Serial.print("songs:");
                Serial.println(all_songs[i]);

                i += 1;
            }
        }
        file = root.openNextFile();
    }
}

void audio_data_init_sd(void *pvParameters)
{
    delay(1000);
    listDirMusic(SD, "/", 0);
    if (is_have_music == 1)
    {

        Serial.println("is_have_music == 1");
        // audioInit();
        // audio.setVolume(20); // 0...21
        // Serial.println("audio init");
        int pos = -85;
        for (int i = 0; i < 99; i++)
        {
            if (all_songs[i] != NULL)
            {
                mp3_list_info[i].id = i;
                mp3_list_info[i].name = all_songs[i];
                mp3_list_info[i].singer = "singer";
                mp3_list_info[i].bl = "bl";
                mp3_list_info[i].time = "time";
                mp3_list_info[i].imgurl = "imgurl";
                mp3_list_info[i].isplaying = false;
                mp3_list_info[i].lrc = "";

                lv_obj_t *ui_Panel10;
                lv_obj_t *ui_Label24;
                lv_obj_t *ui_Label22;
                lv_obj_t *ui_Label25;
                // lv_obj_t *ui_Image8;

                ui_Panel10 = lv_obj_create(ui_Panel13);
                lv_obj_set_width(ui_Panel10, 373);
                lv_obj_set_height(ui_Panel10, 87);
                lv_obj_set_x(ui_Panel10, -2);
                lv_obj_set_y(ui_Panel10, pos);
                lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
                lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE); /// Flags
                lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x171717), LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_bg_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_add_event_cb(ui_Panel10, ui_event_play_list, LV_EVENT_ALL, (void *)i);

                ui_Label24 = lv_label_create(ui_Panel10);
                lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);  /// 1
                lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT); /// 1
                lv_obj_set_x(ui_Label24, 58);
                lv_obj_set_y(ui_Label24, -12);
                lv_obj_set_align(ui_Label24, LV_ALIGN_LEFT_MID);
                lv_label_set_text(ui_Label24, mp3_list_info[i].name.c_str());
                lv_obj_set_style_text_font(ui_Label24, &ui_font_Font1YHall20, LV_PART_MAIN | LV_STATE_DEFAULT);

                ui_Label25 = lv_label_create(ui_Panel10);
                lv_obj_set_width(ui_Label25, 70);               /// 1
                lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT); /// 1
                lv_obj_set_x(ui_Label25, 60);
                lv_obj_set_y(ui_Label25, 17);
                lv_obj_set_align(ui_Label25, LV_ALIGN_LEFT_MID);
                lv_label_set_long_mode(ui_Label25, LV_LABEL_LONG_SCROLL_CIRCULAR);
                lv_label_set_text(ui_Label25, "");
                lv_obj_set_style_text_font(ui_Label25, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

                ui_Label22 = lv_label_create(ui_Panel10);
                lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);  /// 1
                lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT); /// 1
                lv_obj_set_x(ui_Label22, 121);
                lv_obj_set_y(ui_Label22, 18);
                lv_obj_set_align(ui_Label22, LV_ALIGN_LEFT_MID);
                lv_label_set_text(ui_Label22, "");
                lv_obj_set_style_text_font(ui_Label22, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

                ui_ImageList[i] = lv_img_create(ui_Panel10);
                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                lv_obj_set_width(ui_ImageList[i], LV_SIZE_CONTENT);  /// 48
                lv_obj_set_height(ui_ImageList[i], LV_SIZE_CONTENT); /// 48
                lv_obj_set_x(ui_ImageList[i], -150);
                lv_obj_set_y(ui_ImageList[i], 0);
                lv_obj_set_align(ui_ImageList[i], LV_ALIGN_CENTER);
                lv_obj_add_flag(ui_ImageList[i], LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
                lv_obj_clear_flag(ui_ImageList[i], LV_OBJ_FLAG_SCROLLABLE); /// Flags
                pos += 100;
            }
        }
        load_play_info_sd(0);
        lv_obj_add_flag(ui_Panel12, LV_OBJ_FLAG_HIDDEN);
        audio_data_init_flag = true;
    }
    else
    {
        lv_obj_add_flag(ui_Spinner2, LV_OBJ_FLAG_HIDDEN);
        lv_label_set_text(ui_Label27, "not found music file");
        lv_obj_set_y(ui_Label27, -18);
    }

    vTaskDelete(NULL);
}

bool read_lrc_flag = false;
void load_play_info_sd(int index)
{
    String mp3name = mp3_list_info[index].name;
    mp3name = mp3name.substring(0, mp3name.length() - 4) + ".lrc";
    mp3name = "/" + mp3name;
    Serial.println(mp3name);
    bool read_lrc_ok = read_lrc_from_SD(mp3name.c_str());
    if (read_lrc_ok)
    {
        {
            Serial.println("read lrc ok");
        }
        String lrcs = "";
        for (int i = 0; i < 100; i++)
        {
            lrcs += lrc_text[i] + "\n";
        }
        Serial.println(lrcs);

        lv_roller_set_options(ui_Roller2, lrcs.c_str(), LV_ROLLER_MODE_NORMAL);
        // xTaskCreatePinnedToCore(lrc_timer_task, "lrc_timer_task", 2048, NULL, 1, NULL, 1);
        running_time = millis();
        read_lrc_flag = true;
    }
    else
    {
        {
            Serial.println("read lrc fail");
            lv_roller_set_options(ui_Roller2, "this music is not find lrc", LV_ROLLER_MODE_NORMAL);
            // xTaskCreatePinnedToCore(lrc_timer_task, "lrc_timer_task", 2048, NULL, 1, NULL, 1);
            running_time = millis();
            read_lrc_flag = false;
        }
    }

    lv_slider_set_value(ui_Slider2, 0, LV_ANIM_OFF);
    lv_slider_set_range(ui_Slider2, 0, 300);
    lv_obj_add_event_cb(ui_Slider2, ui_event_Slider2, LV_EVENT_VALUE_CHANGED, NULL);
    lv_label_set_text(ui_Label14, mp3_list_info[index].name.c_str());
    lv_label_set_text(ui_Label20, mp3_list_info[index].singer.c_str());
    lv_label_set_text(ui_Label18, mp3_list_info[index].bl.c_str());
    String play_time = "00:00/00:00";
    lv_label_set_text(ui_Label21, play_time.c_str());
}

void ui_event_play_list(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED)
    {
        int pos = (int)lv_event_get_user_data(e);
        Serial.printf("pos: %d\n", pos);
        if (!mp3_list_info[pos].isplaying)
        {
            audio.stopSong();
            lrc_show_index = 0;
            mp3_list_info[play_index].isplaying = false;
            play_index = pos;
            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            delay(100);
            play_state = 1;
            lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            if (lrc_timer_lrc == NULL)
            {
                lrc_timer_lrc = lv_timer_create(lrc_timer, 500, NULL);
            }
            if (net_is_ok)
            {
                audio.connecttohost(mp3_url.c_str());
            }
            else if (!net_is_ok && sd_is_ok && is_have_music)
            {
                audio.connecttoSD(mp3_list_info[play_index].name.c_str());
            }

            mp3_list_info[play_index].isplaying = true;
            now_time = 0;
            play_state = 1;
            // update_play_list
            for (int i = 0; i < 5; i++)
            {
                if (mp3_list_info[i].isplaying == true)
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
                }
                else
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                }
            }
        }
    }
}

void ui_event_Slider2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        int value = lv_slider_get_value(target);
        Serial.printf("Slider value: %d", value);
        audio.setAudioPlayPosition(value);
        // String play_time = "00:00/" + value/60 + ":" + value%60;
        // lv_label_set_text(ui_Label21, play_time.c_str());
        // lv_roller_set_selected_str(ui_Roller2, lrc_text[value].c_str(), LV_ANIM_ON);
    }
}

void ui_event_play_pre(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (play_index >= 1)
        {
            mp3_list_info[play_index].isplaying = false;
            if (play_mode_select == 1)
            {
                play_index = random(0, 9);
                int last_index = play_index;
                while (last_index == play_index)
                {
                    play_index = random(0, 9);
                }
            }
            else
            {
                play_index--;
            }
            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            if (play_state == 1)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                if (net_is_ok)
                {
                    audio.connecttohost(mp3_url.c_str());
                }
                else if (!net_is_ok && sd_is_ok && is_have_music)
                {
                    audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                }

                mp3_list_info[play_index].isplaying = true;
                now_time = 0;
                // lv_timer_del(lrc_timer_lrc);
            }
            else if (play_state == 2)
            {
                audio.stopSong();
                delay(100);
                play_state = 0;
            }
        }
        // update_play_state
        for (int i = 0; i < 5; i++)
        {
            if (mp3_list_info[i].isplaying == true)
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
            }
            else
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
            }
        }
    }
}

void ui_event_play_next(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        Serial.println(play_index);
        if (play_index <= 10)
        {
            mp3_list_info[play_index].isplaying = false;
            if (play_mode_select == 1)
            {
                play_index = random(0, 9);
                int last_index = play_index;
                while (last_index == play_index)
                {
                    play_index = random(0, 9);
                }
            }
            else
            {
                play_index++;
            }
            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            if (play_state == 1)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                if (net_is_ok)
                {
                    audio.connecttohost(mp3_url.c_str());
                }
                else if (!net_is_ok && sd_is_ok && is_have_music)
                {
                    audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                }

                mp3_list_info[play_index].isplaying = true;
                now_time = 0;
                // lv_timer_del(lrc_timer_lrc);
            }
            else if (play_state == 2)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                play_state = 0;
            }
            // update_play_state
            for (int i = 0; i < 5; i++)
            {
                if (mp3_list_info[i].isplaying == true)
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
                }
                else
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                }
            }
        }
    }
}

void ui_event_Button15(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_Button_list(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_add_flag(ui_Panel9, LV_OBJ_FLAG_HIDDEN);
    }
}

void button_play_callback(const String &state)
{
    if (audio_data_init_flag)
    {
        if (play_state == 1)
        {
            play_state = 2;
            lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            audio.pauseResume();
            mp3_list_info[play_index].isplaying = false;
        }
        else if (play_state == 0)
        {
            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            delay(100);
            play_state = 1;
            lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            lrc_timer_lrc = lv_timer_create(lrc_timer, 500, NULL);
            if (net_is_ok)
            {
                audio.connecttohost(mp3_url.c_str());
            }
            else if (!net_is_ok && sd_is_ok && is_have_music)
            {
                audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                Serial.println("start play...");
            }

            // if (play_index < 9)
            //     ((BlinkerText *)text_song_name)->print("now playing:" + mp3_list_info[play_index].singer + " - " + mp3_list_info[play_index].name, "the next song is:" + mp3_list_info[play_index + 1].singer + " - " + mp3_list_info[play_index + 1].name);
            // else
            //     ((BlinkerText *)text_song_name)->print("now playing:" + mp3_list_info[play_index].singer + " - " + mp3_list_info[play_index].name, "the next song is:no more songs");
            mp3_list_info[play_index].isplaying = true;
            //  read_lrc("/阿悄 - 哭笑不得.lrc");
        }
        else if (play_state == 2)
        {
            play_state = 1;
            lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            audio.pauseResume();
            mp3_list_info[play_index].isplaying = true;
        }

        // update_play_state
        for (int i = 0; i < 5; i++)
        {
            if (mp3_list_info[i].isplaying == true)
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
            }
            else
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
            }
        }
    }
    else
    {
        Serial.println("ui_Screen4 is null");
    }
}
void button_pre_callback(const String &state)
{

    if (audio_data_init_flag)
    {
        if (play_index >= 1)
        {
            mp3_list_info[play_index].isplaying = false;
            if (play_mode_select == 1)
            {
                play_index = random(0, 9);
                int last_index = play_index;
                while (last_index == play_index)
                {
                    play_index = random(0, 9);
                }
            }
            else
            {
                play_index--;
            }
            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            if (play_state == 1)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                if (net_is_ok)
                {
                    audio.connecttohost(mp3_url.c_str());
                }
                else if (!net_is_ok && sd_is_ok && is_have_music)
                {
                    audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                }

                mp3_list_info[play_index].isplaying = true;
                now_time = 0;
                // lv_timer_del(lrc_timer_lrc);
            }
            else if (play_state == 2)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                play_state = 0;
            }
        }
        // update_play_state
        for (int i = 0; i < 5; i++)
        {
            if (mp3_list_info[i].isplaying == true)
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
            }
            else
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
            }
        }
    }
    else
    {
        Serial.println("ui_Screen4 is null");
    }
}
void button_next_callback(const String &state)
{
    if (audio_data_init_flag)
    {

        Serial.println(play_index);
        if (play_index <= 10)
        {
            mp3_list_info[play_index].isplaying = false;
            if (play_mode_select == 1)
            {
                play_index = random(0, 9);
                int last_index = play_index;
                while (last_index == play_index)
                {
                    play_index = random(0, 9);
                }
            }
            else
            {
                play_index++;
            }

            if (!net_is_ok && sd_is_ok && is_have_music)
            {
                load_play_info_sd(play_index);
            }
            else
            {
                // load_play_info(play_index);
            }
            if (play_state == 1)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                if (net_is_ok)
                {
                    audio.connecttohost(mp3_url.c_str());
                }
                else if (!net_is_ok && sd_is_ok && is_have_music)
                {
                    audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                }

                mp3_list_info[play_index].isplaying = true;
                now_time = 0;
                // lv_timer_del(lrc_timer_lrc);
            }
            else if (play_state == 2)
            {
                audio.stopSong();
                lrc_show_index = 0;
                delay(100);
                play_state = 0;
            }
            // update_play_state
            for (int i = 0; i < 5; i++)
            {
                if (mp3_list_info[i].isplaying == true)
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
                }
                else
                {
                    lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                }
            }

            // ((BlinkerText *)text_song_name)->print(mp3_list_info[play_index].name);
        }
    }
    else
    {
        Serial.println("ui_Screen4 is null");
    }
}

void button_light_callback(const String &state)
{
    if (is_light_screen)
    {
        is_light_screen = !is_light_screen;
        // lv_disp_set_sleep_mode(ui_disp, true);
        Serial.println(0);
        ledcSetup(0, 600, 8);
        ledcAttachPin(2, 0);
        ledcWrite(0, 0);
        if (play_state == 1)
        {
            play_state = 2;
            lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            audio.pauseResume();
            mp3_list_info[play_index].isplaying = false;
        }
    }
    else
    {
        is_light_screen = !is_light_screen;
        int pwmp = light_brightness * 2.55f;

        Serial.println(pwmp);
        ledcSetup(0, 600, 8);
        ledcAttachPin(2, 0);
        ledcWrite(0, pwmp);
    }
}

void ui_event_Button_Play(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (play_state == 1)
        {
            play_state = 2;
            lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            audio.pauseResume();
            mp3_list_info[play_index].isplaying = false;
        }
        else if (play_state == 0)
        {
            play_state = 1;
            lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            lrc_timer_lrc = lv_timer_create(lrc_timer, 500, NULL);
            if (net_is_ok)
            {
                audio.connecttohost(mp3_url.c_str());
            }
            else if (!net_is_ok && sd_is_ok && is_have_music)
            {
                audio.connecttoSD(mp3_list_info[play_index].name.c_str());

                Serial.println("start play... button");
            }

            mp3_list_info[play_index].isplaying = true;
            //  read_lrc("/阿悄 - 哭笑不得.lrc");
        }
        else if (play_state == 2)
        {
            play_state = 1;
            lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN);
            audio.pauseResume();
            mp3_list_info[play_index].isplaying = true;
        }

        // update_play_state
        for (int i = 0; i < 5; i++)
        {
            if (mp3_list_info[i].isplaying == true)
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
            }
            else
            {
                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
            }
        }
    }
}

bool read_lrc_from_SD(const char *filename)
{

    for (int i = 0; i < 100; i++)
    {
        lrc_text[i] = "";
    }
    char c;
    int i = 0;
    File file = SD.open(filename, "r");
    if (!file)
    {
        Serial.println("file open failed");
        return false;
    }
    file.seek(0, SeekSet);

    while (file.available())
    {

        c = file.read();
        if (c == '[')
        {
            String time = "";
            while (file.available())
            {
                c = file.read();
                if (c == ']')
                {
                    break;
                }
                time += (char)c;
            }

            String text = "";
            int count = 0;
            int flag = 0;
            while (file.available())
            {
                count++;
                c = file.read();
                if (c == '\n')
                {
                    if (count == 1)
                    {
                        flag = 0;
                    }
                    else
                    {
                        flag = 1;
                    }
                    break;
                }
                text += (char)c;
            }
            if (flag == 1)
            {
                lrc_time[i] = time;
                lrc_text[i] = text;
                lrc_time_millis[i] = time.substring(0, 2).toInt() * 60 * 1000 + time.substring(3, 5).toInt() * 1000 + time.substring(6, 8).toInt() * 10;

                // Serial.println(lrc_time[i]);
                // Serial.println(lrc_text[i]);
                // Serial.println(lrc_time_millis[i]);
                i++;
            }
        }
    }
    file.close();
    return true;
}

static void event_handler1(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_CLICKED)
    {
        LV_LOG_USER("Clicked");
        Serial.println("test1");
        // audio.pauseResume();
        // audio.stopSong();
        bool readTimestamp = true;
        int i = 0;
        int16_t c;
    }
}

void lrc_timer_task(void *pvParameters)
{
    // running_time = millis() - 2000;
    static int i = 0;
    while (1)
    {
        // Serial.printf("mil:%d\n",millis());
        // Serial.printf("run:%d\n",running_time);
        // Serial.printf("now:%d\n",now_time);
        // Serial.printf("lrc:%d\n",lrc_time_millis[i]);

        if (audio.isRunning())
        {
            now_time = audio.getAudioCurrentTime();
            Serial.printf("now_time:%d\n", now_time);
            String play_time = String(now_time / 1000 / 60) + ":" + String(now_time / 1000 % 60);
            Serial.println(play_time);
            lv_label_set_text(ui_Label21, play_time.c_str());
            now_time = now_time * 1000;
            if (now_time >= lrc_time_millis[i])
            {
                Serial.println(lrc_text[i]);
                lv_roller_set_selected(ui_Roller2, i, LV_ANIM_OFF);

                i++;
            }
            // now_time += millis() - running_time;
            // Serial.printf("now:%d\n", now_time);

            // // running_time = audio.getAudioCurrentTime();

            // if (now_time >= lrc_time_millis[i])
            // {
            //     Serial.println(lrc_text[i]);

            //     lv_roller_set_selected(ui_Roller2, i, LV_ANIM_OFF);

            //     i++;
            // }
            // running_time = millis();
        }
        else
        {
            // now_time = 0;
            // running_time = 0;
            vTaskDelete(NULL);
        }

        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
}

int next_flag = 0;
int time_flag = 0;
int all_music_time = 999;
void lrc_timer(lv_timer_t *timer)
{

    if (play_state == 1)

    {
        int now_alread_play_time = audio.getAudioCurrentTime();
        Serial.printf("now_alread_play_time:%d\n", now_alread_play_time);
        if (audio.isRunning() && now_alread_play_time <= all_music_time - 8)
        {
            if (!net_is_ok)
            {
                int now_play_time = 0;
                now_play_time = String(audio.getAudioFileDuration()).toInt();
                Serial.printf("all_music_time:%d\n", all_music_time);
                if (now_play_time != 0)
                {
                    all_music_time = now_play_time;
                    lv_slider_set_range(ui_Slider2, 0, all_music_time);
                }
            }
            // now_time += millis() - running_time;
            // Serial.printf("now:%d\n", now_time);

            // // running_time = audio.getAudioCurrentTime();

            // if (now_time >= lrc_time_millis[lrc_show_index])
            // {
            //     Serial.println(lrc_text[lrc_show_index]);

            //     lv_roller_set_selected(ui_Roller2, lrc_show_index, LV_ANIM_ON);
            //     lrc_show_index++;
            // }
            // running_time = millis();
            now_time = audio.getAudioCurrentTime();
            Serial.printf("now_time:%d\n", now_time);
            String play_time = String(now_time / 60) + ":" + String(now_time % 60) + "/" + String(audio.getAudioFileDuration() / 60) + ":" + String(audio.getAudioFileDuration() % 60);
            lv_label_set_text(ui_Label21, play_time.c_str());
            lv_slider_set_value(ui_Slider2, now_time, LV_ANIM_OFF);
            // lv_slider_set_range(ui_Slider2, 0, );
            now_time = now_time * 1000;
            // read lrc
            if (now_time >= lrc_time_millis[lrc_show_index] && read_lrc_flag == 1)
            {
                Serial.println(lrc_text[lrc_show_index]);
                lv_roller_set_selected(ui_Roller2, lrc_show_index, LV_ANIM_ON);
                // push lrc to blinker

                lrc_show_index++;
            }
        }
        else
        {
            if (next_flag < 4)
            {
                next_flag++;
                Serial.println("next_flag:" + String(next_flag));
            }
            else
            {
                next_flag = 0;
                // playmode
                if (play_mode_select == 0)
                {
                    Serial.println(play_index);
                    if (play_index <= 10)
                    {
                        mp3_list_info[play_index].isplaying = false;
                        play_index++;
                        if (!net_is_ok && sd_is_ok && is_have_music)
                        {
                            load_play_info_sd(play_index);
                        }
                        else
                        {
                            // load_play_info(play_index);
                        }
                        if (play_state == 1)
                        {
                            audio.stopSong();
                            lrc_show_index = 0;
                            delay(100);
                            if (net_is_ok)
                            {
                                audio.connecttohost(mp3_url.c_str());
                            }
                            else if (!net_is_ok && sd_is_ok && is_have_music)
                            {
                                audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                            }

                            mp3_list_info[play_index].isplaying = true;
                            now_time = 0;
                            // lv_timer_del(lrc_timer_lrc);
                        }
                        else if (play_state == 2)
                        {
                            audio.stopSong();
                            lrc_show_index = 0;
                            delay(100);
                            play_state = 0;
                        }
                        // update_play_state
                        for (int i = 0; i < 5; i++)
                        {
                            if (mp3_list_info[i].isplaying == true)
                            {
                                lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
                            }
                            else
                            {
                                lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                            }
                        }
                    }
                }
                else if (play_mode_select == 1)
                {
                    int last_play_index = play_index;
                    play_index = random(0, 9);
                    while (play_index == last_play_index)
                    {
                        play_index = random(0, 9);
                    }
                    if (!net_is_ok && sd_is_ok && is_have_music)
                    {
                        load_play_info_sd(play_index);
                    }
                    else
                    {
                        // load_play_info(play_index);
                    }
                    if (play_state == 1)
                    {
                        audio.stopSong();
                        lrc_show_index = 0;
                        delay(100);
                        if (net_is_ok)
                        {
                            audio.connecttohost(mp3_url.c_str());
                        }
                        else if (!net_is_ok && sd_is_ok && is_have_music)
                        {
                            audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                        }

                        mp3_list_info[play_index].isplaying = true;
                        now_time = 0;
                        // lv_timer_del(lrc_timer_lrc);
                    }
                    else if (play_state == 2)
                    {
                        audio.stopSong();
                        lrc_show_index = 0;
                        delay(100);
                        play_state = 0;
                    }
                    // update_play_state
                    for (int i = 0; i < 5; i++)
                    {
                        if (mp3_list_info[i].isplaying == true)
                        {
                            lv_img_set_src(ui_ImageList[i], &ui_img_list_pause_icon_png);
                        }
                        else
                        {
                            lv_img_set_src(ui_ImageList[i], &ui_img_list_play_icon_png);
                        }
                    }
                }
                else if (play_mode_select == 2)
                {
                    // loop
                    if (play_state == 1)
                    {
                        audio.stopSong();
                        lrc_show_index = 0;
                        delay(100);
                        if (net_is_ok)
                        {
                            audio.connecttohost(mp3_url.c_str());
                        }
                        else if (!net_is_ok && sd_is_ok && is_have_music)
                        {
                            audio.connecttoSD(mp3_list_info[play_index].name.c_str());
                        }

                        mp3_list_info[play_index].isplaying = true;
                        now_time = 0;
                        // lv_timer_del(lrc_timer_lrc);
                    }
                    else if (play_state == 2)
                    {
                        audio.stopSong();
                        lrc_show_index = 0;
                        delay(100);
                        play_state = 0;
                    }
                }
            }
        }
    }
    else if (play_state == 0)
    {
        Serial.println("stop");
        now_time = 0;
        running_time = 0;
        lrc_show_index = 0;
        lv_timer_del(timer);
    }
    else if (play_state == 2)
    {
        // Serial.println("pause");
    }
}

void ui_event_Button8(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen2_screen_init);
    }
}

void ui_event_Button9(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen5_screen_init();
        lv_disp_load_scr(ui_Screen5);
        lv_obj_del(ui_Screen2);

        lv_obj_add_event_cb(ui_Switch2, ui_event_open_net_pic, LV_EVENT_VALUE_CHANGED, NULL);
        lv_obj_add_event_cb(ui_Button16, ui_event_Button16, LV_EVENT_ALL, NULL);
        lv_obj_add_event_cb(ui_Slider1, change_light_screen, LV_EVENT_VALUE_CHANGED, NULL);
        if (net_pic_is_open)
        {
            lv_obj_add_state(ui_Switch2, LV_STATE_CHECKED);
        }
        else
        {
            lv_obj_clear_state(ui_Switch2, LV_STATE_CHECKED);
        }
        lv_slider_set_value(ui_Slider1, light_brightness, LV_ANIM_OFF);
    }
}
void change_light_screen(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        int32_t value = lv_slider_get_value(target);
        light_brightness = value;
        char vals[10];
        itoa(value, vals, 10);
        Serial1.println(vals);
        int pwmp = value * 2.55f;

        Serial.println(pwmp);
        ledcSetup(0, 600, 8);
        ledcAttachPin(2, 0);
        ledcWrite(0, pwmp); /* Screen brightness can be modified by adjusting this parameter. (0-255) */
    }
}
void ui_event_Button16(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen2_screen_init();
        lv_disp_load_scr(ui_Screen2);
        lv_obj_del(ui_Screen5);
    }
}
void ui_event_Button7(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        // audio.pauseResume();
        // audio.stopSong();
        // lv_timer_del(lrc_timer_lrc);
        // // delay(300);
        // delay(300);
        ui_Screen2_screen_init();
        lv_disp_load_scr(ui_Screen2);

        // lv_obj_del(ui_Screen4);
    }
}
void ui_event_open_net_pic(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        net_pic_is_open = lv_obj_has_state(target, LV_STATE_CHECKED);
    }
}

// blinker

// 按下按键即会执行该函数
// void button1_callback(const String & state)
// {
//     BLINKER_LOG("get button state: ", state);
//     if (led_state == 1)
//     {
//         led_state = 0;
//         led_ledc_set(0, 0, 0);
//         led_off();
//     }
//     else
//     {
//         led_state = 1;
//         led_color[0] = 255;
//         led_color[1] = 0;
//         led_color[2] = 0;
//         led_ledc_set(led_color[0], led_color[1], led_color[2]);
//     }

// }

// void rgb1_callback(uint8_t r_value, uint8_t g_value, uint8_t b_value, uint8_t bright_value)
// {

//     BLINKER_LOG("R value: ", r_value);
//     BLINKER_LOG("G value: ", g_value);
//     BLINKER_LOG("B value: ", b_value);
//     BLINKER_LOG("Rrightness value: ", bright_value);

//     led_ledc_set(r_value, g_value, b_value);

// }

void serialprintln_task(void *pvParameter)
{
    while (1)
    {
        if (Serial.available())
        {
            String str = Serial.readStringUntil('\n');
            Serial.printf("from serial:%s\n", str);
            counter++;
        }
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}
