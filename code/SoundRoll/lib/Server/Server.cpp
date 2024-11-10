#include "Server.h"

Server::Server() {
    this->port = 80;
}

Server::Server(int port) {
    this->port = port;
    this->server = new AsyncWebServer(this->port);
}

void Server::init() {
    
  this->server->onNotFound(
    [](AsyncWebServerRequest * request){
      request->send(404, "text/html", "Not found");
    }
  );


  this->server->on(
    "/",
    HTTP_GET,
    [](AsyncWebServerRequest * request){
        string index_html = "<!DOCTYPE html><html><head><title>SoundRoll</title></head><body><h1>SoundRoll</h1></body></html>";
        request->send_P(200, "text/html", index_html);
    }
  );

    this->server->begin();
}