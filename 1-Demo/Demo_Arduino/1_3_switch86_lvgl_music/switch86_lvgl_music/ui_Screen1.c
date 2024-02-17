

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel2 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel2, 809);
lv_obj_set_height( ui_Panel2, 47);
lv_obj_set_x( ui_Panel2, -2 );
lv_obj_set_y( ui_Panel2, -219 );
lv_obj_set_align( ui_Panel2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel2, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label2 = lv_label_create(ui_Panel2);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, 3 );
lv_obj_set_y( ui_Label2, 2 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"Wi-Fi Config");
lv_obj_set_style_text_font(ui_Label2, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2 = lv_btn_create(ui_Panel2);
lv_obj_set_width( ui_Button2, 47);
lv_obj_set_height( ui_Button2, 30);
lv_obj_set_x( ui_Button2, 368 );
lv_obj_set_y( ui_Button2, 2 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label1 = lv_label_create(ui_Button2);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"Skip");
lv_obj_set_style_text_font(ui_Label1, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Keyboard2 = lv_keyboard_create(ui_Screen1);
lv_obj_set_width( ui_Keyboard2, 300);
lv_obj_set_height( ui_Keyboard2, 120);
lv_obj_set_x( ui_Keyboard2, 2 );
lv_obj_set_y( ui_Keyboard2, 54 );
lv_obj_set_align( ui_Keyboard2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Keyboard2, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Keyboard2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE );    /// Flags

ui_Panel1 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel1, 804);
lv_obj_set_height( ui_Panel1, 422);
lv_obj_set_x( ui_Panel1, -2 );
lv_obj_set_y( ui_Panel1, 22 );
lv_obj_set_align( ui_Panel1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel1, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel1, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_scroll_dir(ui_Panel1, LV_DIR_VER);
lv_obj_set_style_radius(ui_Panel1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Dropdown2 = lv_dropdown_create(ui_Panel1);
lv_dropdown_set_options( ui_Dropdown2, "Please refresh..." );
lv_obj_set_width( ui_Dropdown2, 389);
lv_obj_set_height( ui_Dropdown2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Dropdown2, -47 );
lv_obj_set_y( ui_Dropdown2, -164 );
lv_obj_set_align( ui_Dropdown2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Dropdown2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_font(ui_Dropdown2, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_text_font(ui_Dropdown2, &lv_font_montserrat_16, LV_PART_INDICATOR| LV_STATE_DEFAULT);


ui_Button1 = lv_btn_create(ui_Panel1);
lv_obj_set_width( ui_Button1, 64);
lv_obj_set_height( ui_Button1, 34);
lv_obj_set_x( ui_Button1, 202 );
lv_obj_set_y( ui_Button1, -163 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label4 = lv_label_create(ui_Button1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"Refresh");
lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextArea2 = lv_textarea_create(ui_Panel1);
lv_obj_set_width( ui_TextArea2, 468);
lv_obj_set_height( ui_TextArea2, LV_SIZE_CONTENT);   /// 36
lv_obj_set_x( ui_TextArea2, -6 );
lv_obj_set_y( ui_TextArea2, -102 );
lv_obj_set_align( ui_TextArea2, LV_ALIGN_CENTER );
lv_textarea_set_max_length(ui_TextArea2,128);
lv_textarea_set_placeholder_text(ui_TextArea2,"Please input a password");
lv_textarea_set_one_line(ui_TextArea2,true);
lv_obj_add_flag( ui_TextArea2, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_text_font(ui_TextArea2, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_Keyboard1 = lv_keyboard_create(ui_Panel1);
lv_obj_set_width( ui_Keyboard1, 793);
lv_obj_set_height( ui_Keyboard1, 244);
lv_obj_set_x( ui_Keyboard1, 1 );
lv_obj_set_y( ui_Keyboard1, 94 );
lv_obj_set_align( ui_Keyboard1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Keyboard1, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Keyboard1, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM );    /// Flags

ui_Panel18 = lv_obj_create(ui_Screen1);
lv_obj_set_width( ui_Panel18, 786);
lv_obj_set_height( ui_Panel18, 415);
lv_obj_set_x( ui_Panel18, 1 );
lv_obj_set_y( ui_Panel18, 22 );
lv_obj_set_align( ui_Panel18, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Panel18, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Panel18, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel18, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel18, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Panel18, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label38 = lv_label_create(ui_Panel18);
lv_obj_set_width( ui_Label38, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label38, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label38, -6 );
lv_obj_set_y( ui_Label38, 77 );
lv_obj_set_align( ui_Label38, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label38,"Load hot music list...");
lv_obj_set_style_text_font(ui_Label38, &ui_font_Font1YHall20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Spinner1 = lv_spinner_create(ui_Panel18,1000,90);
lv_obj_set_width( ui_Spinner1, 189);
lv_obj_set_height( ui_Spinner1, 119);
lv_obj_set_x( ui_Spinner1, 25 );
lv_obj_set_y( ui_Spinner1, -24 );
lv_obj_set_align( ui_Spinner1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Spinner1, LV_OBJ_FLAG_CLICKABLE );    /// Flags

ui_Image9 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image9, &ui_img_logo_png);
lv_obj_set_width( ui_Image9, LV_SIZE_CONTENT);  /// 146
lv_obj_set_height( ui_Image9, LV_SIZE_CONTENT);   /// 55
lv_obj_set_x( ui_Image9, 0 );
lv_obj_set_y( ui_Image9, -14 );
lv_obj_set_align( ui_Image9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image9, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label39 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label39, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label39, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label39, 0 );
lv_obj_set_y( ui_Label39, 37 );
lv_obj_set_align( ui_Label39, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label39,"86 panel music player");

lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}
