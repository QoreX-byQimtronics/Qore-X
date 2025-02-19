#include "QorexLibrary.h"

bool isClearButtonPressed = false; // Flag to track the state of the "Clear" button

void setup() {
  Serial.begin(115200);  // Start serial communication
  initDisplay(3, TFT_CYAN);
  initializeTouch();
  
  drawButton("Digital Drawing", 2, 60, 0, TFT_WHITE, TFT_BLACK, TFT_WHITE); // Draw the "Digital Drawing" button
  drawButton("Clear", 2, 250, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);

}

void loop() { 
  readTouch();
  // Check if the "Clear" button is pressed
  if (areaTouch(199, 239, 0, 64)) {
    if (!isClearButtonPressed) {
      fillScreen(TFT_CYAN); // Clear the screen
      drawButton("Digital Drawing", 2, 60, 0, TFT_WHITE, TFT_BLACK, TFT_WHITE);
      drawButton("Clear", 2, 250, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);    
      isClearButtonPressed = true; // Set the flag to true indicating the button has been pressed
    }
  } else {
    isClearButtonPressed = false; // Reset the flag indicating the button is not pressed
    draw();
  }
}
