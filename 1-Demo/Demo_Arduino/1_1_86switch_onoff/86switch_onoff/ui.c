

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Keyboard4;
lv_obj_t *ui_Dropdown2;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Label12;
void ui_event_Button1( lv_event_t * e);
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Button2;
lv_obj_t *ui_Label14;
lv_obj_t *ui_TextArea1;
lv_obj_t *ui_Image63;


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Image8;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Image10;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Label17;


// SCREEN: ui_Screen10
void ui_Screen10_screen_init(void);
lv_obj_t *ui_Screen10;
void ui_event_Image11( lv_event_t * e);
lv_obj_t *ui_Image11;
lv_obj_t *ui_Image12;
lv_obj_t *ui_Image13;
lv_obj_t *ui_Image14;
lv_obj_t *ui_Image15;
void ui_event_Image16( lv_event_t * e);
lv_obj_t *ui_Image16;
void ui_event_Image17( lv_event_t * e);
lv_obj_t *ui_Image17;
lv_obj_t *ui_Image18;
lv_obj_t *ui_Image19;
lv_obj_t *ui_Image20;
lv_obj_t *ui_Image21;
lv_obj_t *ui_Image22;
lv_obj_t *ui_Slider1;
lv_obj_t *ui_Slider2;


// SCREEN: ui_Screen11
void ui_Screen11_screen_init(void);
void ui_event_Screen11( lv_event_t * e);
lv_obj_t *ui_Screen11;
lv_obj_t *ui_Image23;
lv_obj_t *ui_Image24;
lv_obj_t *ui_Image29;
lv_obj_t *ui_Image26;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Image25;
lv_obj_t *ui_Image31;
lv_obj_t *ui_Image32;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Image28;
lv_obj_t *ui_Image27;
lv_obj_t *ui_Image30;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Image33;
lv_obj_t *ui_Image34;
lv_obj_t *ui_Image35;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Image36;
lv_obj_t *ui_Image37;
lv_obj_t *ui_Image38;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Image47;
lv_obj_t *ui_Image48;
lv_obj_t *ui_Image49;
lv_obj_t *ui_Image50;
lv_obj_t *ui_Image51;


// SCREEN: ui_Screen12
void ui_Screen12_screen_init(void);
void ui_event_Screen12( lv_event_t * e);
lv_obj_t *ui_Screen12;
lv_obj_t *ui_Image39;
lv_obj_t *ui_Image40;
lv_obj_t *ui_Image41;
lv_obj_t *ui_Image42;
lv_obj_t *ui_Image43;
lv_obj_t *ui_Image44;
lv_obj_t *ui_Image45;
lv_obj_t *ui_Image46;
void ui_event_Image64( lv_event_t * e);
lv_obj_t *ui_Image64;
void ui_event_Button3( lv_event_t * e);
lv_obj_t *ui_Button3;
void ui_event_Image65( lv_event_t * e);
lv_obj_t *ui_Image65;
void ui_event_Button4( lv_event_t * e);
lv_obj_t *ui_Button4;
void ui_event_Image66( lv_event_t * e);
lv_obj_t *ui_Image66;
void ui_event_Button5( lv_event_t * e);
lv_obj_t *ui_Button5;
void ui_event_Button6( lv_event_t * e);
lv_obj_t *ui_Button6;
void ui_event_Image67( lv_event_t * e);
lv_obj_t *ui_Image67;


// SCREEN: ui_Screen13
void ui_Screen13_screen_init(void);
void ui_event_Screen13( lv_event_t * e);
lv_obj_t *ui_Screen13;
lv_obj_t *ui_Image52;
lv_obj_t *ui_Image53;
lv_obj_t *ui_Image54;
lv_obj_t *ui_Image55;
lv_obj_t *ui_Image56;
lv_obj_t *ui_Image57;
lv_obj_t *ui_Image58;
lv_obj_t *ui_Image59;
lv_obj_t *ui_Image60;
lv_obj_t *ui_Image61;
lv_obj_t *ui_Image62;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_back[5] = {&ui_img_s1_back1_png, &ui_img_s2_back2_png, &ui_img_s3_back3_png, &ui_img_s4_back4_png, &ui_img_s5_back5_png};
const lv_img_dsc_t *ui_imgset_cut[2] = {&ui_img_s1_cut1_png, &ui_img_s1_cut2_png};
const lv_img_dsc_t *ui_imgset_cut_[1] = {&ui_img_s2_cut2_2_png};
const lv_img_dsc_t *ui_imgset_cut2_[1] = {&ui_img_s2_cut2_3_png};
const lv_img_dsc_t *ui_imgset_move[2] = {&ui_img_s2_move1_png, &ui_img_s2_move2_png};
const lv_img_dsc_t *ui_imgset_back3_[2] = {&ui_img_s3_back3_1_png, &ui_img_s3_back3_2_png};
const lv_img_dsc_t *ui_imgset_cut3_[2] = {&ui_img_s3_cut3_1_png, &ui_img_s3_cut3_2_png};
const lv_img_dsc_t *ui_imgset_cut4_[2] = {&ui_img_s4_cut4_1_png, &ui_img_s4_cut4_2_png};
const lv_img_dsc_t *ui_imgset_mode[2] = {&ui_img_s4_mode1_png, &ui_img_s4_mode2_png};
const lv_img_dsc_t *ui_imgset_cut5_[2] = {&ui_img_s5_cut5_1_png, &ui_img_s5_cut5_2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
}
}
void ui_event_Screen1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen10, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen10_screen_init);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen13, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen13_screen_init);
}
}
void ui_event_Image11( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen11, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen11_screen_init);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen1_screen_init);
}
}
//void ui_event_Image16( lv_event_t * e) {
//    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
//if ( event_code == LV_EVENT_CLICKED) {
//      _ui_flag_modify( ui_Image16, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
//      _ui_flag_modify( ui_Image17, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
//}
//}
//void ui_event_Image17( lv_event_t * e) {
//    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
//if ( event_code == LV_EVENT_CLICKED) {
//      _ui_flag_modify( ui_Image17, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
//      _ui_flag_modify( ui_Image16, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
//}
//}
void ui_event_Screen11( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen12, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen12_screen_init);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen10, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen10_screen_init);
}
}
void ui_event_Screen12( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen13, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen13_screen_init);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen11, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen11_screen_init);
}
}
void ui_event_Image64( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image64, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
      _ui_flag_modify( ui_Button3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
}
void ui_event_Button3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image64, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_Button3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Image65( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image65, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
      _ui_flag_modify( ui_Button4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
}
void ui_event_Button4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image65, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_Button4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Image66( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image66, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
      _ui_flag_modify( ui_Button5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
}
void ui_event_Button5( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image66, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_Button5, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Button6( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image67, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      _ui_flag_modify( ui_Button6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
}
}
void ui_event_Image67( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Image67, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
      _ui_flag_modify( ui_Button6, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}
}
void ui_event_Screen13( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen12, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen12_screen_init);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, &ui_Screen1_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen2_screen_init();
ui_Screen1_screen_init();
ui_Screen10_screen_init();
ui_Screen11_screen_init();
ui_Screen12_screen_init();
ui_Screen13_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen2);
}
