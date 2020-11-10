#ifndef wifi_manager_h
#define wifi_manager_h

#include <string>
#include <Wifi.h>

using namespace std;

namespace RemoteRelais_ESP32_Network
{
    class WifiManager
    {
    private:
        int status = WL_IDLE_STATUS;
        WiFiClient client;

    public:
        void Connect(char *ssid, char *password);
    };
}; // namespace RemoteRelais_ESP32_Network

#endif