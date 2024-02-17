

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void rote_bl_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Label2;
void ui_event_Button2( lv_event_t * e);
lv_obj_t *ui_Button2;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Keyboard2;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Dropdown2;
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label4;
lv_obj_t *ui_TextArea2;
lv_obj_t *ui_Keyboard1;
lv_obj_t *ui_Panel18;
lv_obj_t *ui_Label38;
lv_obj_t *ui_Spinner1;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Label39;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Label3;
void ui_event_Button3( lv_event_t * e);
lv_obj_t *ui_Button3;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Keyboard3;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Panel8;
void ui_event_Button4( lv_event_t * e);
lv_obj_t *ui_Button4;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Label6;
void ui_event_Button5( lv_event_t * e);
lv_obj_t *ui_Button5;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label8;
void ui_event_Button9( lv_event_t * e);
lv_obj_t *ui_Button9;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Label17;


// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
lv_obj_t *ui_Screen3;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_Label9;
void ui_event_Button6( lv_event_t * e);
lv_obj_t *ui_Button6;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Keyboard4;
lv_obj_t *ui_Colorwheel2;
lv_obj_t *ui_ImgButton2;


// SCREEN: ui_Screen4
void ui_Screen4_screen_init(void);
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_Label11;
void ui_event_Button7( lv_event_t * e);
lv_obj_t *ui_Button7;
lv_obj_t *ui_Label12;
void ui_event_Button15( lv_event_t * e);
lv_obj_t *ui_Button15;
lv_obj_t *ui_Label19;
lv_obj_t *ui_Image10;
lv_obj_t *ui_Keyboard5;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Label20;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label18;
lv_obj_t *ui_Slider2;
lv_obj_t *ui_Button11;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Button12;
lv_obj_t *ui_Button10;
lv_obj_t *ui_Label21;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Button13;
lv_obj_t *ui_Button14;
lv_obj_t *ui_Roller2;
lv_obj_t *ui_Panel9;
lv_obj_t *ui_Panel11;
lv_obj_t *ui_Label23;
lv_obj_t *ui_Panel13;
lv_obj_t *ui_Panel10;
lv_obj_t *ui_Label24;
lv_obj_t *ui_Label25;
lv_obj_t *ui_Label22;
lv_obj_t *ui_Image8;
lv_obj_t *ui_Panel7;
lv_obj_t *ui_Label26;
lv_obj_t *ui_Label29;
lv_obj_t *ui_Label30;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Button17;
lv_obj_t *ui_Label28;
lv_obj_t *ui_Panel12;
lv_obj_t *ui_Label27;
lv_obj_t *ui_Spinner2;
lv_obj_t *ui_Panel15;
lv_obj_t *ui_Slider3;
lv_obj_t *ui_Label32;
lv_obj_t *ui_Button18;
lv_obj_t *ui_Label33;
lv_obj_t *ui_Panel16;
lv_obj_t *ui_Label34;
lv_obj_t *ui_Button19;
lv_obj_t *ui_Label35;
lv_obj_t *ui_Roller1;


// SCREEN: ui_Screen5
void ui_Screen5_screen_init(void);
lv_obj_t *ui_Screen5;
lv_obj_t *ui_Panel14;
lv_obj_t *ui_Label31;
void ui_event_Button16( lv_event_t * e);
lv_obj_t *ui_Button16;
lv_obj_t *ui_Label36;
lv_obj_t *ui_Panel17;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Switch2;
lv_obj_t *ui_Label37;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Slider1;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void rote_bl_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 10000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, 3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
//lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////


///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
// ui_Screen3_screen_init();
ui_Screen4_screen_init();
ui_Screen5_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
