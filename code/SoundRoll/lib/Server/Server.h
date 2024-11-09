#ifndef Server_h
#define Server_h

#include <ESPAsyncWebServer.h>
#include "AsyncJson.h"
#include "ArduinoJson.h"

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