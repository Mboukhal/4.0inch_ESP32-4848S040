

#include "ui.h"

void ui_Screen4_screen_init(void)
{
ui_Screen4 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Panel5 = lv_obj_create(ui_Screen4);
lv_obj_set_width( ui_Panel5, 823);
lv_obj_set_height( ui_Panel5, 47);
lv_obj_set_x( ui_Panel5, 0 );
lv_obj_set_y( ui_Panel5, -217 );
lv_obj_set_align( ui_Panel5, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label11 = lv_label_create(ui_Panel5);
lv_obj_set_width( ui_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label11, 3 );
lv_obj_set_y( ui_Label11, 2 );
lv_obj_set_align( ui_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label11,"Music Player");
lv_obj_set_style_text_font(ui_Label11, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button7 = lv_btn_create(ui_Panel5);
lv_obj_set_width( ui_Button7, 47);
lv_obj_set_height( ui_Button7, 30);
lv_obj_set_x( ui_Button7, -208 );
lv_obj_set_y( ui_Button7, 1 );
lv_obj_set_align( ui_Button7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_text_font(ui_Button7, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label12 = lv_label_create(ui_Button7);
lv_obj_set_width( ui_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label12,"Back");

ui_Button15 = lv_btn_create(ui_Panel5);
lv_obj_set_width( ui_Button15, 47);
lv_obj_set_height( ui_Button15, 30);
lv_obj_set_x( ui_Button15, 208 );
lv_obj_set_y( ui_Button15, 0 );
lv_obj_set_align( ui_Button15, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button15, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button15, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_text_font(ui_Button15, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label19 = lv_label_create(ui_Button15);
lv_obj_set_width( ui_Label19, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label19, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label19, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label19,"List");

ui_Image10 = lv_img_create(ui_Panel5);
lv_img_set_src(ui_Image10, &ui_img_sdcard_icon_png);
lv_obj_set_width( ui_Image10, LV_SIZE_CONTENT);  /// 32
lv_obj_set_height( ui_Image10, LV_SIZE_CONTENT);   /// 32
lv_obj_set_x( ui_Image10, 70 );
lv_obj_set_y( ui_Image10, 0 );
lv_obj_set_align( ui_Image10, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image10, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_angle(ui_Image10,2700);

ui_Keyboard5 = lv_keyboard_create(ui_Screen4);
lv_obj_set_width( ui_Keyboard5, 300);
lv_obj_set_height( ui_Keyboard5, 120);
lv_obj_set_x( ui_Keyboard5, 2 );
lv_obj_set_y( ui_Keyboard5, 54 );
lv_obj_set_align( ui_Keyboard5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Keyboard5, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Keyboard5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE );    /// Flags

ui_Label14 = lv_label_create(ui_Screen4);
lv_obj_set_width( ui_Label14, 157);
lv_obj_set_height( ui_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label14, -157 );
lv_obj_set_y( ui_Label14, -113 );
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_Label14,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_label_set_text(ui_Label14,"乌梅子酱");
lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label14, &ui_font_Font1YHall24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label20 = lv_label_create(ui_Screen4);
lv_obj_set_width( ui_Label20, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label20, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label20, -157 );
lv_obj_set_y( ui_Label20, -77 );
lv_obj_set_align( ui_Label20, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label20,"歌手：李荣浩");
lv_obj_set_style_text_font(ui_Label20, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image5 = lv_img_create(ui_Screen4);
lv_img_set_src(ui_Image5, &ui_img_music_b_icon_png);
lv_obj_set_width( ui_Image5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Image5, -158 );
lv_obj_set_y( ui_Image5, 15 );
lv_obj_set_align( ui_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Image5, 30, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Image5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Image5, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Image5, lv_color_hex(0xFBFBFB), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Image5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Image5, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_Image5, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label18 = lv_label_create(ui_Screen4);
lv_obj_set_width( ui_Label18, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label18, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label18, -160 );
lv_obj_set_y( ui_Label18, -48 );
lv_obj_set_align( ui_Label18, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label18,"专辑：纵横四海");
lv_obj_set_style_text_font(ui_Label18, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Slider2 = lv_slider_create(ui_Screen4);
lv_obj_set_width( ui_Slider2, 416);
lv_obj_set_height( ui_Slider2, 10);
lv_obj_set_x( ui_Slider2, 3 );
lv_obj_set_y( ui_Slider2, 107 );
lv_obj_set_align( ui_Slider2, LV_ALIGN_CENTER );


ui_Button11 = lv_btn_create(ui_Screen4);
lv_obj_set_width( ui_Button11, 80);
lv_obj_set_height( ui_Button11, 80);
lv_obj_set_x( ui_Button11, 4 );
lv_obj_set_y( ui_Button11, 174 );
lv_obj_set_align( ui_Button11, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button11, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Button11, 60, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image6 = lv_img_create(ui_Screen4);
lv_img_set_src(ui_Image6, &ui_img_play_icon_png);
lv_obj_set_width( ui_Image6, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_Image6, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image6, 8 );
lv_obj_set_y( ui_Image6, 173 );
lv_obj_set_align( ui_Image6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image6, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Button12 = lv_btn_create(ui_Screen4);
lv_obj_set_width( ui_Button12, 100);
lv_obj_set_height( ui_Button12, 77);
lv_obj_set_x( ui_Button12, -96 );
lv_obj_set_y( ui_Button12, 174 );
lv_obj_set_align( ui_Button12, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button12, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Button12, &ui_img_pre_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_Button10 = lv_btn_create(ui_Screen4);
lv_obj_set_width( ui_Button10, 100);
lv_obj_set_height( ui_Button10, 77);
lv_obj_set_x( ui_Button10, 103 );
lv_obj_set_y( ui_Button10, 175 );
lv_obj_set_align( ui_Button10, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button10, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button10, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Button10, &ui_img_next_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_Label21 = lv_label_create(ui_Screen4);
lv_obj_set_width( ui_Label21, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label21, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label21, -170 );
lv_obj_set_y( ui_Label21, 131 );
lv_obj_set_align( ui_Label21, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label21,"00:00/03:00");

ui_Image7 = lv_img_create(ui_Screen4);
lv_img_set_src(ui_Image7, &ui_img_pause_icon_png);
lv_obj_set_width( ui_Image7, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_Image7, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image7, 3 );
lv_obj_set_y( ui_Image7, 174 );
lv_obj_set_align( ui_Image7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Button13 = lv_btn_create(ui_Screen4);
lv_obj_set_width( ui_Button13, 88);
lv_obj_set_height( ui_Button13, 60);
lv_obj_set_x( ui_Button13, -186 );
lv_obj_set_y( ui_Button13, 175 );
lv_obj_set_align( ui_Button13, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button13, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button13, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Button13, &ui_img_normal_play_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_Button14 = lv_btn_create(ui_Screen4);
lv_obj_set_width( ui_Button14, 100);
lv_obj_set_height( ui_Button14, 77);
lv_obj_set_x( ui_Button14, 186 );
lv_obj_set_y( ui_Button14, 175 );
lv_obj_set_align( ui_Button14, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button14, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button14, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button14, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button14, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Button14, &ui_img_vol_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT );

ui_Roller2 = lv_roller_create(ui_Screen4);
lv_roller_set_options( ui_Roller2, "...\n...\n...", LV_ROLLER_MODE_NORMAL );
lv_obj_set_width( ui_Roller2, 290);
lv_obj_set_height( ui_Roller2, 179);
lv_obj_set_x( ui_Roller2, 77 );
lv_obj_set_y( ui_Roller2, -40 );
lv_obj_set_align( ui_Roller2, LV_ALIGN_CENTER );
lv_obj_set_style_text_color(ui_Roller2, lv_color_hex(0x7A7A7A), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Roller2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Roller2, &ui_font_Font1YHall20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Roller2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_text_font(ui_Roller2, &ui_font_Font1YHall24, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x101418), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Roller2, 0, LV_PART_SELECTED| LV_STATE_DEFAULT);

ui_Panel9 = lv_obj_create(ui_Screen4);
lv_obj_set_width( ui_Panel9, 394);
lv_obj_set_height( ui_Panel9, 323);
lv_obj_set_x( ui_Panel9, 0 );
lv_obj_set_y( ui_Panel9, 19 );
lv_obj_set_align( ui_Panel9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel9, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_scrollbar_mode(ui_Panel9, LV_SCROLLBAR_MODE_ACTIVE);

ui_Panel11 = lv_obj_create(ui_Panel9);
lv_obj_set_width( ui_Panel11, 367);
lv_obj_set_height( ui_Panel11, 32);
lv_obj_set_x( ui_Panel11, 0 );
lv_obj_set_y( ui_Panel11, -130 );
lv_obj_set_align( ui_Panel11, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel11, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_border_width(ui_Panel11, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label23 = lv_label_create(ui_Panel11);
lv_obj_set_width( ui_Label23, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label23, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label23, 0 );
lv_obj_set_y( ui_Label23, -3 );
lv_obj_set_align( ui_Label23, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label23,"Music List");
lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel13 = lv_obj_create(ui_Panel9);
lv_obj_set_width( ui_Panel13, 384);
lv_obj_set_height( ui_Panel13, 266);
lv_obj_set_x( ui_Panel13, 0 );
lv_obj_set_y( ui_Panel13, 23 );
lv_obj_set_align( ui_Panel13, LV_ALIGN_CENTER );
lv_obj_set_scrollbar_mode(ui_Panel13, LV_SCROLLBAR_MODE_ACTIVE);
lv_obj_set_style_border_width(ui_Panel13, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel10 = lv_obj_create(ui_Panel13);
lv_obj_set_width( ui_Panel10, 373);
lv_obj_set_height( ui_Panel10, 87);
lv_obj_set_x( ui_Panel10, 0 );
lv_obj_set_y( ui_Panel10, -84 );
lv_obj_set_align( ui_Panel10, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x171717), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label24 = lv_label_create(ui_Panel10);
lv_obj_set_width( ui_Label24, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label24, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label24, 58 );
lv_obj_set_y( ui_Label24, -12 );
lv_obj_set_align( ui_Label24, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_Label24,"乌梅子酱");
lv_obj_set_style_text_font(ui_Label24, &ui_font_Font1YHall20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label25 = lv_label_create(ui_Panel10);
lv_obj_set_width( ui_Label25, 60);
lv_obj_set_height( ui_Label25, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label25, 60 );
lv_obj_set_y( ui_Label25, 17 );
lv_obj_set_align( ui_Label25, LV_ALIGN_LEFT_MID );
lv_label_set_long_mode(ui_Label25,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_label_set_text(ui_Label25,"李荣浩");
lv_obj_set_style_text_font(ui_Label25, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label22 = lv_label_create(ui_Panel10);
lv_obj_set_width( ui_Label22, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label22, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label22, 121 );
lv_obj_set_y( ui_Label22, 18 );
lv_obj_set_align( ui_Label22, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_Label22,"纵横四海");
lv_obj_set_style_text_font(ui_Label22, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image8 = lv_img_create(ui_Panel10);
lv_img_set_src(ui_Image8, &ui_img_list_play_icon_png);
lv_obj_set_width( ui_Image8, LV_SIZE_CONTENT);  /// 48
lv_obj_set_height( ui_Image8, LV_SIZE_CONTENT);   /// 48
lv_obj_set_x( ui_Image8, -150 );
lv_obj_set_y( ui_Image8, 0 );
lv_obj_set_align( ui_Image8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image8, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Panel7 = lv_obj_create(ui_Panel13);
lv_obj_set_width( ui_Panel7, 373);
lv_obj_set_height( ui_Panel7, 87);
lv_obj_set_x( ui_Panel7, 0 );
lv_obj_set_y( ui_Panel7, 15 );
lv_obj_set_align( ui_Panel7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel7, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel7, lv_color_hex(0x171717), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label26 = lv_label_create(ui_Panel7);
lv_obj_set_width( ui_Label26, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label26, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label26, -145 );
lv_obj_set_y( ui_Label26, -12 );
lv_obj_set_align( ui_Label26, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label26,"乌梅子酱");
lv_obj_set_style_text_font(ui_Label26, &ui_font_Font1YHall20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label29 = lv_label_create(ui_Panel7);
lv_obj_set_width( ui_Label29, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label29, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label29, -160 );
lv_obj_set_y( ui_Label29, 17 );
lv_obj_set_align( ui_Label29, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label29,"李荣浩");
lv_obj_set_style_text_font(ui_Label29, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label30 = lv_label_create(ui_Panel7);
lv_obj_set_width( ui_Label30, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label30, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label30, -90 );
lv_obj_set_y( ui_Label30, 18 );
lv_obj_set_align( ui_Label30, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label30,"纵横四海");
lv_obj_set_style_text_font(ui_Label30, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image4 = lv_img_create(ui_Panel7);
lv_img_set_src(ui_Image4, &ui_img_list_play_icon_png);
lv_obj_set_width( ui_Image4, LV_SIZE_CONTENT);  /// 48
lv_obj_set_height( ui_Image4, LV_SIZE_CONTENT);   /// 48
lv_obj_set_x( ui_Image4, -215 );
lv_obj_set_y( ui_Image4, 0 );
lv_obj_set_align( ui_Image4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image4, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Button17 = lv_btn_create(ui_Panel9);
lv_obj_set_width( ui_Button17, 70);
lv_obj_set_height( ui_Button17, 40);
lv_obj_set_x( ui_Button17, 153 );
lv_obj_set_y( ui_Button17, -132 );
lv_obj_set_align( ui_Button17, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button17, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button17, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label28 = lv_label_create(ui_Button17);
lv_obj_set_width( ui_Label28, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label28, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label28, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label28,"Close");
lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel12 = lv_obj_create(ui_Screen4);
lv_obj_set_width( ui_Panel12, 687);
lv_obj_set_height( ui_Panel12, 386);
lv_obj_set_x( ui_Panel12, 6 );
lv_obj_set_y( ui_Panel12, 22 );
lv_obj_set_align( ui_Panel12, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel12, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel12, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Panel12, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label27 = lv_label_create(ui_Panel12);
lv_obj_set_width( ui_Label27, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label27, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label27, -6 );
lv_obj_set_y( ui_Label27, 77 );
lv_obj_set_align( ui_Label27, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label27,"Load hot music list...");
lv_obj_set_style_text_font(ui_Label27, &ui_font_Font1YHall20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Spinner2 = lv_spinner_create(ui_Panel12,1000,90);
lv_obj_set_width( ui_Spinner2, 189);
lv_obj_set_height( ui_Spinner2, 119);
lv_obj_set_x( ui_Spinner2, 25 );
lv_obj_set_y( ui_Spinner2, -24 );
lv_obj_set_align( ui_Spinner2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Spinner2, LV_OBJ_FLAG_CLICKABLE );    /// Flags

ui_Panel15 = lv_obj_create(ui_Screen4);
lv_obj_set_width( ui_Panel15, 404);
lv_obj_set_height( ui_Panel15, 132);
lv_obj_set_x( ui_Panel15, 4 );
lv_obj_set_y( ui_Panel15, -1 );
lv_obj_set_align( ui_Panel15, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel15, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel15, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Slider3 = lv_slider_create(ui_Panel15);
lv_slider_set_range(ui_Slider3, 0,21);
lv_slider_set_value( ui_Slider3, 21, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider3)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider3, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider3, 348);
lv_obj_set_height( ui_Slider3, 10);
lv_obj_set_x( ui_Slider3, 1 );
lv_obj_set_y( ui_Slider3, 10 );
lv_obj_set_align( ui_Slider3, LV_ALIGN_CENTER );


ui_Label32 = lv_label_create(ui_Panel15);
lv_obj_set_width( ui_Label32, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label32, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label32, -7 );
lv_obj_set_y( ui_Label32, -40 );
lv_obj_set_align( ui_Label32, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label32,"Setup Volume");
lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button18 = lv_btn_create(ui_Panel15);
lv_obj_set_width( ui_Button18, 65);
lv_obj_set_height( ui_Button18, 40);
lv_obj_set_x( ui_Button18, 160 );
lv_obj_set_y( ui_Button18, -40 );
lv_obj_set_align( ui_Button18, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button18, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button18, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label33 = lv_label_create(ui_Button18);
lv_obj_set_width( ui_Label33, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label33, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label33, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label33,"Close");

ui_Panel16 = lv_obj_create(ui_Screen4);
lv_obj_set_width( ui_Panel16, 227);
lv_obj_set_height( ui_Panel16, 180);
lv_obj_set_x( ui_Panel16, -94 );
lv_obj_set_y( ui_Panel16, 52 );
lv_obj_set_align( ui_Panel16, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel16, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel16, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label34 = lv_label_create(ui_Panel16);
lv_obj_set_width( ui_Label34, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label34, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label34, -11 );
lv_obj_set_y( ui_Label34, -64 );
lv_obj_set_align( ui_Label34, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label34,"Play mode");

ui_Button19 = lv_btn_create(ui_Panel16);
lv_obj_set_width( ui_Button19, 63);
lv_obj_set_height( ui_Button19, 41);
lv_obj_set_x( ui_Button19, 77 );
lv_obj_set_y( ui_Button19, -65 );
lv_obj_set_align( ui_Button19, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button19, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button19, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label35 = lv_label_create(ui_Button19);
lv_obj_set_width( ui_Label35, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label35, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label35, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label35,"Close");

ui_Roller1 = lv_roller_create(ui_Panel16);
lv_roller_set_options( ui_Roller1, "Sequential Play\nRandom Play\nSingle song loop", LV_ROLLER_MODE_NORMAL );
lv_obj_set_width( ui_Roller1, 215);
lv_obj_set_height( ui_Roller1, 117);
lv_obj_set_x( ui_Roller1, 0 );
lv_obj_set_y( ui_Roller1, 23 );
lv_obj_set_align( ui_Roller1, LV_ALIGN_CENTER );
lv_obj_set_style_border_width(ui_Roller1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button15, ui_event_Button15, LV_EVENT_ALL, NULL);

}
