#ifndef isettings_h
#define isettings_h

namespace RemoteRelais_ESP32_Settings
{
    class ISettings
    {
    public:
        virtual char *Wifi_ssid() = 0;
        virtual char *Wifi_password() = 0;
    };
}; // namespace RemoteRelais_ESP32_Settings
#endif