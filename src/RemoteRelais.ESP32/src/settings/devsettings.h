#ifndef devsettings_h
#define devsettings_h

#include "settingsBase.h"

namespace RemoteRelais_ESP32_Settings
{
    class DevSettings : public SettingsBase
    {
        char *wifi_ssid() override;
        char *wifi_password() override;
    };
}; // namespace RemoteRelais_ESP32_Settings

#endif