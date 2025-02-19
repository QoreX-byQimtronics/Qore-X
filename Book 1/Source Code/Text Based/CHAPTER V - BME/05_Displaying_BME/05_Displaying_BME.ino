#include <QorexLibrary.h>

void setup() {
  initDisplay(3, TFT_CYAN);
  Serial.begin(115200);
  initBME();
  displayMessage("BME 280 Sensor",3,30,10,TFT_NAVY);
}

void loop() {
  displayMessage("Temperature : ",2,0,60,TFT_RED);
  decimalNumber(bmeTemperature(),2,190,60,TFT_RED);
  displayMessage("Humidity : ",2,0,90,TFT_RED);
  decimalNumber(bmeHumidity(),2,150,90,TFT_RED);
  displayMessage("Altitude : ",2,0,120,TFT_RED);
  decimalNumber(bmeAltitude(1013.25),2,150,120,TFT_RED);
  displayMessage("Pressure : ",2,0,150,TFT_RED);
  decimalNumber(bmePressure() / 100.0F,2,150,150,TFT_RED);
  delay(3000);
  fillRectangle(150, 30, 150, 140, 0, TFT_CYAN);
}
