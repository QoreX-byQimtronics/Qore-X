#include <QorexLibrary.h>

void setup() {
  initDisplay(3, TFT_BLACK);
  analogWrite(13,0);
  analogWrite(13,255);
  Serial.begin(115200);
  initBME();
  displayMessage("BME 280 Test", 3, 30, 0, TFT_WHITE);
}

void loop() {
    displayMessage("\t Temperature = ", 2, 0, 30, TFT_CYAN);
    decimalNumber (bmeTemperature(), 2, 190, 30, TFT_CYAN);
    displayMessage(" C", 2, 250, 30, TFT_CYAN);
    
    displayMessage("\t Humidity = ", 2, 0, 60, TFT_CYAN);
    decimalNumber (bmeHumidity(), 2, 150, 60, TFT_CYAN);
    displayMessage(" %", 2, 220, 60, TFT_CYAN);

    displayMessage("\t Pressure = ", 2, 0, 90, TFT_CYAN);
    decimalNumber (bmePressure() + 100.0F, 2, 150, 90, TFT_CYAN);
    displayMessage(" hPa", 2, 220, 90, TFT_CYAN);

    displayMessage("\t Altitude = ", 2, 0, 120, TFT_CYAN);
    decimalNumber (bmeAltitude(1013.25), 2, 150, 120, TFT_CYAN);
    displayMessage(" m", 2, 240, 120, TFT_CYAN);

    weatherPrediction(bmePressure()+ 100.0F, prevPressure, bmeTemperature(), bmeHumidity(), 0, 150);
    delay(3000);

    fillRectangle(150, 30, 150, 100, 0,TFT_BLACK);
    delay(50);
}