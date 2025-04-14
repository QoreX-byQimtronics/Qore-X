#include "QorexLibrary.h"

void setup() {
  Serial.begin(115200);
  initBME();
}

void loop() {
  Serial.print("Approx. Altitude = ");
  Serial.print(bmeAltitude(1013.25));
  Serial.println(" m");
  delay(500);
}
