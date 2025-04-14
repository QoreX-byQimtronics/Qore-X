#include "qino.h"
#include "rexa.h"
#include "qino2.h"

#include <QorexLibrary.h>

#define background 0xc718
#define brown 0xcc6f
#define text 0xe759
#define background1 0xac58
#define brown1 0x7356
#define text1 0xff3c


boolean isDisplay = true;

void Qino1() {
  fillRectangle(10, 10, 300, 30, 0, brown);
  displayMessage("Student Card",3,45,15,text);
  drawRectangle(10, 50, 105, 130, 0, brown);
  fillRectangle(135, 50, 175, 130, 0, brown);
  fillRectangle(10, 200, 300, 30, 0, brown);
  displayImage((uint8_t *)qino, sizeof(qino),10,50);
  setFontStyle(2);
  displayMessage("Qino",1,150,70,text);
  displayMessage("27 May 2004",1,150,100,text);
  displayMessage("Bandung City",1,150,130,text);
  displayMessage("West Java",1,150,160,text);
  setFontStyle(0);
  displayMessage("Believe in Yourself",2,40,205,text);
}

void Rexa() {
  fillRectangle(10, 10, 300, 30, 0, brown1);
  displayMessage("Student Card",3,45,15,text);
  drawRectangle(10, 50, 105, 130, 0, brown1);
  fillRectangle(135, 50, 175, 130, 0, brown1);
  fillRectangle(10, 200, 300, 30, 0, brown1);
  displayImage((uint8_t *)rexa, sizeof(rexa),10,50);
  setFontStyle(2);
  displayMessage("Rexa",1,150,70,text1);
  displayMessage("27 May 2004",1,150,100,text1);
  displayMessage("Bandung City",1,150,130,text1);
  displayMessage("West Java",1,150,160,text1);
  setFontStyle(0);
  displayMessage("Believe in Yourself",2,40,205,text);
}

void Qino2() {
  fillRectangle(10, 10, 300, 30, 0, brown);
  displayMessage("Student Card",3,45,15,text);
  drawRectangle(10, 50, 105, 130, 0, brown);
  fillRectangle(135, 50, 175, 130, 0, brown);
  fillRectangle(10, 200, 300, 30, 0, brown);
  displayImage((uint8_t *)qino2, sizeof(qino2),10,50);
  setFontStyle(2);
  displayMessage("Qino",1,150,70,text);
  displayMessage("27 May 2004",1,150,100,text);
  displayMessage("Bandung City",1,150,130,text);
  displayMessage("West Java",1,150,160,text);
  setFontStyle(0);
  displayMessage("Believe in Yourself",2,40,205,text);
}

void setup() {
  initializeTouch();
  Serial.begin(115200);
  initDisplay(3, background);
  analogWrite(13,0);
  analogWrite(13,255);
  Qino1();
}

void loop() {
    readTouch();
    if (touched) {
      isDisplay = !isDisplay;
      if (isDisplay) {
        fillScreen(background1);
        Rexa();
      } else {
        fillScreen(background);
        Qino2();
      }
    }
}
