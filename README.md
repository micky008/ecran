Projet ecran de base sur ESP32 devkit

# Type d'ecran

2,4 pouces ecran tft en driver STL7735 320x240  
https://fr.aliexpress.com/item/1005006109679854.html

lib: bodmer/TFT_eSPI@^2.5.43

j'utilise le setup 43 (que j'ai modifié)  
fichier entier:
```C

#define USER_SETUP_ID 43

#define ST7735_DRIVER

#define TFT_WIDTH  320
#define TFT_HEIGHT 240

// For ST7735, ST7789 and ILI9341 ONLY, define the colour order IF the blue and red are swapped on your display
// Try ONE option at a time to find the correct colour order for your display

#define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
//#define TFT_RGB_ORDER TFT_BGR  // Colour order Blue-Green-Red

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS    15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)
//#define TFT_RST  -1  // Set TFT_RST to -1 if display RESET is connected to ESP32 board RST


#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3

```

il y a un bug, il faut repreciser encore dans l'init le 320x240 => TFT_eSPI tft = TFT_eSPI(320, 240);

# brochage des PINs:
```
LED : (sur le ) 3,3v
DC : 2
CS : 15
RST (reset) : 4
SDA ( MOSI) : 23
SCL ( SCLK) : 18
MISO : 19
GND: bha le gronund...
VCC : 3.3V
```
