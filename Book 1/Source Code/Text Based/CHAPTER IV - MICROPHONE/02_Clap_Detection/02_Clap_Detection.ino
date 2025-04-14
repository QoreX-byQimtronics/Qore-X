#include <QorexLibrary.h>

int lastClapCount = 0;

void setup() {
    Serial.begin(115200);
    micSetup();
    Serial.println("Clap Detection Init...");
    delay(2000);
}

void loop() {
    clapThreshhold(40); //atur nilai treshold sesuai dengan keadaan sekitar (semakin tinggi clap akan semakin sukar terdeteksi)
    countingClap(0, 0, 0, 0, 0, 0); //Nilai 0 karena tidak menggunakan display
    int currentClapCount = getClapCount();
    
    if (currentClapCount > lastClapCount) {
        Serial.println("Clap Detected!");
        lastClapCount = currentClapCount;
    }

    delay(10);
}