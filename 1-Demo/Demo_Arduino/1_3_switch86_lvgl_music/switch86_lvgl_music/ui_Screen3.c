

#include "ui.h"

void ui_Screen3_screen_init(void)
{
ui_Screen3 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Panel4 = lv_obj_create(ui_Screen3);
lv_obj_set_width( ui_Panel4, 840);
lv_obj_set_height( ui_Panel4, 47);
lv_obj_set_x( ui_Panel4, 2 );
lv_obj_set_y( ui_Panel4, -219 );
lv_obj_set_align( ui_Panel4, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label9 = lv_label_create(ui_Panel4);
lv_obj_set_width( ui_Label9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label9, 3 );
lv_obj_set_y( ui_Label9, 2 );
lv_obj_set_align( ui_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label9,"Light Control");
lv_obj_set_style_text_font(ui_Label9, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button6 = lv_btn_create(ui_Panel4);
lv_obj_set_width( ui_Button6, 47);
lv_obj_set_height( ui_Button6, 30);
lv_obj_set_x( ui_Button6, -366 );
lv_obj_set_y( ui_Button6, 2 );
lv_obj_set_align( ui_Button6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_text_font(ui_Button6, &ui_font_Font1YHall16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label10 = lv_label_create(ui_Button6);
lv_obj_set_width( ui_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"Back");

ui_Keyboard4 = lv_keyboard_create(ui_Screen3);
lv_obj_set_width( ui_Keyboard4, 300);
lv_obj_set_height( ui_Keyboard4, 120);
lv_obj_set_x( ui_Keyboard4, 2 );
lv_obj_set_y( ui_Keyboard4, 54 );
lv_obj_set_align( ui_Keyboard4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Keyboard4, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_Keyboard4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE );    /// Flags

ui_Colorwheel2 = lv_colorwheel_create(ui_Screen3,true);
lv_obj_set_width( ui_Colorwheel2, 300);
lv_obj_set_height( ui_Colorwheel2, 300);
lv_obj_set_x( ui_Colorwheel2, 0 );
lv_obj_set_y( ui_Colorwheel2, 20 );
lv_obj_set_align( ui_Colorwheel2, LV_ALIGN_CENTER );
lv_obj_set_style_arc_width(ui_Colorwheel2, 15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImgButton2 = lv_imgbtn_create(ui_Screen3);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_light_icon_png, NULL);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_light_icon_dark_png, NULL);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_light_icon_png, NULL);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_light_icon_dark_png, NULL);
lv_obj_set_height( ui_ImgButton2, 48);
lv_obj_set_width( ui_ImgButton2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_ImgButton2, 0 );
lv_obj_set_y( ui_ImgButton2, 18 );
lv_obj_set_align( ui_ImgButton2, LV_ALIGN_CENTER );
lv_obj_add_state( ui_ImgButton2, LV_STATE_CHECKED );     /// States



}
