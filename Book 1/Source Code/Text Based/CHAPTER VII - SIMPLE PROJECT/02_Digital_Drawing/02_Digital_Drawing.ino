#include <QorexLibrary.h>

boolean isClearButtonPressed = false;

void setup() {
  Serial.begin(115200);
  initDisplay(3, TFT_CYAN);
  analogWrite(13,0);
  analogWrite(13,255);
  initializeTouch();
  drawButton("Digital Drawing", 2, 60, 0, TFT_WHITE, TFT_BLACK, TFT_WHITE);
  drawButton("Clear", 2, 250, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);

}

void loop() {
  readTouch();
  if (areaTouch(199,239,0,64)) {
    if (!isClearButtonPressed) {
      fillScreen(TFT_CYAN);
      drawButton("Digital Drawing", 2, 60, 0, TFT_WHITE, TFT_BLACK, TFT_WHITE);
      drawButton("Clear", 2, 250, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);
      isClearButtonPressed = true;
    }
  } else {
    isClearButtonPressed = false;
    draw(TFT_RED);
  }
}