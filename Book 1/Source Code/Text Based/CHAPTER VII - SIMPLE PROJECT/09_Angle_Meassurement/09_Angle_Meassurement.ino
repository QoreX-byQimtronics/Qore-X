#include <QorexLibrary.h>

void setup() {
    Serial.begin(115200);

    initDisplay(3,TFT_WHITE);
    analogWrite(13,0);
    analogWrite(13,255);

    micSetup();
    displayMessage("Clap Detection Init...", 2, 10, 100, TFT_BLACK);

    delay(2000);
    fillScreen(TFT_WHITE);  
    displayMessage("Clap Count: ", 3, 60, 60, TFT_BLACK); 
}

void loop() {
    clapThreshold(40);
    countingClap(5, 140, 100, 100, 35, TFT_WHITE);
    delay(10);
}
