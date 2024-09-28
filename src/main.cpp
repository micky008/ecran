#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(320, 240);

void setup() {
  tft.init();
//  Serial.begin(57600); // For debug
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_YELLOW);
  //Pour les polices il y a 4 tailles => 9 12 18 24.
  //pour FreeSans12pt7b ca fais environ 29char la ligne  en x
  //pour y ca fais environ 20px.
  tft.setFreeFont(&FreeSans12pt7b);
}

int i = 0;
void loop() {
  int16_t x = tft.drawString("target 1, distance: ", 0, 0);
  tft.fillRect(x + 5, 0, (320 - (x + 5)), 20, TFT_BLACK);
  //tft.drawRect(x + 5, 0, (320 - (x + 5)), 20, TFT_CYAN);
  tft.drawNumber(i, x + 5, 0);
  x = tft.drawString("target 2, distance: ", 0, 25);
  tft.fillRect(x + 5, 25, (320 - (x + 5)), 20, TFT_BLACK);
  //tft.drawRect(x + 5, 25, (320 - (x + 5)), 20, TFT_CYAN);
  tft.drawNumber(i, x + 5, 25);
  delay(1000);
  i++;
}

