

#include "ui.h"

void ui_Screen10_screen_init(void)
{
ui_Screen10 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image11 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image11, &ui_img_s2_back2_png);
lv_obj_set_width( ui_Image11, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image11, LV_SIZE_CONTENT);   /// 480
lv_obj_set_x( ui_Image11, 0 );
lv_obj_set_y( ui_Image11, 1 );
lv_obj_set_align( ui_Image11, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image11, LV_OBJ_FLAG_CLICKABLE );   /// Flags
lv_obj_clear_flag( ui_Image11, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags

ui_Image12 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image12, &ui_img_s2_move1_png);
lv_obj_set_width( ui_Image12, LV_SIZE_CONTENT);  /// 394
lv_obj_set_height( ui_Image12, LV_SIZE_CONTENT);   /// 77
lv_obj_set_x( ui_Image12, 1 );
lv_obj_set_y( ui_Image12, 105 );
lv_obj_set_align( ui_Image12, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image12, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image13 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image13, &ui_img_s2_move1_png);
lv_obj_set_width( ui_Image13, LV_SIZE_CONTENT);  /// 394
lv_obj_set_height( ui_Image13, LV_SIZE_CONTENT);   /// 77
lv_obj_set_x( ui_Image13, 0 );
lv_obj_set_y( ui_Image13, -4 );
lv_obj_set_align( ui_Image13, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image13, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image13, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image14 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image14, &ui_img_s2_color_png);
lv_obj_set_width( ui_Image14, LV_SIZE_CONTENT);  /// 21
lv_obj_set_height( ui_Image14, LV_SIZE_CONTENT);   /// 21
lv_obj_set_x( ui_Image14, -172 );
lv_obj_set_y( ui_Image14, 46 );
lv_obj_set_align( ui_Image14, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image14, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image14, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image15 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image15, &ui_img_s2_light_png);
lv_obj_set_width( ui_Image15, LV_SIZE_CONTENT);  /// 24
lv_obj_set_height( ui_Image15, LV_SIZE_CONTENT);   /// 24
lv_obj_set_x( ui_Image15, -171 );
lv_obj_set_y( ui_Image15, -69 );
lv_obj_set_align( ui_Image15, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image15, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image15, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image16 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image16, &ui_img_s2_switch2_off_png);
lv_obj_set_width( ui_Image16, LV_SIZE_CONTENT);  /// 127
lv_obj_set_height( ui_Image16, LV_SIZE_CONTENT);   /// 127
lv_obj_set_x( ui_Image16, 0 );
lv_obj_set_y( ui_Image16, -140 );
lv_obj_set_align( ui_Image16, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image16, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image16, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image17 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image17, &ui_img_s2_switch2_on_png);
lv_obj_set_width( ui_Image17, LV_SIZE_CONTENT);  /// 157
lv_obj_set_height( ui_Image17, LV_SIZE_CONTENT);   /// 157
lv_obj_set_x( ui_Image17, 0 );
lv_obj_set_y( ui_Image17, -140 );
lv_obj_set_align( ui_Image17, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image17, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image17, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image18 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image18, &ui_img_s2_cut2_2_png);
lv_obj_set_width( ui_Image18, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image18, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image18, -30 );
lv_obj_set_y( ui_Image18, 215 );
lv_obj_set_align( ui_Image18, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image18, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image18, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image19 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image19, &ui_img_s2_cut2_3_png);
lv_obj_set_width( ui_Image19, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image19, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image19, -60 );
lv_obj_set_y( ui_Image19, 215 );
lv_obj_set_align( ui_Image19, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image19, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image19, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image20 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image20, &ui_img_s2_cut2_3_png);
lv_obj_set_width( ui_Image20, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image20, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image20, 0 );
lv_obj_set_y( ui_Image20, 215 );
lv_obj_set_align( ui_Image20, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image20, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image20, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image21 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image21, &ui_img_s2_cut2_3_png);
lv_obj_set_width( ui_Image21, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image21, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image21, 30 );
lv_obj_set_y( ui_Image21, 215 );
lv_obj_set_align( ui_Image21, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image21, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image21, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image22 = lv_img_create(ui_Screen10);
lv_img_set_src(ui_Image22, &ui_img_s2_cut2_3_png);
lv_obj_set_width( ui_Image22, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image22, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image22, 60 );
lv_obj_set_y( ui_Image22, 215 );
lv_obj_set_align( ui_Image22, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image22, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image22, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Slider1 = lv_slider_create(ui_Screen10);
lv_slider_set_value( ui_Slider1, 50, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider1)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider1, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider1, 374);
lv_obj_set_height( ui_Slider1, 52);
lv_obj_set_x( ui_Slider1, 0 );
lv_obj_set_y( ui_Slider1, -7 );
lv_obj_set_align( ui_Slider1, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider1, 6, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Slider1, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xF2BC53), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Slider2 = lv_slider_create(ui_Screen10);
lv_slider_set_value( ui_Slider2, 10, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider2)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider2, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider2, 374);
lv_obj_set_height( ui_Slider2, 53);
lv_obj_set_x( ui_Slider2, 0 );
lv_obj_set_y( ui_Slider2, 101 );
lv_obj_set_align( ui_Slider2, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider2, 6, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Slider2, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xF2BC53), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Image11, ui_event_Image11, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image16, ui_event_Image16, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Image17, ui_event_Image17, LV_EVENT_ALL, NULL);

}
