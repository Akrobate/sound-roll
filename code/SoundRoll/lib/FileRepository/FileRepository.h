#ifndef FileRepository_h
#define FileRepository_h

#include <Arduino.h>
#include "ArduinoJson.h"
#include <LittleFS.h>

/**
 * {
 *   ssid: "ssid",
 *   quality: 100,
 *   password: "password"
 * }
 */

#define CONFIGURATION_FILE "/configurations.json"

class FileRepository {

    public:
        FileRepository();

        String filename;

        DynamicJsonDocument * network_credential_list = nullptr;

        void init();
        boolean load();
        boolean save();

        void setFilename(String filename);

};

#endif
