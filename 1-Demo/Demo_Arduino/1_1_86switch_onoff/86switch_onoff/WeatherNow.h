#ifndef _WEATHERNOW_H_
#define _WEATHERNOW_H_

#include <Arduino.h>
#include <ArduinoJson.h>



#define DEBUG // 调试用

class WeatherNow {
  public:
    WeatherNow(char* input, size_t inputLength);

    
    String getServerCode();
    String getLastUpdate();
    int getTemp();
    int getFeelLike();
    int getIcon();
    String getWeatherText();
    String getWindDir();
    int getWindScale();
    int getHumidity();
    float getPrecip();

  private:
    
    // void _parseNowJson();  // 解析json信息
    // void _parseNowJson(String input);

    String _response_code =  "no_init";  // API状态码
    String _last_update_str = "no_init"; // 当前API最近更新时间
    int _now_temp_int = 999;             // 实况温度
    int _now_feelsLike_int = 999;        // 实况体感温度
    int _now_icon_int = 999;             // 当前天气状况和图标的代码
    String _now_text_str = "no_init";    // 实况天气状况的文字描述
    String _now_windDir_str = "no_init"; // 实况风向
    int _now_windScale_int = 999;        // 实况风力等级
    int _now_humidity_float = 999;     // 实况相对湿度百分比数值
    float _now_precip_float = 999;       // 实况降水量,毫米
};

#endif
