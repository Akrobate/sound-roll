#ifndef Server_h
#define Server_h

#include <ESPAsyncWebServer.h>
#include "AsyncJson.h"
#include "ArduinoJson.h"

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html><html><head><title>SoundRoll</title></head><body><h1>SoundRoll</h1></body></html>
)rawliteral";

class Server {

    private:
        int port = 0;
        AsyncWebServer * server;

    public:
        Server();
        Server(int port);
        void init();
};

#endif