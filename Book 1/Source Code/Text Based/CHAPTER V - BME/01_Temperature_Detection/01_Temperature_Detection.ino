#include "QorexLibrary.h"

void setup() {
  Serial.begin(115200);
  initBME();
}

void loop() {
  Serial.print(F("Temperature = "));
  Serial.print(bmeTemperature());
  Serial.println(" °C");
  delay(500);
}
