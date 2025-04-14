#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation 3 and a black background
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  // Draw a white rectangle at the position (0, 0) with a width of 100 and a height of 120 and 0 angle 
  drawRectangle(0, 0, 50, 50, 0,  TFT_WHITE); //drawRectangle(int x, int y, int width, int height, float angle, uint16_t color);  
}
