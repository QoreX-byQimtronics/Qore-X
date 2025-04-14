#include <QorexLibrary.h>

boolean updateScreen = false;

void setup() {
  Serial.begin(115200);
  initDisplay(2, TFT_CYAN);
  analogWrite(13,0);
  analogWrite(13,255);
  initializeTouch();

  drawButton("RESET", 3, 126, 170, TFT_RED, TFT_BLACK, TFT_RED);
  drawButton("START", 3, 12, 170, TFT_GREEN, TFT_BLACK, TFT_GREEN);
  displayMessage("Stopwatch", 2, 70, 0, TFT_BLACK);
  displayStopwatchTime(); 
}

void loop() {
    readTouch(); 
    displayMessage("Press anywhere to stop", 1, 50, 270, TFT_BLACK);
    
    if (areaTouch(125, 220, 100, 140)) {
        if (isStopwatchRunning()) {
            stopStopwatch(); 
        } else {
            startStopwatch(); 
            updateScreen = true;
        }
    }

    if (areaTouch(21, 139, 96, 135)) {
        resetStopwatch(); 
        updateScreen = false;
        displayStopwatchTime(); 
    }

    if (touched > 0 && !areaTouch(125, 220, 100, 140) && !areaTouch(21, 139, 96, 135)) {
        if (isStopwatchRunning()) {
            stopStopwatch(); 
            updateScreen = false;
            displayStopwatchTime(); 
        }
    }

    if (updateScreen && isStopwatchRunning()) {
        updateStopwatch(); 
    }

    delay(100);
}
