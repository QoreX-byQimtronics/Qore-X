#include <QorexLibrary.h>
#include "panda.h" // Image is stored here in an 8-bit array
#include "koala.h"

void setup() {
    Serial.begin(115200);
    initDisplay(0, TFT_BLACK);
    analogWrite(13,0);
    analogWrite(13,255);
}

void loop() {
    displayImage((uint8_t *)panda, sizeof(panda), 0, 0);
    delay(5000);
    fillScreen(TFT_BLACK);
    displayImage((uint8_t *)koala, sizeof(koala), 0, 0);
    delay(5000);
    fillScreen(TFT_BLACK);
}
