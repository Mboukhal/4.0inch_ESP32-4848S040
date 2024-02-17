
#include "doMain.h"
#include "doWifi.h"

// you can in here define the wifi ssid and password and the weather api key and the city position
String ssid = "";
String pswd = "";
String lat = "";
String lon = "";
String weKey = "73e93292957b4c64b092d1d7829b09c2";

int wifi_nums = 0;
long currentTime_year;
byte currentTime_mouth, currentTime_day,
    currentTime_hour, currentTime_minute, currentTime_second, currentTime_week;
unsigned long timeNow;
String topTimeText, hourText, minuteText, secondText, yearText, mouthText, dayText, topDateText, weekText;
bool NTPState;
boolean light1_status = false;
boolean light2_status = false;
boolean light3_status = false;

void ui_main(void)
{
    init_light();
    ui_init();
    do_main_ui_init();
}

void do_main_ui_init(void)
{

    lv_keyboard_set_textarea(ui_Keyboard4, ui_TextArea1);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button_scan, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui_Keyboard4, ui_event_Key_Ok, LV_EVENT_READY, NULL);

    lv_obj_add_event_cb(ui_Image26, ui_event_All_on, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui_Image32, ui_event_All_off, LV_EVENT_CLICKED, NULL);

    lv_obj_add_event_cb(ui_Image30, ui_event_light1, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui_Image35, ui_event_light2, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui_Image38, ui_event_light3, LV_EVENT_CLICKED, NULL);

    // xTaskCreatePinnedToCore(connect_wifi_task, "connect_wifi_task", 4096, NULL, 0, NULL, 1);
}

void init_light()
{
    pinMode(40, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(1, OUTPUT);
    digitalWrite(40, LOW);
    digitalWrite(2, LOW);
    digitalWrite(1, LOW);
}

void light1_on()
{
    digitalWrite(2, HIGH);
    lv_img_set_src(ui_Image35, &ui_img_s3_switch1_on_png);//30
    lv_img_set_src(ui_Image34, &ui_img_s3_light1_on_png);//27
    light1_status = true;
}

void light1_off()
{
    digitalWrite(2, LOW);
    lv_img_set_src(ui_Image35, &ui_img_s3_switch1_off_png);//30
    lv_img_set_src(ui_Image34, &ui_img_s3_light1_off_png);//27
    light1_status = false;
}

boolean get_light1_status()
{
    return light1_status;
}

void light2_on()
{
    digitalWrite(40, HIGH);
    lv_img_set_src(ui_Image30, &ui_img_s3_switch1_on_png);//35
    lv_img_set_src(ui_Image27, &ui_img_s3_light1_on_png);//34
    light2_status = true;
}

void light2_off()
{
    digitalWrite(40, LOW);
    lv_img_set_src(ui_Image30, &ui_img_s3_switch1_off_png);//35
    lv_img_set_src(ui_Image27, &ui_img_s3_light1_off_png);//34
    light2_status = false;
}

boolean get_light2_status()
{
    return light2_status;
}

void light3_on()
{
    digitalWrite(1, HIGH);
    lv_img_set_src(ui_Image38, &ui_img_s3_switch1_on_png);
    lv_img_set_src(ui_Image37, &ui_img_s3_light1_on_png);
    light3_status = true;
}

void light3_off()
{
    digitalWrite(1, LOW);
    lv_img_set_src(ui_Image38, &ui_img_s3_switch1_off_png);
    lv_img_set_src(ui_Image37, &ui_img_s3_light1_off_png);
    light3_status = false;
}

boolean get_light3_status()
{
    return light3_status;
}

void ui_event_All_on(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        light1_on();
        light2_on();
        light3_on();
    }
}

void ui_event_All_off(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        light1_off();
        light2_off();
        light3_off();
    }
}

void ui_event_light1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (get_light2_status())
        {
            light2_off();
        }
        else
        {
            light2_on();
        }
    }
}

void ui_event_light2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (get_light1_status())
        {
            light1_off();
        }
        else
        {
            light1_on();
        }
    }
}

