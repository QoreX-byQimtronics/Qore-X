#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation 3 and a black background
  initDisplay(3, TFT_BLACK);
}

void loop() {
  drawEllipse(50, 50, 50, 20, 0, TFT_WHITE);
}
