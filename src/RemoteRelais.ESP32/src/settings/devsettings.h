#ifndef devsettings_h
#define devsettings_h

#include "ISettings.h"

namespace RemoteRelais_ESP32_Settings
{
    class DevSettings : public ISettings
    {
    private:
        char *_ssid = "MySSID";
        char *_password = "MyPassword";
    public:
        char *Wifi_ssid() override;
        char *Wifi_password() override;
    };
}; // namespace RemoteRelais_ESP32_Settings

#endif