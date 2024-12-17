#ifndef BusinessState_h
#define BusinessState_h

class BusinessState {

    private:
        unsigned int volume;
        String configuration_file = "/configurations.json";
        String wifi_password = "PASSWORD";
        String wifi_ssid = "PASSWORD";
        

    public:
        BusinessState();

        void setVolume(unsigned int volume);
        unsigned int getVolume();

        void init();

};

#endif
