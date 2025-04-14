#include "image_data.h"
#include <QorexLibrary.h>

unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
int currentBitmapIndex = 0;
boolean waitingForSecondTap = false;
const int interval = 1500;
const int doubleTapInterval = 300;
const int totalBitmaps = 5;
unsigned long currentTapTime = 0;
unsigned int lastTapTime = 0;

void setup() {
  Serial.begin(115200);
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
  initializeTouch();
  createSprite(240,180);
}

void loop() {
    readTouch();
    currentMillis = millis();
    if (touched > 0) {
      currentTapTime = millis();
      if (waitingForSecondTap && currentTapTime - lastTapTime <= doubleTapInterval) {
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_SEVENTHarray, 240, 180,TFT_WHITE,TFT_BLACK);
        pushSprite(40,30);
        delay(500);
        waitingForSecondTap = false;
      } else {
        waitingForSecondTap = true;
        lastTapTime = currentTapTime;
      }
    } else if (waitingForSecondTap && millis() - lastTapTime > doubleTapInterval) {
      fillSprite(TFT_BLACK);
      spriteDrawBitMap(0,0,image_data_FOURTHarray, 240, 180,TFT_WHITE,TFT_BLACK);
      pushSprite(40,30);
      waitingForSecondTap = false;
      delay(500);
    }
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      switch (currentBitmapIndex) {
      case 0:
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_FIRSTarray, 240, 180,TFT_WHITE,TFT_BLACK);
        break;
       case 1:
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_SECONDarray, 240, 180,TFT_WHITE,TFT_BLACK);
        break;
       case 2:
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_THIRDarray, 240, 180,TFT_WHITE,TFT_BLACK);
        break;
       case 3:
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_FIFTHarray, 240, 180,TFT_WHITE,TFT_BLACK);
        break;
       case 4:
        fillSprite(TFT_BLACK);
        spriteDrawBitMap(0,0,image_data_SIXTHarray, 240, 180,TFT_WHITE,TFT_BLACK);
        break;
      }
      pushSprite(40,30);
      currentBitmapIndex = currentBitmapIndex + 1;
      if (currentBitmapIndex >= totalBitmaps) {
        currentBitmapIndex = 0;
      }
    }
}