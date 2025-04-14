#include "QorexLibrary.h"

float angleX, angleY;
float offsetX, offsetY;

void setup() {
  Serial.begin(115200);
  initDisplay(3, TFT_CYAN);
  analogWrite(13,0);
  analogWrite(13,255);
  initIMU();
  
  offsetX = imuAccelX(); 
  offsetY = imuAccelY(); 

  displayMessage("Angle Measurement", 3, 10, 0, TFT_BLACK);
}

void loop() {
  updateIMU();

  angleX = round(fabs(atan2(imuAccelY()+ offsetY, imuAccelZ())-PI)* 180.0 / PI * 10) / 10;
  angleY = round(fabs(atan2(-imuAccelX()+ offsetX, imuAccelZ())-PI)* 180.0 / PI * 10) / 10;

  fillRectangle(30, 80, 100, 20, 0, TFT_NAVY);
  fillRectangle(180, 80, 110, 20, 0, TFT_NAVY);
  fillRectangle(25, 110, 120, 50, 0, TFT_WHITE);
  fillRectangle(175, 110, 120, 50, 0, TFT_WHITE);

  displayMessage("Angle X",2,35,80,TFT_YELLOW);
  decimalNumber(angleX,3,30,115,TFT_BLACK);
  displayMessage("Angle Y",2,185,80,TFT_YELLOW);
  decimalNumber(angleY,3,180,115,TFT_BLACK);
  delay(500);
}