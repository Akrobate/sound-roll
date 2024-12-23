#include <Arduino.h>

#include <KY40Controller.h>
#include <WifiNetwork.h>
#include <Server.h>


#define SERVER_PORT 80
#define SERIAL_BAUD 115200

KY40Controller * ky_40_controller = new KY40Controller();
Server * server = new Server(SERVER_PORT);
WifiNetwork * wifi_network = new WifiNetwork();

void setup() {
    Serial.begin(SERIAL_BAUD);
    wifi_network->init();
    ky_40_controller->init();
    server->begin();
}


void loop() {
    ky_40_controller->update();
}