void ui_event_light3(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (get_light3_status())
        {
            light3_off();
        }
        else
        {
            light3_on();
        }
    }
}

void ui_event_Image16(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Image16, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Image17, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        light2_on();
    }
}
void ui_event_Image17(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Image17, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Image16, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        light2_off();
    }
}

void ui_event_Button_scan(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {

        xTaskCreatePinnedToCore(scan_wifi_task, "scan_wifi_task", 4096, NULL, 1, NULL, 1);
    }
}

void scan_wifi_task(void *pvParameters)
{
    lv_label_set_text(ui_Label12, "Scan...");
    wifi_nums = scanNetworks();
    Serial.println(wifi_nums);
    String wifi_name = "";
    for (int i = 0; i < wifi_nums; i++)
    {
        Serial.print(i);
        Serial.print(":");
        Serial.print(WiFi.SSID(i));
        Serial.print(" ");
        Serial.print(WiFi.RSSI(i));
        Serial.print(" ");
        Serial.print(transEncryptionType(WiFi.encryptionType(i)));
        Serial.println("");
        if (i < wifi_nums - 1)
        {
            wifi_name += WiFi.SSID(i);
            wifi_name += "\n";
        }
        else
        {
            wifi_name += WiFi.SSID(i);
        }
    }
    lv_dropdown_set_options(ui_Dropdown2, wifi_name.c_str());
    lv_label_set_text(ui_Label12, "请连接WiFi");
    vTaskDelete(NULL);
}

void connect_wifi_task(void *pvParameters)
{

    delay(2000);
    WiFi.begin(ssid.c_str(), pswd.c_str());
    int count = 0;
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
        count++;
        if (count > 20)
        {
            break;
        }
    }
    if (WiFi.status() == WL_CONNECTED)
    {
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
        lv_label_set_text(ui_Label12, "Success");
        delay(1000);
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
        xTaskCreatePinnedToCore(getNtpTime, "getNtpTime", 4096, NULL, 1, NULL, 1);
        xTaskCreatePinnedToCore(getWeather, "getWeather", 4096, NULL, 1, NULL, 1);
    }
    else
    {
        Serial.println("WiFi connect failed");
        lv_label_set_text(ui_Label12, "Failed");
        delay(1000);
        lv_label_set_text(ui_Label12, "请连接WiFi");
        lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_HIDDEN);
    }
    vTaskDelete(NULL);
}

const char *ntpServer = "ntp1.aliyun.com";
const int timeZone = 8;

