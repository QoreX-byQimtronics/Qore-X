#include <QorexLibrary.h>

const float noteFrequencieshigh[] = {523.25, 587.33, 659.25, 698.46, 783.99, 880.00, 987.77, 1046.50};

void setup() {
  Serial.begin(115200);
  i2sAudioInit();
  initDisplay(3, TFT_WHITE);
  analogWrite(13,0);
  analogWrite(13,255);
  initializeTouch();

  fillRectangle(0, 0, 80, 120, 0, TFT_WHITE);
  fillRectangle(80, 0, 80, 120, 0, TFT_RED);
  fillRectangle(160, 0, 80, 120, 0, TFT_BLUE);
  fillRectangle(240, 0, 80, 120, 0, TFT_PINK);
  fillRectangle(0, 120, 80, 120, 0, TFT_GREEN);
  fillRectangle(80, 120, 80, 120, 0, TFT_YELLOW);
  fillRectangle(160, 120, 80, 120, 0, TFT_PURPLE);
  fillRectangle(240, 120, 80, 120, 0, TFT_CYAN);
  
  displayMessage("DO'",2,20,10,TFT_ORANGE);
  displayMessage("SI",2,110,10,TFT_MAGENTA);
  displayMessage("LA",2,180,10,TFT_VIOLET);
  displayMessage("SOL",2,270,10,TFT_DARKGREY);
  displayMessage("FA",2,20,220,TFT_OLIVE);
  displayMessage("MI",2,110,220,TFT_MAROON);
  displayMessage("RE",2,180,220,TFT_SKYBLUE);
  displayMessage("DO",2,270,220,TFT_GOLD); 
}

void loop() {
    setVolume(40);
    readTouch();
    
    if (touched) {
      Serial.print("Touched at: ");
      Serial.print(x);
      Serial.print(", ");
      Serial.println(y);
      
    if (areaTouch(125,240,0,75)) {
      playTone(noteFrequencieshigh[0],1000);
      Serial.println("DO");
    } 
    else if (areaTouch(125,240,85,155)) {
      playTone(noteFrequencieshigh[1],1000);
      Serial.println("RE");
    } 
    else if (areaTouch(125,240,165,235)) {
      playTone(noteFrequencieshigh[2],1000);
      Serial.println("MI");
    } 
    else if (areaTouch(125,240,245,320)) {
      playTone(noteFrequencieshigh[3],1000);
      Serial.println("FA");
    } 
    else if (areaTouch(0,115,0,75)) {
      playTone(noteFrequencieshigh[4],1000);
      Serial.println("SOL");
    } 
    else if (areaTouch(0,115,85,155)) {
      playTone(noteFrequencieshigh[5],1000);
      Serial.println("LA");
    } 
    else if (areaTouch(0,115,165,235)) {
      playTone(noteFrequencieshigh[6],1000);
      Serial.println("SI");
    } 
    else if (areaTouch(0,115,245,320)) {
      playTone(noteFrequencieshigh[7],1000);
      Serial.println("DO'");
    } 
  }
  else {
  }
}