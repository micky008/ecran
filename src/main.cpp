#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(320, 240);

void setup() {
  tft.init();
  Serial.begin(57600); // For debug
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_YELLOW);
  // tft.setFreeFont(&FreeSans12pt7b); //FreeSans12pt7b 29char / ligne  taille: 9 12 18 24
  // tft.drawString("ta mere suces des bites en", 0, 0);
  // tft.setFreeFont(&FreeSansBold18pt7b);
  // tft.setTextColor(TFT_RED);
  // tft.drawString("enfer", 0, 32);
  tft.setFreeFont(&FreeSans12pt7b);
}

int i = 0;
void loop() {
  tft.drawString("target X, distance: ", 0, 0);
  tft.fillRect (220, 0, 100, 20, TFT_BLACK);
  tft.drawNumber(i, 220, 0);
  delay(2000);
  i++;
}

