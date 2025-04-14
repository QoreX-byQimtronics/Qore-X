#include <QorexLibrary.h>

float offsetX = 0.0;
float offsetY = 0.0;
float offsetZ = 0.0;
float goal = 0.0;

void setup() {
  Serial.begin(115200);
  initDisplay(3, TFT_CYAN);
  analogWrite(13,0);
  analogWrite(13,255);
  initIMU();
  displayMessage("Digital Compass", 2, 70, 10, TFT_BLACK);
  displayMessage("Compass needs calibration!", 2, 0, 80, TFT_BLACK);
  displayMessage("Rotate the compass 360", 2, 0, 100, TFT_BLACK);
  displayMessage("degrees for calibration", 2, 0, 120, TFT_BLACK);
  delay(1000);
  calibrateCompass();
  fillRectangle(0, 80, 310, 60, 0, TFT_CYAN);
}

void loop() {
  updateIMU();
  goal = readCompass();
  
  fillCircle(155, 120, 75, TFT_YELLOW );

  displayMessage("N", 2, 150, 50, TFT_BLACK);
  displayMessage("E", 2, 85, 120, TFT_BLACK);
  displayMessage("W", 2, 215, 120, TFT_BLACK);
  displayMessage("S", 2, 150, 180, TFT_BLACK);
  decimalNumber(goal, 2, 120, 210, TFT_BLACK);
  
  drawCompassNeedle(goal, TFT_BLACK);

  delay(100);

  fillRectangle(120, 210, 150, 20, 0, TFT_CYAN);
  displayMessage(compasDirection(), 2, 200, 210, TFT_YELLOW);
}