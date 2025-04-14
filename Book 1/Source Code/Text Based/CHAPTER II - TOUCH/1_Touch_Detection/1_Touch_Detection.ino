#include <QorexLibrary.h>
int count;

void setup() {
    initDisplay(3, TFT_BLACK);    
    analogWrite(13,0);
    analogWrite(13,255);
    initializeTouch();
    displayMessage("Touch Test", 3, 50, 0, TFT_WHITE);
}    

void loop(){                    
    readTouch();
    if (touched){
      if(areaTouch(50, 210, 50, 300)){
        fillRectangle(90, 100, 100, 100, 0, TFT_BLACK);
        count++;
        displayNumber(count, 3, 150, 100, TFT_DARKCYAN);
        delay(500);
      }
    }
}
