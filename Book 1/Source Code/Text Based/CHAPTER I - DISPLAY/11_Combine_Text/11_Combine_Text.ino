#include <QorexLibrary.h>

void setup() {
    initDisplay(3, TFT_BLACK);
    analogWrite(13,0);
    analogWrite(13,255);
    drawButton("Button 1", 3, 50, 30, TFT_RED, TFT_BLACK, TFT_WHITE);
}

void loop() {

}
