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
        void setDebug(Boolean debug);

        String getSsid();
        String getPassword();
        String getIsConnected();
        String getApEnabled();
        String getDebug();

};

#endif
