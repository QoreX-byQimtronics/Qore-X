#include <QorexLibrary.h>

boolean updateScreen = false;

void setup() {
  Serial.begin(115200);
  initDisplay(2, TFT_CYAN);
  initializeTouch();

  drawButton("RESET", 3, 126, 170, TFT_RED, TFT_BLACK, TFT_RED);
  drawButton("START", 3, 12, 170, TFT_GREEN, TFT_BLACK, TFT_GREEN);
  displayMessage("Stopwatch", 2, 70, 0, TFT_BLACK);
  displayStopwatchTime(); // Tampilkan waktu awal
}

void loop() {
    readTouch(); // Baca input dari layar sentuh
    displayMessage("Press anywhere to stop", 1, 50, 270, TFT_BLACK);
    
    // Tombol START
    if (areaTouch(125, 220, 100, 140)) {
        if (isStopwatchRunning()) {
            stopStopwatch(); // Hentikan stopwatch
        } else {
            startStopwatch(); // Mulai stopwatch
            updateScreen = true;
        }
    }

    // Tombol RESET
    if (areaTouch(21, 139, 96, 135)) {
        resetStopwatch(); // Reset stopwatch
        updateScreen = false;
        displayStopwatchTime(); // Tampilkan waktu 00:00:00
    }

    // Sentuhan di luar tombol
    if (touched > 0 && !areaTouch(125, 220, 100, 140) && !areaTouch(21, 139, 96, 135)) {
        if (isStopwatchRunning()) {
            stopStopwatch(); // Hentikan stopwatch
            updateScreen = false;
            displayStopwatchTime(); // Tampilkan waktu terakhir
        }
    }

    // Perbarui tampilan stopwatch jika sedang berjalan
    if (updateScreen && isStopwatchRunning()) {
        updateStopwatch(); // Perbarui waktu berjalan
    }

    delay(100);
}
