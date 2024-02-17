

#include "ui.h"

void ui_Screen11_screen_init(void)
{
ui_Screen11 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen11, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image23 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image23, &ui_img_s3_back3_png);
lv_obj_set_width( ui_Image23, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image23, LV_SIZE_CONTENT);   /// 480
lv_obj_set_align( ui_Image23, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image23, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image23, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image24 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image24, &ui_img_s3_back3_1_png);
lv_obj_set_width( ui_Image24, LV_SIZE_CONTENT);  /// 207
lv_obj_set_height( ui_Image24, LV_SIZE_CONTENT);   /// 172
lv_obj_set_x( ui_Image24, -110 );
lv_obj_set_y( ui_Image24, -135 );
lv_obj_set_align( ui_Image24, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image24, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image24, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image29 = lv_img_create(ui_Image24);
lv_img_set_src(ui_Image29, &ui_img_s3_b_light_on_png);
lv_obj_set_width( ui_Image29, LV_SIZE_CONTENT);  /// 63
lv_obj_set_height( ui_Image29, LV_SIZE_CONTENT);   /// 67
lv_obj_set_x( ui_Image29, -42 );
lv_obj_set_y( ui_Image29, -30 );
lv_obj_set_align( ui_Image29, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image29, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image29, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image26 = lv_img_create(ui_Image24);
lv_img_set_src(ui_Image26, &ui_img_s3_b_switch_on_png);
lv_obj_set_width( ui_Image26, LV_SIZE_CONTENT);  /// 73
lv_obj_set_height( ui_Image26, LV_SIZE_CONTENT);   /// 73
lv_obj_set_x( ui_Image26, 43 );
lv_obj_set_y( ui_Image26, -30 );
lv_obj_set_align( ui_Image26, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image26, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image26, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label7 = lv_label_create(ui_Image24);
lv_obj_set_width( ui_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label7, -41 );
lv_obj_set_y( ui_Label7, 33 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label7,"全开");
lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label7, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image25 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image25, &ui_img_s3_back3_1_png);
lv_obj_set_width( ui_Image25, LV_SIZE_CONTENT);  /// 207
lv_obj_set_height( ui_Image25, LV_SIZE_CONTENT);   /// 172
lv_obj_set_x( ui_Image25, 111 );
lv_obj_set_y( ui_Image25, -135 );
lv_obj_set_align( ui_Image25, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image25, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image25, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image31 = lv_img_create(ui_Image25);
lv_img_set_src(ui_Image31, &ui_img_s3_b_light_off_png);
lv_obj_set_width( ui_Image31, LV_SIZE_CONTENT);  /// 63
lv_obj_set_height( ui_Image31, LV_SIZE_CONTENT);   /// 67
lv_obj_set_x( ui_Image31, -42 );
lv_obj_set_y( ui_Image31, -30 );
lv_obj_set_align( ui_Image31, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image31, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image31, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image32 = lv_img_create(ui_Image25);
lv_img_set_src(ui_Image32, &ui_img_s3_b_switch_off_png);
lv_obj_set_width( ui_Image32, LV_SIZE_CONTENT);  /// 73
lv_obj_set_height( ui_Image32, LV_SIZE_CONTENT);   /// 73
lv_obj_set_x( ui_Image32, 44 );
lv_obj_set_y( ui_Image32, -30 );
lv_obj_set_align( ui_Image32, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image32, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image32, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label9 = lv_label_create(ui_Image25);
lv_obj_set_width( ui_Label9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label9, -40 );
lv_obj_set_y( ui_Label9, 33 );
lv_obj_set_align( ui_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label9,"全关");
lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label9, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image28 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image28, &ui_img_s3_back3_2_png);
lv_obj_set_width( ui_Image28, LV_SIZE_CONTENT);  /// 129
lv_obj_set_height( ui_Image28, LV_SIZE_CONTENT);   /// 255
lv_obj_set_x( ui_Image28, -150 );
lv_obj_set_y( ui_Image28, 85 );
lv_obj_set_align( ui_Image28, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image28, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image28, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image27 = lv_img_create(ui_Image28);
lv_img_set_src(ui_Image27, &ui_img_s3_light1_off_png);
lv_obj_set_width( ui_Image27, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image27, LV_SIZE_CONTENT);   /// 60
lv_obj_set_x( ui_Image27, 1 );
lv_obj_set_y( ui_Image27, -72 );
lv_obj_set_align( ui_Image27, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image27, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image27, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image30 = lv_img_create(ui_Image28);
lv_img_set_src(ui_Image30, &ui_img_s3_switch1_off_png);
lv_obj_set_width( ui_Image30, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image30, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image30, -1 );
lv_obj_set_y( ui_Image30, 52 );
lv_obj_set_align( ui_Image30, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image30, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image30, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label8 = lv_label_create(ui_Image28);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label8, 0 );
lv_obj_set_y( ui_Label8, -7 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"客厅灯");
lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label8, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image33 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image33, &ui_img_s3_back3_2_png);
lv_obj_set_width( ui_Image33, LV_SIZE_CONTENT);  /// 129
lv_obj_set_height( ui_Image33, LV_SIZE_CONTENT);   /// 255
lv_obj_set_x( ui_Image33, 0 );
lv_obj_set_y( ui_Image33, 85 );
lv_obj_set_align( ui_Image33, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image33, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image33, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image34 = lv_img_create(ui_Image33);
lv_img_set_src(ui_Image34, &ui_img_s3_light1_off_png);
lv_obj_set_width( ui_Image34, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image34, LV_SIZE_CONTENT);   /// 60
lv_obj_set_x( ui_Image34, 1 );
lv_obj_set_y( ui_Image34, -72 );
lv_obj_set_align( ui_Image34, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image34, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image34, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image35 = lv_img_create(ui_Image33);
lv_img_set_src(ui_Image35, &ui_img_s3_switch1_off_png);
lv_obj_set_width( ui_Image35, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image35, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image35, -1 );
lv_obj_set_y( ui_Image35, 52 );
lv_obj_set_align( ui_Image35, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image35, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image35, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label10 = lv_label_create(ui_Image33);
lv_obj_set_width( ui_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label10, 0 );
lv_obj_set_y( ui_Label10, -7 );
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"卧室灯");
lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label10, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image36 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image36, &ui_img_s3_back3_2_png);
lv_obj_set_width( ui_Image36, LV_SIZE_CONTENT);  /// 129
lv_obj_set_height( ui_Image36, LV_SIZE_CONTENT);   /// 255
lv_obj_set_x( ui_Image36, 150 );
lv_obj_set_y( ui_Image36, 85 );
lv_obj_set_align( ui_Image36, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image36, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image36, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image37 = lv_img_create(ui_Image36);
lv_img_set_src(ui_Image37, &ui_img_s3_light1_off_png);
lv_obj_set_width( ui_Image37, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image37, LV_SIZE_CONTENT);   /// 60
lv_obj_set_x( ui_Image37, 1 );
lv_obj_set_y( ui_Image37, -72 );
lv_obj_set_align( ui_Image37, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image37, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image37, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image38 = lv_img_create(ui_Image36);
lv_img_set_src(ui_Image38, &ui_img_s3_switch1_off_png);
lv_obj_set_width( ui_Image38, LV_SIZE_CONTENT);  /// 56
lv_obj_set_height( ui_Image38, LV_SIZE_CONTENT);   /// 56
lv_obj_set_x( ui_Image38, -1 );
lv_obj_set_y( ui_Image38, 52 );
lv_obj_set_align( ui_Image38, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image38, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image38, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label11 = lv_label_create(ui_Image36);
lv_obj_set_width( ui_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label11, 0 );
lv_obj_set_y( ui_Label11, -7 );
lv_obj_set_align( ui_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label11,"廊灯");
lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label11, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image47 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image47, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image47, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image47, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image47, -60 );
lv_obj_set_y( ui_Image47, 215 );
lv_obj_set_align( ui_Image47, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image47, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image47, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image48 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image48, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image48, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image48, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image48, 30 );
lv_obj_set_y( ui_Image48, 215 );
lv_obj_set_align( ui_Image48, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image48, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image48, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image49 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image49, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image49, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image49, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image49, 60 );
lv_obj_set_y( ui_Image49, 215 );
lv_obj_set_align( ui_Image49, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image49, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image49, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image50 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image50, &ui_img_s4_cut4_1_png);
lv_obj_set_width( ui_Image50, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image50, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image50, -30 );
lv_obj_set_y( ui_Image50, 215 );
lv_obj_set_align( ui_Image50, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image50, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image50, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image51 = lv_img_create(ui_Screen11);
lv_img_set_src(ui_Image51, &ui_img_s4_cut4_2_png);
lv_obj_set_width( ui_Image51, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image51, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image51, 0 );
lv_obj_set_y( ui_Image51, 215 );
lv_obj_set_align( ui_Image51, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image51, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image51, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Screen11, ui_event_Screen11, LV_EVENT_ALL, NULL);

}
