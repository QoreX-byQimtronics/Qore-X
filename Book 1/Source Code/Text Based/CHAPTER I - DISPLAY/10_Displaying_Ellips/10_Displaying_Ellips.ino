#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation 3 and a black background
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  drawEllipse(50, 50, 50, 20, 0, TFT_WHITE);
}
