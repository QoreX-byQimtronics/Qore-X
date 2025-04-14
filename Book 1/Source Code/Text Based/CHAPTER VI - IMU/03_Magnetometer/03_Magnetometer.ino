#include <QorexLibrary.h>

void setup() {
  Serial.begin(115200);
  initIMU();
}

void loop() {
  updateIMU();

  Serial.print("Mag X = ");
  Serial.print(imuMagX());

  Serial.print("\t\t Mag Y = ");
  Serial.print(imuMagY());

  Serial.print("\t\t Mag Z = ");
  Serial.println(imuMagZ());
  
  delay(500);
}
