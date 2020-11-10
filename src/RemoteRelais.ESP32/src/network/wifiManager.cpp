#ifndef wifi_manager_cpp
#define wifi_manager_cpp

#include "wifiManager.h"

using namespace std;

namespace RemoteRelais_ESP32_Network
{
    void WifiManager::Connect(char *ssid, char *password)
    {

        Serial.println(ssid);
        Serial.println(password);
        status = WiFi.begin(ssid, password);
        if (status != WL_CONNECTED)
        {
            Serial.println("Couldn't get a wifi connection");
            Serial.println(status);
        }
        else
        {
            IPAddress ipAddress = WiFi.dnsIP();
            Serial.println("Connected to wifi");
            Serial.println(printf("Received IP address: \t", ipAddress.toString()));
        }
    }
}; // namespace RemoteRelais_ESP32_Network

#endif