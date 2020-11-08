#include <Arduino.h>
#include "settings/settingsBase.h"
#include "settings/devsettings.h"
#include "network/wifiManager.h"

using namespace RemoteRelais_ESP32_Settings;
using namespace RemoteRelais_ESP32_Network;

SettingsBase _settings;
WifiManager *_wifiManager;

void setup()
{
  Serial.begin(9600);
  Serial.write("Starting setup");
  _settings = DevSettings();
  Serial.write("Loaded settings");
  Serial.write(printf("SSID %s\n", _settings.wifi_ssid()));
  Serial.write(printf("SSID %s\n", _settings.wifi_password()));
  _wifiManager = new WifiManager();
  _wifiManager->connect(_settings.wifi_ssid(), _settings.wifi_password());
}

void loop()
{
  // put your main code here, to run repeatedly:
}
