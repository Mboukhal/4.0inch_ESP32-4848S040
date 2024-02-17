

#ifndef _SWITCH86_UI_H
#define _SWITCH86_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_Keyboard4;
extern lv_obj_t *ui_Dropdown2;
extern lv_obj_t *ui_Panel1;
extern lv_obj_t *ui_Label12;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label13;
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Label14;
extern lv_obj_t *ui_TextArea1;
extern lv_obj_t *ui_Image63;
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui_Image2;
extern lv_obj_t *ui_Image3;
extern lv_obj_t *ui_Image4;
extern lv_obj_t *ui_Image5;
extern lv_obj_t *ui_Image6;
extern lv_obj_t *ui_Image7;
extern lv_obj_t *ui_Image8;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_Image9;
extern lv_obj_t *ui_Image10;
extern lv_obj_t *ui_Label15;
extern lv_obj_t *ui_Label16;
extern lv_obj_t *ui_Label17;
// SCREEN: ui_Screen10
void ui_Screen10_screen_init(void);
extern lv_obj_t *ui_Screen10;
void ui_event_Image11( lv_event_t * e);
extern lv_obj_t *ui_Image11;
extern lv_obj_t *ui_Image12;
extern lv_obj_t *ui_Image13;
extern lv_obj_t *ui_Image14;
extern lv_obj_t *ui_Image15;
void ui_event_Image16( lv_event_t * e);
extern lv_obj_t *ui_Image16;
void ui_event_Image17( lv_event_t * e);
extern lv_obj_t *ui_Image17;
extern lv_obj_t *ui_Image18;
extern lv_obj_t *ui_Image19;
extern lv_obj_t *ui_Image20;
extern lv_obj_t *ui_Image21;
extern lv_obj_t *ui_Image22;
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Slider2;
// SCREEN: ui_Screen11
void ui_Screen11_screen_init(void);
void ui_event_Screen11( lv_event_t * e);
extern lv_obj_t *ui_Screen11;
extern lv_obj_t *ui_Image23;
extern lv_obj_t *ui_Image24;
extern lv_obj_t *ui_Image29;
extern lv_obj_t *ui_Image26;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_Image25;
extern lv_obj_t *ui_Image31;
extern lv_obj_t *ui_Image32;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_Image28;
extern lv_obj_t *ui_Image27;
extern lv_obj_t *ui_Image30;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_Image33;
extern lv_obj_t *ui_Image34;
extern lv_obj_t *ui_Image35;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui_Image36;
extern lv_obj_t *ui_Image37;
extern lv_obj_t *ui_Image38;
extern lv_obj_t *ui_Label11;
extern lv_obj_t *ui_Image47;
extern lv_obj_t *ui_Image48;
extern lv_obj_t *ui_Image49;
extern lv_obj_t *ui_Image50;
extern lv_obj_t *ui_Image51;
// SCREEN: ui_Screen12
void ui_Screen12_screen_init(void);
void ui_event_Screen12( lv_event_t * e);
extern lv_obj_t *ui_Screen12;
extern lv_obj_t *ui_Image39;
extern lv_obj_t *ui_Image40;
extern lv_obj_t *ui_Image41;
extern lv_obj_t *ui_Image42;
extern lv_obj_t *ui_Image43;
extern lv_obj_t *ui_Image44;
extern lv_obj_t *ui_Image45;
extern lv_obj_t *ui_Image46;
void ui_event_Image64( lv_event_t * e);
extern lv_obj_t *ui_Image64;
void ui_event_Button3( lv_event_t * e);
extern lv_obj_t *ui_Button3;
void ui_event_Image65( lv_event_t * e);
extern lv_obj_t *ui_Image65;
void ui_event_Button4( lv_event_t * e);
extern lv_obj_t *ui_Button4;
void ui_event_Image66( lv_event_t * e);
extern lv_obj_t *ui_Image66;
void ui_event_Button5( lv_event_t * e);
extern lv_obj_t *ui_Button5;
void ui_event_Button6( lv_event_t * e);
extern lv_obj_t *ui_Button6;
void ui_event_Image67( lv_event_t * e);
extern lv_obj_t *ui_Image67;
// SCREEN: ui_Screen13
void ui_Screen13_screen_init(void);
void ui_event_Screen13( lv_event_t * e);
extern lv_obj_t *ui_Screen13;
extern lv_obj_t *ui_Image52;
extern lv_obj_t *ui_Image53;
extern lv_obj_t *ui_Image54;
extern lv_obj_t *ui_Image55;
extern lv_obj_t *ui_Image56;
extern lv_obj_t *ui_Image57;
extern lv_obj_t *ui_Image58;
extern lv_obj_t *ui_Image59;
extern lv_obj_t *ui_Image60;
extern lv_obj_t *ui_Image61;
extern lv_obj_t *ui_Image62;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_logo_png);   // assets\logo.png
LV_IMG_DECLARE( ui_img_s1_back1_png);   // assets\s1\back1.png
LV_IMG_DECLARE( ui_img_s1_sunny_png);   // assets\s1\sunny.png
LV_IMG_DECLARE( ui_img_s1_cut1_png);   // assets\s1\cut1.png
LV_IMG_DECLARE( ui_img_s1_cut2_png);   // assets\s1\cut2.png
LV_IMG_DECLARE( ui_img_s1_tmp_png);   // assets\s1\tmp.png
LV_IMG_DECLARE( ui_img_s1_wind_png);   // assets\s1\wind.png
LV_IMG_DECLARE( ui_img_s1_hu_png);   // assets\s1\hu.png
LV_IMG_DECLARE( ui_img_s2_back2_png);   // assets\s2\back2.png
LV_IMG_DECLARE( ui_img_s2_move1_png);   // assets\s2\move1.png
LV_IMG_DECLARE( ui_img_s2_color_png);   // assets\s2\color.png
LV_IMG_DECLARE( ui_img_s2_light_png);   // assets\s2\light.png
LV_IMG_DECLARE( ui_img_s2_switch2_off_png);   // assets\s2\switch2_off.png
LV_IMG_DECLARE( ui_img_s2_switch2_on_png);   // assets\s2\switch2_on.png
LV_IMG_DECLARE( ui_img_s2_cut2_2_png);   // assets\s2\cut2_2.png
LV_IMG_DECLARE( ui_img_s2_cut2_3_png);   // assets\s2\cut2_3.png
LV_IMG_DECLARE( ui_img_s3_back3_png);   // assets\s3\back3.png
LV_IMG_DECLARE( ui_img_s3_back3_1_png);   // assets\s3\back3_1.png
LV_IMG_DECLARE( ui_img_s3_b_light_on_png);   // assets\s3\b_light_on.png
LV_IMG_DECLARE( ui_img_s3_b_switch_on_png);   // assets\s3\b_switch_on.png
LV_IMG_DECLARE( ui_img_s3_b_light_off_png);   // assets\s3\b_light_off.png
LV_IMG_DECLARE( ui_img_s3_b_switch_off_png);   // assets\s3\b_switch_off.png
LV_IMG_DECLARE( ui_img_s3_back3_2_png);   // assets\s3\back3_2.png
LV_IMG_DECLARE( ui_img_s3_light1_off_png);   // assets\s3\light1_off.png
LV_IMG_DECLARE( ui_img_s3_switch1_off_png);   // assets\s3\switch1_off.png
LV_IMG_DECLARE( ui_img_s4_cut4_1_png);   // assets\s4\cut4_1.png
LV_IMG_DECLARE( ui_img_s4_cut4_2_png);   // assets\s4\cut4_2.png
LV_IMG_DECLARE( ui_img_s4_back4_png);   // assets\s4\back4.png
LV_IMG_DECLARE( ui_img_s4_mode2_png);   // assets\s4\mode2.png
LV_IMG_DECLARE( ui_img_s4_mode1_png);   // assets\s4\mode1.png
LV_IMG_DECLARE( ui_img_s3_switch1_on_png);   // assets\s3\switch1_on.png
LV_IMG_DECLARE( ui_img_s5_back5_png);   // assets\s5\back5.png
LV_IMG_DECLARE( ui_img_s5_hour_png);   // assets\s5\hour.png
LV_IMG_DECLARE( ui_img_s5_min_png);   // assets\s5\min.png
LV_IMG_DECLARE( ui_img_s5_sec_png);   // assets\s5\sec.png
LV_IMG_DECLARE( ui_img_s5_w_circle_png);   // assets\s5\w_circle.png
LV_IMG_DECLARE( ui_img_s5_c_circle_png);   // assets\s5\c_circle.png
LV_IMG_DECLARE( ui_img_s5_cut5_2_png);   // assets\s5\cut5_2.png
LV_IMG_DECLARE( ui_img_s5_cut5_1_png);   // assets\s5\cut5_1.png
LV_IMG_DECLARE( ui_img_s2_move2_png);   // assets\s2\move2.png
LV_IMG_DECLARE( ui_img_s3_cut3_1_png);   // assets\s3\cut3_1.png
LV_IMG_DECLARE( ui_img_s3_cut3_2_png);   // assets\s3\cut3_2.png
LV_IMG_DECLARE( ui_img_s3_light1_on_png);   // assets\s3\light1_on.png
LV_IMG_DECLARE( ui_img_s3_switch_3_on_png);   // assets\s3\switch_3_on.png

LV_FONT_DECLARE( ui_font_Font1);
LV_FONT_DECLARE( ui_font_Font2);
LV_FONT_DECLARE( ui_font_Font3);
LV_FONT_DECLARE( ui_font_Font4);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
