#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation 3 and a black background
  initDisplay(3, TFT_BLACK);
}

void loop() {
  // Draw a white rectangle at the position (0, 0) with a width of 100 and a height of 120 and 0 angle 
  drawCircle(50, 50, 50, TFT_WHITE);
}
