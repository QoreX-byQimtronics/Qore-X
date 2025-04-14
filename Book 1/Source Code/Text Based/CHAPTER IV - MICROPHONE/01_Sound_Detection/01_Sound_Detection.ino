#include "QorexLibrary.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  micSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(readMic());
}
