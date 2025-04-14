#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  initDisplay(3,TFT_BLACK);  // Initialize the TFT display with rotation 3 and black background
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  // Display a normal message "Hello Qore-X" at position (0, 0) with white text color and text size 3
  displayMessage("Hello Qore-X", 3, 0, 0, TFT_WHITE);

  // Display a bold message "Hello Qore-X" at position (0, 100) with white text color and text size 3
  displayMessageBold("Hello Qore-X", 3, 0, 100, TFT_WHITE);
  
  // Display an italic message "Hello Qore-X" at position (0, 170) with white text color and text size 3
  displayMessageItalic("Hello Qore-X ", 3, 0, 170, TFT_WHITE);
}
