#include <QorexLibrary.h>

// Frequencies for the notes (C, D, E, F, G, A, B, C)
const float noteFrequencies[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};

void setup() {
  Serial.begin(115200);  // Initialize serial communication at 115200 baud rate for debugging
  i2sAudioInit();        // Initialize I2S audio
}

void loop() {
  // Play each note in the array
  setVolume(50);                          // Set volume to 50% (0-100%)
  playTone(noteFrequencies[0], 1500);      // Play C for 1500 ms
  playTone(noteFrequencies[1], 1500);      // Play D for 1500 ms
  playTone(noteFrequencies[2], 1500);      // Play E for 1500 ms
  playTone(noteFrequencies[3], 2000);      // Play F for 2000 ms
  playTone(noteFrequencies[4]#include <QorexLibrary.h>

// Frequencies for the notes (C, D, E, F, G, A, B, C)
const float noteFrequencies[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};

void setup() {
  Serial.begin(115200);  // Initialize serial communication at 115200 baud rate for debugging
  i2sAudioInit();        // Initialize I2S audio
}

void loop() {
  // Play each note in the array
  setVolume(50);                          // Set volume to 50% (0-100%)
  playTone(noteFrequencies[0], 1500);      // Play C for 1500 ms
  playTone(noteFrequencies[1], 1500);      // Play D for 1500 ms
  playTone(noteFrequencies[2], 1500);      // Play E for 1500 ms
  playTone(noteFrequencies[3], 2000);      // Play F for 2000 ms
  playTone(noteFrequencies[4], 1500);      // Play G for 1500 ms
  playTone(noteFrequencies[5], 1500);      // Play A for 1500 ms
  playTone(noteFrequencies[6], 1500);      // Play B for 1500 ms
  playTone(noteFrequencies[7], 2000);      // Play high C for 2000 ms
}, 1500);      // Play G for 1500 ms
  playTone(noteFrequencies[5], 1500);      // Play A for 1500 ms
  playTone(noteFrequencies[6], 1500);      // Play B for 1500 ms
  playTone(noteFrequencies[7], 2000);      // Play high C for 2000 ms
}
