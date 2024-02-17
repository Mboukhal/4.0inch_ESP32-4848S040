

#include "ui.h"

void ui_Screen2_screen_init(void)
{
ui_Screen2 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Panel3 = lv_obj_create(ui_Screen2);
lv_obj_set_width( ui_Panel3, 817);
lv_obj_set_height( ui_Panel3, 47);
lv_obj_set_x( ui_Panel3, 1 );
lv_obj_set_y( ui_Panel3, -217 );
lv_obj_set_align( ui_Panel3, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label3 = lv_label_create(ui_Panel3);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, 3 );
lv_obj_set_y( ui_Label3, 2 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"Meun");
lv_obj_set_style_text_font(ui_Label3, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button3 = lv_btn_create(ui_Panel3);
lv_obj_set_width( ui_Button3, 47);
lv_obj_set_height( ui_Button3, 30);
lv_obj_set_x( ui_Button3, -208 );
lv_obj_set_y( ui_Button3, 0 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_text_font(ui_Button3, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Button3);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"Back");

ui_Keyboard3 = lv_keyboard_create(ui_Screen2);
lv_obj_set_width( ui_Keyboard3, 300);
lv_obj_set_height( ui_Keyboard3, 120);
lv_obj_set_x( ui_Keyboard3, 2 );
lv_obj_set_y( ui_Keyboard3, 54 );
lv_obj_set_align( ui_Keyboard3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Keyboard3, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Keyboard3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE );    /// Flags

ui_Label7 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label7, -7 );
lv_obj_set_y( ui_Label7, 203 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label7,"Welcome to the music player, please select the menu");
lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Panel8 = lv_obj_create(ui_Screen2);
lv_obj_set_width( ui_Panel8, 444);
lv_obj_set_height( ui_Panel8, 264);
lv_obj_set_x( ui_Panel8, 0 );
lv_obj_set_y( ui_Panel8, 1 );
lv_obj_set_align( ui_Panel8, LV_ALIGN_CENTER );

ui_Button4 = lv_btn_create(ui_Panel8);
lv_obj_set_width( ui_Button4, 150);
lv_obj_set_height( ui_Button4, 100);
lv_obj_set_x( ui_Button4, -105 );
lv_obj_set_y( ui_Button4, -1 );
lv_obj_set_align( ui_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image1 = lv_img_create(ui_Button4);
lv_img_set_src(ui_Image1, &ui_img_music_icon_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Image1, 0 );
lv_obj_set_y( ui_Image1, -11 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label6 = lv_label_create(ui_Button4);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label6, 0 );
lv_obj_set_y( ui_Label6, 29 );
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,"Music");
lv_obj_set_style_text_font(ui_Label6, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button5 = lv_btn_create(ui_Panel8);
lv_obj_set_width( ui_Button5, 150);
lv_obj_set_height( ui_Button5, 100);
lv_obj_set_x( ui_Button5, -200 );
lv_obj_set_y( ui_Button5, 0 );
lv_obj_set_align( ui_Button5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image2 = lv_img_create(ui_Button5);
lv_img_set_src(ui_Image2, &ui_img_light_icon_png);
lv_obj_set_width( ui_Image2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Image2, 0 );
lv_obj_set_y( ui_Image2, -12 );
lv_obj_set_align( ui_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label8 = lv_label_create(ui_Button5);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label8, 0 );
lv_obj_set_y( ui_Label8, 29 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"Light");
lv_obj_set_style_text_font(ui_Label8, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button9 = lv_btn_create(ui_Panel8);
lv_obj_set_width( ui_Button9, 150);
lv_obj_set_height( ui_Button9, 100);
lv_obj_set_x( ui_Button9, 108 );
lv_obj_set_y( ui_Button9, -1 );
lv_obj_set_align( ui_Button9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button9, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image3 = lv_img_create(ui_Button9);
lv_img_set_src(ui_Image3, &ui_img_setting_icon_png);
lv_obj_set_width( ui_Image3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Image3, 0 );
lv_obj_set_y( ui_Image3, -11 );
lv_obj_set_align( ui_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label17 = lv_label_create(ui_Button9);
lv_obj_set_width( ui_Label17, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label17, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label17, 0 );
lv_obj_set_y( ui_Label17, 29 );
lv_obj_set_align( ui_Label17, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label17,"Setting");
lv_obj_set_style_text_font(ui_Label17, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);

lv_obj_add_event_cb(ui_Button9, ui_event_Button9, LV_EVENT_ALL, NULL);

}
