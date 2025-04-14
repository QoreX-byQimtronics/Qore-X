#include <QorexLibrary.h>

void setup() {
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
  Serial.begin(115200);
  initBME();
  displayMessage("Weather Station", 3, 30, 0, TFT_NAVY);
}

void loop() {
    displayMessage("\t Temperature = ", 2, 0, 30, TFT_DARKCYAN);
    decimalNumber(bmeTemperature(), 2, 190, 30, TFT_DARKCYAN);
    displayMessage(" C", 2, 250, 30, TFT_DARKCYAN);
    
    displayMessage("\t Humidity = ", 2, 0, 60, TFT_DARKCYAN);
    decimalNumber(bmeHumidity(), 2, 150, 60, TFT_DARKCYAN);
    displayMessage(" %", 2, 220, 60, TFT_DARKCYAN);

    displayMessage("\t Pressure = ", 2, 0, 90, TFT_DARKCYAN);
    decimalNumber(bmePressure() + 100.0F, 2, 150, 90, TFT_DARKCYAN);
    displayMessage(" hPa", 2, 240, 90, TFT_DARKCYAN);

    displayMessage("\t Altitude = ", 2, 0, 120, TFT_DARKCYAN);
    decimalNumber(bmeAltitude(1013.25), 2, 150, 120, TFT_DARKCYAN);
    displayMessage(" m", 2, 220, 120, TFT_DARKCYAN);
    delay(3000);
    fillRectangle(150, 30, 150, 110, 0,TFT_BLACK);
}