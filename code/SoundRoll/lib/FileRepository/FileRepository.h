#ifndef FileRepository_h
#define FileRepository_h

#include "ArduinoJson.h"
#include <LittleFS.h>

/**
 * {
 *   ssid: "ssid",
 *   quality: 100,
 *   password: "password"
 * }
 */

#define NETWORK_CREDENTIAL_FILE "/configurations.json"

class FileRepository {

    public:
        FileRepository();

        DynamicJsonDocument * network_credential_list = nullptr;

        void init();

        boolean load();
        boolean save();

};

#endif
