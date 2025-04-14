#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  initDisplay(3,TFT_BLACK);  // Initialize the TFT display with rotation 3 and black background
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  displayMessage("Hello Qore-X", 3, 100, 0, TFT_WHITE);  // Display the message "Hello Qore-X" on the screen with text size 3, at position (100, 0), and white text color
}
