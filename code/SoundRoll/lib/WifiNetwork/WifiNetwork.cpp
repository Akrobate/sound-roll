#include "WifiNetwork.h"

WifiNetwork::WifiNetwork() {

}

void WifiNetwork::init() {

  delay(1000);
  
  if (this->getApEnabled()) {
    WiFi.softAP('ESP_8266_SSID');
  }

  // Debug wifi connection as STA
  WiFi.begin(this->getSsid(), this->getPassword());
  int wifi_max_try = 5;

  if (this->getDebug()) {
    Serial.println("Connecting to wifi");
  }
  
  int count_try = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    if (this->getDebug()) {
      Serial.print(".");
    }
    count_try++;
  }

}

void WifiNetwork::setSsid(String ssid) {
    this->ssid = ssid;
}

void WifiNetwork::setPassword(String password) {
    this->password = password;
}

void WifiNetwork::setIsConnected(Boolean is_connected) {
    this->is_connected = is_connected;
}

void WifiNetwork::setApEnabled(Boolean ap_enabled) {
    if (!this->getApEnabled() && ap_enabled) {
        WiFi.softAP('ESP_8266_SSID');
    }

    if (this->getApEnabled() && !ap_enabled) {
        WiFi.softAPdisconnect(true);
    }

    this->ap_enabled = ap_enabled;
}

void WifiNetwork::setDebug(Boolean debug) {
    this->debug = debug;
}

String WifiNetwork::getSsid() {
    return this->ssid;
}

String WifiNetwork::getPassword() {
    return this->password;
}

Boolean WifiNetwork::getIsConnected() {
    return this->is_connected;
}

Boolean WifiNetwork::getApEnabled() {
    return this->ap_enabled;
}

Boolean WifiNetwork::getDebug() {
    return this->debug;
}

