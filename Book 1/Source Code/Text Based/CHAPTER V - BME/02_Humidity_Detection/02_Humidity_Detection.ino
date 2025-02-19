#include "QorexLibrary.h"

void setup() {
  Serial.begin(115200);
  initBME();
}

void loop() {
  Serial.print(F("Humidity = "));
  Serial.print(bmeHumidity());
  Serial.println(" %");
  delay(500);
}
