#include <QorexLibrary.h>

// Frequencies for the notes (C, D, E, F, G, A, B, C)
const float noteFrequencies[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};

// Function to play a tone and change the display color
void playToneWithColor(float frequency, int duration, uint16_t color) {
  fillScreen(color);  // Set the screen color before playing the tone
  playTone(frequency, duration);  // Play the tone for the specified duration
}

void setup() {
  Serial.begin(115200);  // Initialize serial communication at 115200 baud rate for debugging
  i2sAudioInit();        // Initialize I2S audio
  initDisplay(3, TFT_BLACK); 
  analogWrite(13,0);
  analogWrite(13,255);
}

void loop() {
  // Play each note in the array with the corresponding color
  setVolume(50);  // Set volume to 50% (0-100%)
  playToneWithColor(noteFrequencies[0], 1500, TFT_RED);     // Play C for 1500 ms, set color to red
  playToneWithColor(noteFrequencies[1], 1500, TFT_GREEN);   // Play D for 1500 ms, set color to green
  playToneWithColor(noteFrequencies[2], 1500, TFT_BLUE);    // Play E for 1500 ms, set color to blue
  playToneWithColor(noteFrequencies[3], 2000, TFT_YELLOW);  // Play F for 2000 ms, set color to yellow
  playToneWithColor(noteFrequencies[4], 1500, TFT_CYAN);    // Play G for 1500 ms, set color to cyan
  playToneWithColor(noteFrequencies[5], 1500, TFT_MAGENTA); // Play A for 1500 ms, set color to magenta
  playToneWithColor(noteFrequencies[6], 1500, TFT_ORANGE);  // Play B for 1500 ms, set color to orange
  playToneWithColor(noteFrequencies[7], 2000, TFT_WHITE);   // Play high C for 2000 ms, set color to white
}