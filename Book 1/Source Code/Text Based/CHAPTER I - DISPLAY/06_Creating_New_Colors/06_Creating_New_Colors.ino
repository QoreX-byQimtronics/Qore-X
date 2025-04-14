#include "QorexLibrary.h" // Include the library for Qore-X

#define orange 0xfcc0 // Define the color orange with the hexadecimal value 0xfcc0

void setup() {
  // Initialize the TFT display with rotation set to 3 and the background color set to black
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  // Display the message "Hello Qore-X" on the screen with text size 2, at position (0, 0), and white text color
  displayMessage("Hello Qore-X", 2, 0, 0, TFT_WHITE);

  // Display the message "Hello Qore-X" on the screen with text size 2, at position (0, 50), and orange text color
  displayMessage("Hello Qore-X", 2, 0, 50, orange);
}
