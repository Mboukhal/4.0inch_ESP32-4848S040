

#include "ui.h"

void ui_Screen2_screen_init(void)
{
ui_Screen2 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Keyboard4 = lv_keyboard_create(ui_Screen2);
lv_obj_set_width( ui_Keyboard4, 475);
lv_obj_set_height( ui_Keyboard4, 171);
lv_obj_set_x( ui_Keyboard4, -1 );
lv_obj_set_y( ui_Keyboard4, 150 );
lv_obj_set_align( ui_Keyboard4, LV_ALIGN_CENTER );

ui_Dropdown2 = lv_dropdown_create(ui_Screen2);
lv_dropdown_set_options( ui_Dropdown2, "SSID" );
lv_obj_set_width( ui_Dropdown2, 292);
lv_obj_set_height( ui_Dropdown2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Dropdown2, -52 );
lv_obj_set_y( ui_Dropdown2, -118 );
lv_obj_set_align( ui_Dropdown2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Dropdown2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_font(ui_Dropdown2, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_Panel1 = lv_obj_create(ui_Screen2);
lv_obj_set_width( ui_Panel1, 492);
lv_obj_set_height( ui_Panel1, 66);
lv_obj_set_x( ui_Panel1, -1 );
lv_obj_set_y( ui_Panel1, -209 );
lv_obj_set_align( ui_Panel1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label12 = lv_label_create(ui_Panel1);
lv_obj_set_width( ui_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label12,"请连接WiFi");
lv_obj_set_style_text_font(ui_Label12, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button1 = lv_btn_create(ui_Screen2);
lv_obj_set_width( ui_Button1, 85);
lv_obj_set_height( ui_Button1, 41);
lv_obj_set_x( ui_Button1, 179 );
lv_obj_set_y( ui_Button1, -208 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label13 = lv_label_create(ui_Button1);
lv_obj_set_width( ui_Label13, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label13, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label13, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label13,"跳过");
lv_obj_set_style_text_font(ui_Label13, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2 = lv_btn_create(ui_Screen2);
lv_obj_set_width( ui_Button2, 85);
lv_obj_set_height( ui_Button2, 41);
lv_obj_set_x( ui_Button2, 151 );
lv_obj_set_y( ui_Button2, -118 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label14 = lv_label_create(ui_Button2);
lv_obj_set_width( ui_Label14, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label14,"刷新");
lv_obj_set_style_text_font(ui_Label14, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextArea1 = lv_textarea_create(ui_Screen2);
lv_obj_set_width( ui_TextArea1, 399);
lv_obj_set_height( ui_TextArea1, LV_SIZE_CONTENT);   /// 39
lv_obj_set_x( ui_TextArea1, 1 );
lv_obj_set_y( ui_TextArea1, -51 );
lv_obj_set_align( ui_TextArea1, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_TextArea1,"Password");
lv_textarea_set_one_line(ui_TextArea1,true);
lv_textarea_set_password_mode(ui_TextArea1, true);
lv_obj_set_style_text_font(ui_TextArea1, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_Image63 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_Image63, &ui_img_logo_png);
lv_obj_set_width( ui_Image63, LV_SIZE_CONTENT);  /// 146
lv_obj_set_height( ui_Image63, LV_SIZE_CONTENT);   /// 55
lv_obj_set_x( ui_Image63, -4 );
lv_obj_set_y( ui_Image63, 19 );
lv_obj_set_align( ui_Image63, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image63, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image63, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

}
