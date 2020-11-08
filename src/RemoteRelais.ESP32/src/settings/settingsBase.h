#ifndef settings_base_h
#define settings_base_h

namespace RemoteRelais_ESP32_Settings
{
    class SettingsBase
    {
    public:
        virtual char *wifi_ssid();
        virtual char *wifi_password();
    };
}; // namespace RemoteRelais_ESP32_Settings
#endif