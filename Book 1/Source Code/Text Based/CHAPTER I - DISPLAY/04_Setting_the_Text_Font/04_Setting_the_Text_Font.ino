#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  // Initialize the TFT display with rotation set to 3 and the background color set to black
  initDisplay(3, TFT_BLACK);
}

void loop() {
  // Set the font style to style 3
  setFontStyle(3);
  
  // Display a Massage with font style 3 "Hello Qore-X" at position (0, 50) with white text color and text size 1
  displayMessage("Hello Qore-X ", 1, 0, 50, TFT_WHITE);

  setFontStyle(0);
  // Display a normal message "Hello Qore-X" at position (0, 100) with white text color and text size 2
  displayMessage("Hello Qore-X ", 2, 0, 100, TFT_WHITE);
}
