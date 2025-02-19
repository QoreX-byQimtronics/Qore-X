#include <QorexLibrary.h>

// Frequencies for the notes (C, D, E, F, G, A, B, C)
const float noteFrequencies[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};

// Note names to be displayed
const char* noteNames[] = {"do", "re", "mi", "fa", "sol", "la", "si", "do"};

// Function to play a tone, change the display color, and show note name
void playToneWithText(float frequency, int duration, const char* note) {
  // Clear the previous text by filling the area with the background color
  fillRectangle(130, 100, 200, 50, 0, TFT_BLACK); // Adjust the rectangle size as needed
  displayMessage(note, 3, 130, 100, TFT_WHITE);   // Display the note name on the screen
  playTone(frequency, duration);  // Play the tone for the specified duration
}

void setup() {
  Serial.begin(115200);  // Initialize serial communication at 115200 baud rate for debugging
  i2sAudioInit();  // Initialize I2S audio
  initDisplay(3, TFT_BLACK);  // Initialize the display with orientation 3 and set the background color to black
}

void loop() {
  setVolume(10);                                             // Set volume to 10%
  // Play each note in the array with the corresponding text
  playToneWithText(noteFrequencies[0], 1500, noteNames[0]);  // Play C for 1500 ms, show "do"
  playToneWithText(noteFrequencies[1], 1500, noteNames[1]);  // Play D for 1500 ms, show "re"
  playToneWithText(noteFrequencies[2], 1500, noteNames[2]);  // Play E for 1500 ms, show "mi"
  playToneWithText(noteFrequencies[3], 2000, noteNames[3]);  // Play F for 2000 ms, show "fa"
  playToneWithText(noteFrequencies[4], 1500, noteNames[4]);  // Play G for 1500 ms, show "sol"
  playToneWithText(noteFrequencies[5], 1500, noteNames[5]);  // Play A for 1500 ms, show "la"
  playToneWithText(noteFrequencies[6], 1500, noteNames[6]);  // Play B for 1500 ms, show "si"
  playToneWithText(noteFrequencies[7], 2000, noteNames[7]);  // Play high C for 2000 ms, show "do"
}
