#ifndef WifiNetwork_h
#define WifiNetwork_h

#include "Arduino.h"
#include <ESPAsyncWebServer.h>
#include "AsyncJson.h"
#include "ArduinoJson.h"

class WifiNetwork {

    private:
        String ssid;
        String password;

    public:
        Server();
        void init();

        setSsid(String ssid);
        setPassword(String password);

        String getSsid();
        String getPassword();



};

#endif
