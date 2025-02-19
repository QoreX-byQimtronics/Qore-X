#include "QorexLibrary.h"
bool whistleDetected = false;
bool clapDetected = false;
unsigned long milTime = 0;    // harus dituliskan dalam kode agar bisa upload    
bool collectingWave = false;  // harus dituliskan dalam kode agar bisa upload

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  micSetup();
  milTime = millis(); // Record start time for debounce
}

void loop() {
  readClapOrWhistle();
  
  if (whistleDetected) {
    // Lakukan sesuatu jika whistle terdeteksi
    Serial.println("Whistle detected!");
    // Misalnya: Mengirimkan sinyal atau melakukan aksi tertentu
    whistleDetected = false; // Reset flag
  }

  if (clapDetected) {
    // Lakukan sesuatu jika clap terdeteksi
    Serial.println("Clap detected!");
    // Misalnya: Mengirimkan sinyal atau melakukan aksi tertentu
    clapDetected = false; // Reset flag
  }
}
