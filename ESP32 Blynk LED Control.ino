#include "config.h"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>


static const int LED_PIN = 2;

#define BLYNK_PRINT Serial
BlynkTimer timer;

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(LED_PIN, value ? HIGH : LOW);
  Serial.print("V0 = ");
  Serial.println(value);
}

void heartbeat()
{
  Serial.print("WiFi: ");
  Serial.print(WiFi.isConnected() ? "OK" : "NO");
  Serial.print(" | Blynk: ");
  Serial.println(Blynk.connected() ? "OK" : "NO");
}

void setup()
{
  Serial.begin(9600);
  delay(200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println("\n--- ESP32 + Blynk LED Control ---");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(2000L, heartbeat);
}

void loop()
{
  Blynk.run();
  timer.run();
}
