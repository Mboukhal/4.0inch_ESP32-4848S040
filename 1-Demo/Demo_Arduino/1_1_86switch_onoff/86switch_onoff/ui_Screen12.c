

#include "ui.h"

void ui_Screen12_screen_init(void)
{
ui_Screen12 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image39 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image39, &ui_img_s4_back4_png);
lv_obj_set_width( ui_Image39, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image39, LV_SIZE_CONTENT);   /// 480
lv_obj_set_align( ui_Image39, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image39, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image39, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image40 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image40, &ui_img_s4_mode2_png);
lv_obj_set_width( ui_Image40, LV_SIZE_CONTENT);  /// 459
lv_obj_set_height( ui_Image40, LV_SIZE_CONTENT);   /// 190
lv_obj_set_x( ui_Image40, 0 );
lv_obj_set_y( ui_Image40, -130 );
lv_obj_set_align( ui_Image40, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image40, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image40, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image41 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image41, &ui_img_s4_mode1_png);
lv_obj_set_width( ui_Image41, LV_SIZE_CONTENT);  /// 459
lv_obj_set_height( ui_Image41, LV_SIZE_CONTENT);   /// 224
lv_obj_set_x( ui_Image41, 0 );
lv_obj_set_y( ui_Image41, 90 );
lv_obj_set_align( ui_Image41, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image41, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image41, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image42 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image42, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image42, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image42, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image42, -30 );
lv_obj_set_y( ui_Image42, 215 );
lv_obj_set_align( ui_Image42, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image42, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image42, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image43 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image43, &ui_img_s4_cut4_2_png);
lv_obj_set_width( ui_Image43, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image43, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image43, 30 );
lv_obj_set_y( ui_Image43, 215 );
lv_obj_set_align( ui_Image43, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image43, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image43, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image44 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image44, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image44, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image44, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image44, 60 );
lv_obj_set_y( ui_Image44, 215 );
lv_obj_set_align( ui_Image44, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image44, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image44, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image45 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image45, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image45, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image45, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image45, 0 );
lv_obj_set_y( ui_Image45, 215 );
lv_obj_set_align( ui_Image45, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image45, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image45, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image46 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image46, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image46, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image46, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image46, -60 );
lv_obj_set_y( ui_Image46, 215 );
lv_obj_set_align( ui_Image46, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image46, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image46, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image64 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image64, &ui_img_s3_switch1_on_png);
lv_obj_set_width( ui_Image64, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image64, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image64, -172 );
lv_obj_set_y( ui_Image64, 128 );
lv_obj_set_align( ui_Image64, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image64, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image64, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image64,220);

ui_Button3 = lv_btn_create(ui_Screen12);
lv_obj_set_width( ui_Button3, 62);
lv_obj_set_height( ui_Button3, 50);
lv_obj_set_x( ui_Button3, -172 );
lv_obj_set_y( ui_Button3, 130 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button3, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image65 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image65, &ui_img_s3_switch1_on_png);
lv_obj_set_width( ui_Image65, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image65, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image65, -57 );
lv_obj_set_y( ui_Image65, 128 );
lv_obj_set_align( ui_Image65, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image65, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image65, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image65,220);

ui_Button4 = lv_btn_create(ui_Screen12);
lv_obj_set_width( ui_Button4, 62);
lv_obj_set_height( ui_Button4, 50);
lv_obj_set_x( ui_Button4, -57 );
lv_obj_set_y( ui_Button4, 129 );
lv_obj_set_align( ui_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button4, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image66 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image66, &ui_img_s3_switch1_on_png);
lv_obj_set_width( ui_Image66, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image66, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image66, 58 );
lv_obj_set_y( ui_Image66, 128 );
lv_obj_set_align( ui_Image66, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image66, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image66, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image66,220);

ui_Button5 = lv_btn_create(ui_Screen12);
lv_obj_set_width( ui_Button5, 62);
lv_obj_set_height( ui_Button5, 50);
lv_obj_set_x( ui_Button5, 59 );
lv_obj_set_y( ui_Button5, 130 );
lv_obj_set_align( ui_Button5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button5, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button6 = lv_btn_create(ui_Screen12);
lv_obj_set_width( ui_Button6, 62);
lv_obj_set_height( ui_Button6, 50);
lv_obj_set_x( ui_Button6, 173 );
lv_obj_set_y( ui_Button6, 129 );
lv_obj_set_align( ui_Button6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button6, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image67 = lv_img_create(ui_Screen12);
lv_img_set_src(ui_Image67, &ui_img_s3_switch1_on_png);
lv_obj_set_width( ui_Image67, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image67, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image67, 173 );
lv_obj_set_y( ui_Image67, 128 );
lv_obj_set_align( ui_Image67, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image67, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image67, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Image67,220);

lv_obj_add_event_cb(ui_Image64, ui_event_Image64, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image65, ui_event_Image65, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image66, ui_event_Image66, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image67, ui_event_Image67, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Screen12, ui_event_Screen12, LV_EVENT_ALL, NULL);

}
