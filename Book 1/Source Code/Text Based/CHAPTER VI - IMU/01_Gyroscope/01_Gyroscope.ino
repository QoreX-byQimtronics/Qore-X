#include <QorexLibrary.h>

void setup() {
  Serial.begin(115200);
  initIMU();
}

void loop() {
  updateIMU();

  Serial.print("Gyro X = ");
  Serial.print(imuGyroX());

  Serial.print("\t\t Gyro Y = ");
  Serial.print(imuGyroY());

  Serial.print("\t\t Gyro Z = ");
  Serial.println(imuGyroZ());
  
  delay(500);
}
