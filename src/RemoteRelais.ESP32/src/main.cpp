#include <Arduino.h>
#include "Settings/ISettings.h"
#include "Settings/DevSettings.h"
#include "Network/WifiManager.h"

using namespace RemoteRelais_ESP32_Settings;
using namespace RemoteRelais_ESP32_Network;

#define NETWORK_LED 18
#define RELAIS_LED 21

WifiManager *_wifiManager;

void setupGPIO()
{
  pinMode(NETWORK_LED, OUTPUT);
  pinMode(RELAIS_LED, OUTPUT);
}

void setup()
{

  setupGPIO();

  Serial.begin(9600);
  Serial.write("Starting setup\n");
  DevSettings settings = DevSettings();
  Serial.write("Loaded settings\n");
  _wifiManager = new WifiManager();
  _wifiManager->Connect(settings.Wifi_ssid(), settings.Wifi_password());
  digitalWrite(NETWORK_LED, HIGH);
  digitalWrite(RELAIS_LED, HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
