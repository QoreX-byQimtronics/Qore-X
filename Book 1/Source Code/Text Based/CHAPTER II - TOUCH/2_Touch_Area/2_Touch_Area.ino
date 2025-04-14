#include "QorexLibrary.h"
int count;

void setup(){
  Serial.begin(115200);
  initDisplay( 3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
  initializeTouch();
  displayMessage("Touch Area Test", 3, 20, 0, TFT_WHITE);
  drawButton("Button 1", 2, 30, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);
  drawButton("Button 2", 2, 180, 200, TFT_WHITE, TFT_BLACK, TFT_WHITE);
}

void loop(){
  readTouch();
  // Serial.print(ft6336u.read_touch1_x()); Serial.print(" , "); Serial.print(ft6336u.read_touch1_y()); Serial.println(")"); 
  if (touched) {
    if(areaTouch(206, 239, 177, 276)){
      fillRectangle(140, 100, 70, 70, 0, TFT_BLACK);
      count++;
      displayNumber(count, 3, 140, 100, TFT_CYAN);
      delay(500);
    }
    if(areaTouch(117, 239, 30, 143)){
      fillRectangle(140, 100, 70, 70, 0, TFT_BLACK);
      count--;
      displayNumber(count, 3, 140, 100, TFT_CYAN);
      delay(500);
    }
  }
  Serial.print("Touched at: ");
  Serial.print(x);
  Serial.print(", ");
  Serial.println(y);

  delay(500); 
}
