#include <QorexLibrary.h>

void setup() {
  initDisplay(3, TFT_BLACK);
  Serial.begin(115200);
  displayMessage("Test IMU", 3, 90, 0, TFT_WHITE);
  initIMU();
}
    
void loop() {
  updateIMU();

  displayMessage(" Accel X:", 2, 20, 30, TFT_WHITE);
  decimalNumber(imuAccelX(), 2, 50, 50, TFT_WHITE);
  displayMessage(" Accel Y:", 2, 185, 30, TFT_WHITE);
  decimalNumber(imuAccelY(), 2, 200, 50, TFT_WHITE);
  displayMessage(" Accel Z:", 2, 100, 70, TFT_WHITE);
  decimalNumber(imuAccelZ(), 2, 120, 90, TFT_WHITE);

  displayMessage(" Gyro X:", 2, 20, 110, TFT_WHITE);
  decimalNumber(imuGyroX(), 2, 50, 130, TFT_WHITE);
  displayMessage(" Gyro Y:", 2, 185, 110, TFT_WHITE);
  decimalNumber(imuGyroY(), 2, 200, 130, TFT_WHITE);
  displayMessage(" Gyro Z:", 2, 100, 150, TFT_WHITE);    
  decimalNumber(imuGyroZ(), 2, 120, 170, TFT_WHITE);

  displayMessage(" Mag X:", 2, 0, 190, TFT_WHITE);
  decimalNumber(imuMagX(), 2, 2, 210, TFT_WHITE);
  displayMessage(" Mag Y:", 2, 110, 190, TFT_WHITE);
  decimalNumber(imuMagY(), 2, 110, 210, TFT_WHITE);
  displayMessage(" Mag Z:", 2, 230, 190, TFT_WHITE);
  decimalNumber(imuMagZ(), 2, 230, 210, TFT_WHITE);

  delay(1000);
  
  fillRectangle(0, 20, 320, 220, 0,TFT_BLACK);
  delay(50);
}
