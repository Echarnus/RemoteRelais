#ifndef devsettings_cpp
#define devsettings_cpp

#include "devsettings.h"
#include <string>
#include "Arduino.h"

using namespace std;

namespace RemoteRelais_ESP32_Settings
{
    char *DevSettings::Wifi_ssid()
    {
        return &_ssid[0];
    };

    char *DevSettings::Wifi_password()
    {
        return &_password[0];
    }
}; // namespace RemoteRelais_ESP32_Settings

#endif