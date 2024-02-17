

#include "ui.h"

void ui_Screen13_screen_init(void)
{
ui_Screen13 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen13, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image52 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image52, &ui_img_s5_back5_png);
lv_obj_set_width( ui_Image52, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image52, LV_SIZE_CONTENT);   /// 480
lv_obj_set_align( ui_Image52, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image52, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image52, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image53 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image53, &ui_img_s5_hour_png);
lv_obj_set_width( ui_Image53, LV_SIZE_CONTENT);  /// 116
lv_obj_set_height( ui_Image53, LV_SIZE_CONTENT);   /// 86
lv_obj_set_x( ui_Image53, -57 );
lv_obj_set_y( ui_Image53, -45 );
lv_obj_set_align( ui_Image53, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image53, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image53, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_Image53,115,85);
lv_img_set_angle(ui_Image53,540);

ui_Image54 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image54, &ui_img_s5_min_png);
lv_obj_set_width( ui_Image54, LV_SIZE_CONTENT);  /// 152
lv_obj_set_height( ui_Image54, LV_SIZE_CONTENT);   /// 85
lv_obj_set_x( ui_Image54, 76 );
lv_obj_set_y( ui_Image54, -41 );
lv_obj_set_align( ui_Image54, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image54, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image54, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_Image54,1,83);
lv_img_set_angle(ui_Image54,-620);

ui_Image55 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image55, &ui_img_s5_sec_png);
lv_obj_set_width( ui_Image55, LV_SIZE_CONTENT);  /// 197
lv_obj_set_height( ui_Image55, LV_SIZE_CONTENT);   /// 13
lv_obj_set_x( ui_Image55, 57 );
lv_obj_set_y( ui_Image55, -1 );
lv_obj_set_align( ui_Image55, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image55, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image55, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_Image55,42,7);
lv_img_set_angle(ui_Image55,-905);

ui_Image56 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image56, &ui_img_s5_w_circle_png);
lv_obj_set_width( ui_Image56, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_Image56, LV_SIZE_CONTENT);   /// 25
lv_obj_set_align( ui_Image56, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image56, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image56, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image57 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image57, &ui_img_s5_c_circle_png);
lv_obj_set_width( ui_Image57, LV_SIZE_CONTENT);  /// 14
lv_obj_set_height( ui_Image57, LV_SIZE_CONTENT);   /// 14
lv_obj_set_align( ui_Image57, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image57, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image57, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image58 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image58, &ui_img_s5_cut5_2_png);
lv_obj_set_width( ui_Image58, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image58, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image58, -60 );
lv_obj_set_y( ui_Image58, 215 );
lv_obj_set_align( ui_Image58, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image58, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image58, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image59 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image59, &ui_img_s5_cut5_2_png);
lv_obj_set_width( ui_Image59, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image59, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image59, -30 );
lv_obj_set_y( ui_Image59, 215 );
lv_obj_set_align( ui_Image59, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image59, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image59, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image60 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image60, &ui_img_s5_cut5_2_png);
lv_obj_set_width( ui_Image60, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image60, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image60, 30 );
lv_obj_set_y( ui_Image60, 215 );
lv_obj_set_align( ui_Image60, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image60, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image60, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image61 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image61, &ui_img_s5_cut5_2_png);
lv_obj_set_width( ui_Image61, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image61, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image61, 0 );
lv_obj_set_y( ui_Image61, 215 );
lv_obj_set_align( ui_Image61, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image61, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image61, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image62 = lv_img_create(ui_Screen13);
lv_img_set_src(ui_Image62, &ui_img_s5_cut5_1_png);
lv_obj_set_width( ui_Image62, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image62, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image62, 60 );
lv_obj_set_y( ui_Image62, 215 );
lv_obj_set_align( ui_Image62, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image62, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image62, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Screen13, ui_event_Screen13, LV_EVENT_ALL, NULL);

}
