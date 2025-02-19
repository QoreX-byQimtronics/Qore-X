#include <QorexLibrary.h>

void setup() {
  Serial.begin(115200);
  initIMU();
}

void loop() {
  updateIMU();

  Serial.print("Accel X = ");
  Serial.print(imuAccelX());

  Serial.print("\t\t Accel Y = ");
  Serial.print(imuAccelY());

  Serial.print("\t\t Accel Z = ");
  Serial.println(imuAccelZ());
  
  delay(500);
}
