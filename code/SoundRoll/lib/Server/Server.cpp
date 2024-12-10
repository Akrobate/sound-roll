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
        request->send_P(200, "text/html", index_html);
    }
  );

    this->server->begin();
}