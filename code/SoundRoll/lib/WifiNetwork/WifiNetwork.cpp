#include "WifiNetwork.h"

WifiNetwork::WifiNetwork() {

}

void WifiNetwork::init() {

  delay(1000);
  // Wifi connection as AP
  // WiFi.softAP(ssid);

  // Debug wifi connection as STA
  WiFi.begin(this->getSsid(), this->getPassword());
  int wifi_max_try = 5;

  Serial.print("Connecting");
  
  int count_try = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
    count_try++;
  }

}

void WifiNetwork::setSsid(String ssid) {
    this->ssid = ssid;
}

void WifiNetwork::setPassword(String password) {
    this->password = password;
}

String WifiNetwork::getSsid() {
    return this->ssid;
}

String WifiNetwork::getPassword() {
    return this->password;
}

