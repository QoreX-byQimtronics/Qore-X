#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation 3 and a black background
  initDisplay(3, TFT_BLACK);
}

void loop() {
  drawTriangle(30, 20, 30, 150, 150, 150, 0, TFT_WHITE);
}
