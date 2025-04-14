#include <QorexLibrary.h>

void setup() {
    initDisplay(3, TFT_BLACK);
    analogWrite(13,0);
    analogWrite(13,255);
    displayMessage("Hello Qore-X", 3, 0, 0, TFT_WHITE);
}
void loop(){
  
}
