#include "WeatherNow.h"
WeatherNow::WeatherNow(char *input, size_t inputLength)
{
   StaticJsonDocument<1024> doc;
  DeserializationError error = deserializeJson(doc, input, inputLength);

  // void WeatherNow::_parseNowJson(String input) {
  // StaticJsonDocument<768> doc;
  // DeserializationError error = deserializeJson(doc, input);

  JsonObject now = doc["now"];

  _response_code = doc["code"].as<String>();         // API状态码
  _last_update_str = doc["updateTime"].as<String>(); // 当前API最近更新时间
  _now_temp_int = now["temp"].as<int>();             // 实况温度
  _now_feelsLike_int = now["feelsLike"].as<int>();   // 实况体感温度
  _now_icon_int = now["icon"].as<int>();             // 当前天气状况和图标的代码
  _now_text_str = now["text"].as<String>();          // 实况天气状况的文字描述
  _now_windDir_str = now["windDir"].as<String>();    // 实况风向
  _now_windScale_int = now["windScale"].as<int>();   // 实况风力等级
  _now_humidity_float = now["humidity"].as<int>(); // 实况相对湿度百分比数值
  _now_precip_float = now["precip"].as<float>();     // 实况降水量,毫米
}

// 解析Json信息
// void WeatherNow::_parseNowJson(char *input, size_t inputLength)
// {
//   StaticJsonDocument<1024> doc;
//   DeserializationError error = deserializeJson(doc, input, inputLength);

//   // void WeatherNow::_parseNowJson(String input) {
//   // StaticJsonDocument<768> doc;
//   // DeserializationError error = deserializeJson(doc, input);

//   JsonObject now = doc["now"];

//   _response_code = doc["code"].as<String>();         // API状态码
//   _last_update_str = doc["updateTime"].as<String>(); // 当前API最近更新时间
//   _now_temp_int = now["temp"].as<int>();             // 实况温度
//   _now_feelsLike_int = now["feelsLike"].as<int>();   // 实况体感温度
//   _now_icon_int = now["icon"].as<int>();             // 当前天气状况和图标的代码
//   _now_text_str = now["text"].as<String>();          // 实况天气状况的文字描述
//   _now_windDir_str = now["windDir"].as<String>();    // 实况风向
//   _now_windScale_int = now["windScale"].as<int>();   // 实况风力等级
//   _now_humidity_float = now["humidity"].as<float>(); // 实况相对湿度百分比数值
//   _now_precip_float = now["precip"].as<float>();     // 实况降水量,毫米
// }

// API状态码
String WeatherNow::getServerCode()
{
  return _response_code;
}

// 当前API最近更新时间
String WeatherNow::getLastUpdate()
{
  return _last_update_str;
}

// 实况温度
int WeatherNow::getTemp()
{
  return _now_temp_int;
}

// 实况体感温度
int WeatherNow::getFeelLike()
{
  return _now_feelsLike_int;
}

// 当前天气状况和图标的代码
int WeatherNow::getIcon()
{
  return _now_icon_int;
}

// 实况天气状况的文字描述
String WeatherNow::getWeatherText()
{
  return _now_text_str;
}

// 实况风向
String WeatherNow::getWindDir()
{
  return _now_windDir_str;
}

// 实况风力等级
int WeatherNow::getWindScale()
{
  return _now_windScale_int;
}

// 实况相对湿度百分比数值
int WeatherNow::getHumidity()
{
  return _now_humidity_float;
}
// 实况降水量,毫米
float WeatherNow::getPrecip()
{
  return _now_precip_float;
}