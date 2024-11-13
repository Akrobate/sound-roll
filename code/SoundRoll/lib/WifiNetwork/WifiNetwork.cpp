#include "WifiNetwork.h"

WifiNetwork::WifiNetwork() {

}

void WifiNetwork::init() {

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

