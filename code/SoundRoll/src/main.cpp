#include <Arduino.h>

#include <KY40Controller.h>
#include <Server.h>


#define SERVER_PORT 80

KY40Controller * ly_40_controller = new KY40Controller();
Server * server = new Server(SERVER_PORT);


void setup() {
    server->begin();
}

void loop() {
    
}
