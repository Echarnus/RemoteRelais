#ifndef settings_h
#define settings_h

#include <string>
using namespace std;

namespace Settings
{
    class SettingsBase
    {
    public:
        virtual string wifi_ssid();
        virtual string wifi_password();
    };
}; // namespace Settings
#endif