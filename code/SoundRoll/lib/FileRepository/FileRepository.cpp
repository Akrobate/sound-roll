#include "FileRepository.h"

FileRepository::FileRepository() {
}

bool FileRepository::load() {
    LittleFS.begin();
    File file = LittleFS.open(CONFIGURATION_FILE, "r");

    if (!file) {
        Serial.println("Failed to open file for reading");
        return false;
    }

    DynamicJsonDocument * doc = new DynamicJsonDocument(1024);
    DeserializationError error = deserializeJson(*doc, file);
    if (error) {
        Serial.println("Failed to parse file");
        return false;
    }

    JsonObject root = doc->as<JsonObject>();
    this->gmt_offset_sec = root["gmt_offset_sec"].as<long>();
    this->daylight_offset_sec = root["daylight_offset_sec"].as<int>();
    this->ntp_server_host = root["ntp_server_host"].as<String>();

    file.close();
    delete doc;
    return true;
}

void setFilename(String filename) {
    this->filename = filename;
}