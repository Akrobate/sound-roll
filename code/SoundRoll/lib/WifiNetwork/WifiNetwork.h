#ifndef WifiNetwork_h
#define WifiNetwork_h

#include <ESP8266WiFi.h>
#include "Arduino.h"
#include "AsyncJson.h"
#include "ArduinoJson.h"

class WifiNetwork {

    private:
        String ssid;
        String password;
        String ap_ssid = "ESP_8266_SSID";

        unsigned int wifi_max_try = 5;
        Boolean is_connected = false;
        Boolean ap_enabled = false;

        Boolean debug = true;

    public:
        WifiNetwork();
        void init();

        void setSsid(String ssid);
        void setPassword(String password);
        void setIsConnected(Boolean is_connected);
        void setApEnabled(Boolean ap_enabled);
        void setApSsid(String ap_ssid);
        void setWifiMaxTry(unsigned int wifi_max_try);
        void setDebug(Boolean debug);

        String getSsid();
        String getPassword();
        String getIsConnected();
        String getApEnabled();
        String getApSsid();
        String getDebug();
        unsigned int getWifiMaxTry();

};

#endif
