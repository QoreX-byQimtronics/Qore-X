#include "QorexLibrary.h"

void setup() {
  Serial.begin(115200);
  initBME();
}

void loop() {
  Serial.print(F("Pressure = "));
  Serial.print(bmePressure()/ 100f);
  Serial.println(" hPa");
  delay(500);
}
