

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image1, &ui_img_s1_back1_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 480
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image2 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image2, &ui_img_s1_sunny_png);
lv_obj_set_width( ui_Image2, LV_SIZE_CONTENT);  /// 37
lv_obj_set_height( ui_Image2, LV_SIZE_CONTENT);   /// 37
lv_obj_set_x( ui_Image2, -172 );
lv_obj_set_y( ui_Image2, -79 );
lv_obj_set_align( ui_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image3 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image3, &ui_img_s1_cut1_png);
lv_obj_set_width( ui_Image3, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image3, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image3, -60 );
lv_obj_set_y( ui_Image3, 215 );
lv_obj_set_align( ui_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image4 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image4, &ui_img_s1_cut2_png);
lv_obj_set_width( ui_Image4, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image4, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image4, -30 );
lv_obj_set_y( ui_Image4, 215 );
lv_obj_set_align( ui_Image4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image4, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image5 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image5, &ui_img_s1_cut2_png);
lv_obj_set_width( ui_Image5, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image5, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image5, 0 );
lv_obj_set_y( ui_Image5, 215 );
lv_obj_set_align( ui_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image6 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image6, &ui_img_s1_tmp_png);
lv_obj_set_width( ui_Image6, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_Image6, LV_SIZE_CONTENT);   /// 32
lv_obj_set_x( ui_Image6, -180 );
lv_obj_set_y( ui_Image6, 102 );
lv_obj_set_align( ui_Image6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image6, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image7 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image7, &ui_img_s1_wind_png);
lv_obj_set_width( ui_Image7, LV_SIZE_CONTENT);  /// 21
lv_obj_set_height( ui_Image7, LV_SIZE_CONTENT);   /// 28
lv_obj_set_x( ui_Image7, -90 );
lv_obj_set_y( ui_Image7, 102 );
lv_obj_set_align( ui_Image7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image7, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image8 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image8, &ui_img_s1_hu_png);
lv_obj_set_width( ui_Image8, LV_SIZE_CONTENT);  /// 23
lv_obj_set_height( ui_Image8, LV_SIZE_CONTENT);   /// 28
lv_obj_set_x( ui_Image8, 6 );
lv_obj_set_y( ui_Image8, 102 );
lv_obj_set_align( ui_Image8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image8, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, -103 );
lv_obj_set_y( ui_Label1, 0 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"08:00");
lv_obj_set_style_text_font(ui_Label1, &ui_font_Font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, -133 );
lv_obj_set_y( ui_Label2, -77 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"晴");
lv_obj_set_style_text_font(ui_Label2, &ui_font_Font2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, -100 );
lv_obj_set_y( ui_Label3, 52 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"星期天 2023/11/26");
lv_obj_set_style_text_font(ui_Label3, &ui_font_Font4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, -155 );
lv_obj_set_y( ui_Label4, 108 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"28");
lv_obj_set_style_text_font(ui_Label4, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, -67 );
lv_obj_set_y( ui_Label5, 108 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"4");
lv_obj_set_style_text_font(ui_Label5, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label6 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label6, 32 );
lv_obj_set_y( ui_Label6, 108 );
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,"68");
lv_obj_set_style_text_font(ui_Label6, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image9 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image9, &ui_img_s1_cut2_png);
lv_obj_set_width( ui_Image9, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image9, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image9, 30 );
lv_obj_set_y( ui_Image9, 215 );
lv_obj_set_align( ui_Image9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image9, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image10 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image10, &ui_img_s1_cut2_png);
lv_obj_set_width( ui_Image10, LV_SIZE_CONTENT);  /// 10
lv_obj_set_height( ui_Image10, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_Image10, 60 );
lv_obj_set_y( ui_Image10, 215 );
lv_obj_set_align( ui_Image10, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image10, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label15 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label15, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label15, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label15, -137 );
lv_obj_set_y( ui_Label15, 108 );
lv_obj_set_align( ui_Label15, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label15,"℃");
lv_obj_set_style_text_font(ui_Label15, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label16 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label16, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label16, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label16, -44 );
lv_obj_set_y( ui_Label16, 108 );
lv_obj_set_align( ui_Label16, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label16,"级风");
lv_obj_set_style_text_font(ui_Label16, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label17 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label17, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label17, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label17, 51 );
lv_obj_set_y( ui_Label17, 108 );
lv_obj_set_align( ui_Label17, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label17,"%");
lv_obj_set_style_text_font(ui_Label17, &ui_font_Font3, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