void getNtpTime(void *pvParameters)
{

    NTP.setInterval(600);
    NTP.setNTPTimeout(1500);
    NTPState = NTP.begin(ntpServer, timeZone, false);
    vTaskDelay(500);
    NTP.setInterval(600);
    NTP.setNTPTimeout(1500);
    NTPState = NTP.begin(ntpServer, timeZone, false);
    Serial.println(NTPState);

    for (;;)
    {
        currentTime_year = NTP.getDateYear();
        currentTime_mouth = NTP.getDateMonth();
        currentTime_day = NTP.getDateDay();
        currentTime_hour = NTP.getTimeHour24();
        currentTime_minute = NTP.getTimeMinute();
        currentTime_second = NTP.getTimeSecond();
        time_t t = NTP.getTime();
        int dayOfWeek = weekday(t); // Use weekday() to get the day of the week
        currentTime_week = dayOfWeek;
        timeNow = now() - 28800; // 东八区的时间戳
        if (currentTime_hour <= 9)
        {
            hourText = "0" + String(currentTime_hour);
        }
        else
        {
            hourText = String(currentTime_hour);
        }
        if (currentTime_minute <= 9)
        {
            minuteText = "0" + String(currentTime_minute);
        }
        else
        {
            minuteText = String(currentTime_minute);
        }

        yearText = String(currentTime_year);
        mouthText = String(currentTime_mouth);
        dayText = String(currentTime_day);
        if (currentTime_mouth <= 9)
        {
            mouthText = "0" + String(currentTime_mouth);
        }
        else
        {
            mouthText = String(currentTime_mouth);
        }
        if (currentTime_day <= 9)
        {
            dayText = "0" + String(currentTime_day);
        }
        else
        {
            dayText = String(currentTime_day);
        }
        topDateText = yearText + "/" + mouthText + "/" + dayText;

        topTimeText = hourText + ":" + minuteText;
        Serial.println(topTimeText);

        yearText = String(currentTime_year);
        mouthText = String(currentTime_mouth);
        dayText = String(currentTime_day);
        if (currentTime_mouth <= 9)
        {
            mouthText = "0" + String(currentTime_mouth);
        }
        else
        {
            mouthText = String(currentTime_mouth);
        }
        if (currentTime_day <= 9)
        {
            dayText = "0" + String(currentTime_day);
        }
        else
        {
            dayText = String(currentTime_day);
        }
        topDateText = yearText + "/" + mouthText + "/" + dayText;
        if (currentTime_week == 2)
        {
            weekText = "星期六";
        }
        else if (currentTime_week == 3)
        {
            weekText = "星期天";
        }
        else if (currentTime_week == 4)
        {
            weekText = "星期三";
        }
        else if (currentTime_week == 5)
        {
            weekText = "星期二";
        }
        else if (currentTime_week == 6)
        {
            weekText = "星期三";
        }
        else if (currentTime_week == 7)
        {
            weekText = "星期四";
        }
        else if (currentTime_week == 1)
        {
            weekText = "星期五";
        }
        topDateText = weekText + " " + topDateText;
        Serial.println(topDateText);

        lv_label_set_text(ui_Label1, topTimeText.c_str());
        lv_label_set_text(ui_Label3, topDateText.c_str());

        // mod pointer
        int secend = currentTime_second;
        lv_img_set_angle(ui_Image55, secend * 60 - 770);
        int minute = currentTime_minute;
        lv_img_set_angle(ui_Image54, minute * 60 - 610);
        int hour = NTP.getTimeHour12();
        lv_img_set_angle(ui_Image53, hour * 5 * 60 + 700);

        vTaskDelay(1000);
    }
}

void ui_event_Key_Ok(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {

        lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_HIDDEN);
        lv_label_set_text(ui_Label12, "Connect...");
        lv_obj_clear_state(ui_TextArea1, LV_STATE_FOCUSED);

        Serial.println("ok");

        char buf[32];
        lv_dropdown_get_selected_str(ui_Dropdown2, buf, sizeof(buf));
        ssid = String(buf);
        pswd = lv_textarea_get_text(ui_TextArea1);

        xTaskCreatePinnedToCore(connect_wifi_task, "connect_wifi_task", 4096, NULL, 0, NULL, 1);
    }
}

String getIps(void)
{
    String ips;

    WiFiClientSecure wifiClient;
    HTTPClient httpClient;

    wifiClient.setInsecure();
    String URL = "https://www.ip.cn/api/index?ip&type=0";
    // 创建 HTTPClient 对象

    httpClient.begin(wifiClient, URL);

    // 设置请求头中的User-Agent
    httpClient.setUserAgent("Mozilla/5.0 (iPhone; CPU iPhone OS 11_0 like Mac OS X) AppleWebKit/604.1.38 (KHTML, like Gecko) Version/11.0 Mobile/15A372 Safari/604.1");

    // 启动连接并发送HTTP请求
    int httpCode = httpClient.GET();

    // 如果服务器响应OK则从服务器获取响应体信息并通过串口输出
    if (httpCode == 200)
    {
        String ipsStr = httpClient.getString();
        Serial.println(ipsStr);
        DynamicJsonDocument ipsData(2048);
        deserializeJson(ipsData, ipsStr); // 传入指定JSON数据
        ips = ipsData["ip"].as<String>();
        Serial.println(ips);
    }
    else
    {
        Serial.printf("GET failed, error code: %d\n", httpCode);
    }
    httpClient.end();

    return ips;
}

