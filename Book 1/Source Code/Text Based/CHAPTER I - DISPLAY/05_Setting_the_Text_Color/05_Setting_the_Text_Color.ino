#include "QorexLibrary.h" // Include the library for Qore-X

void setup() {
  initDisplay(3,TFT_BLACK);  // Initialize the TFT display with rotation 3 and black background
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  // Display the message "Hello Qore-X" on the screen with text size 2, at position (0, 0), and white text color
  displayMessage("Hello Qore-X", 2, 0, 0, TFT_WHITE); 
  
  // Display the message "Hello Qore-X" on the screen with text size 2, at position (0, 50), and red text color
  displayMessage("Hello Qore-X", 2, 0, 50, TFT_RED);  
}
