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
        // @todo
        Boolean is_connected = false;
        Boolean ap_enabled = false;
    public:
        WifiNetwork();
        void init();

        void setSsid(String ssid);
        void setPassword(String password);
        void setIsConnected(Boolean is_connected);
        void setApEnabled(Boolean ap_enabled);

        String getSsid();
        String getPassword();
        String getIsConnected();
        String getApEnabled();

};

#endif