float *getCityPosition(String ips)
{
    float *position = new float[2]; // Dynamically allocate memory;

    HTTPClient httpClient;

    String URL = "http://ip-api.com/json/" + String(ips);
    // 创建 HTTPClient 对象

    httpClient.begin(URL);

    // 设置请求头中的User-Agent
    httpClient.setUserAgent("Mozilla/5.0 (iPhone; CPU iPhone OS 11_0 like Mac OS X) AppleWebKit/604.1.38 (KHTML, like Gecko) Version/11.0 Mobile/15A372 Safari/604.1");

    // 启动连接并发送HTTP请求
    int httpCode = httpClient.GET();

    // 如果服务器响应OK则从服务器获取响应体信息并通过串口输出
    if (httpCode == 200)
    {
        String posStr = httpClient.getString();
        Serial.println(posStr);
        DynamicJsonDocument posData(2048);
        deserializeJson(posData, posStr); // 传入指定JSON数据
        position[0] = posData["lat"].as<float>();
        position[1] = posData["lon"].as<float>();
        Serial.println(ips);
    }
    else
    {
        Serial.printf("GET failed, error code: %d\n", httpCode);
    }
    httpClient.end();

    return position;
}

void getWeather(void *pvParameters)
{
    String ip = getIps();
    float *pos = getCityPosition(ip);
    lat = String(pos[0]);
    lon = String(pos[1]);

    Serial.println(lat);
    Serial.println(lon);
    String city_pos = lon + "," + lat;

    for (;;)
    {
        WiFiClientSecure wifiClient;
        HTTPClient httpClient;

        wifiClient.setInsecure();
        String URL = "https://devapi.qweather.com/v7/weather/now?location=" + city_pos + "&key=c98d7cb82cdc49b7a20f8367e865868a&lang=cn";

        // 创建 HTTPClient 对象

        httpClient.begin(wifiClient, URL);

        // 设置请求头中的User-Agent
        httpClient.setUserAgent("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36");

        // 启动连接并发送HTTP请求
        int httpCode = httpClient.GET();

        // 如果服务器响应OK则从服务器获取响应体信息并通过串口输出
        if (httpCode == 200)
        {

            // Serial.println(weaStr);
            // DynamicJsonDocument weaData(4096);
            // deserializeJson(weaData, weaStr); // 传入指定JSON数据
            // String data1 = weaData["code"].as<String>();
            // Serial.println(data1);
            size_t size = httpClient.getSize();
            // 将http流数据写入inbuff中
            uint8_t inbuff[size];
            httpClient.getStream().readBytes(inbuff, size);
            uint8_t *outbuf = (uint8_t *)malloc(sizeof(uint8_t) * 2048);
            uint32_t outprintsize = 0;
            // 调用解压函数
            int result = ArduinoZlib::libmpq__decompress_zlib(inbuff, httpClient.getSize(), outbuf, 2048, outprintsize);
            // 输出解密后的数据到控制台。
            // Serial.write(outbuf, outprintsize);
            WeatherNow weatherNow = WeatherNow((char *)outbuf, 2048);
            Serial.println(weatherNow.getTemp());
            Serial.println(weatherNow.getWeatherText());
            Serial.println(weatherNow.getFeelLike());
            Serial.println(weatherNow.getHumidity());
            Serial.println(weatherNow.getWindDir());
            Serial.println(weatherNow.getWindScale());
            Serial.println(weatherNow.getPrecip());

            lv_label_set_text(ui_Label2, String(weatherNow.getWeatherText()).c_str());
            lv_label_set_text(ui_Label4, String(weatherNow.getTemp()).c_str());
            lv_label_set_text(ui_Label5, String(weatherNow.getWindScale()).c_str());
            lv_label_set_text(ui_Label6, String(weatherNow.getHumidity()).c_str());
        }
        else
        {
            Serial.printf("GET failed, error code: %d\n", httpCode);
        }
        httpClient.end();

        vTaskDelay(60000 * 60);
    }
    vTaskDelete(NULL);
}
