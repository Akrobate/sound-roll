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

  this->server->on(
    "/api/wifi-credentials",
    HTTP_POST,
    [&](AsyncWebServerRequest *request) {

      String ssid = "";
      String password = "";
      if (request->hasParam("ssid", true)) {
        ssid = request->getParam("ssid", true)->value();
      } else {
        request->send(400, "text/html", "Missing ssid");
        return;
      }

      if (request->hasParam("password", true)) {
        password = request->getParam("password", true)->value();
      } else {
        request->send(400, "text/html", "Missing password");
        return;
      }

      Serial.print("ADD ssid : ");
      Serial.println(ssid);
      Serial.print("password : ");
      Serial.println(password);

      // this->network_credential->upsertCredential(ssid, password);
      request->send(201, "text/html", "OK");
    }
  );



    this->server->begin();
}