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

        String getSsid();
        String getPassword();



};

#endif
