#include <Arduino.h>
#include <TFT_eSPI.h>

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

TFT_eSPI tft = TFT_eSPI(320, 240);

void setup() {
  tft.init();
  Serial.begin(57600); // For debug
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_YELLOW);
  tft.setFreeFont(&FreeSans12pt7b); //FreeSans12pt7b 29char / ligne  taille: 9 12 18 24
  tft.drawString("ta mere suces des bites en", 0, 0);
  tft.setFreeFont(&FreeSansBold18pt7b);
  tft.setTextColor(TFT_RED);
  tft.drawString("enfer", 0, 32);
}

void loop() {
}

