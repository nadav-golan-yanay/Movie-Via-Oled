#include <SPI.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include "bitmap.h"

#define TFT_CS    3
#define TFT_DC    17
#define TFT_SCLK  14
#define TFT_MOSI  13
#define TFT_RST   15

Adafruit_ST7789 *_tft = NULL;


//Adafruit_ST7789 tft = Adafruit_ST7789(3, 17, 15); //cs, dc, res

void setup() {
  Serial.begin(115200);

  SPIClass *spi = new SPIClass(HSPI);
  spi->begin(TFT_SCLK, -1, TFT_MOSI, TFT_CS);
  _tft = new Adafruit_ST7789(spi, TFT_CS, TFT_DC, TFT_RST);
  // 80MHz should work, but you may need lower speeds
  _tft->setSPISpeed(80000000);
  // this will vary depending on your display
  _tft->init(240, 240, SPI_MODE2);
  _tft->fillScreen(0x0002);
  _tft->setRotation(2);     //to 90 deg
  _tft->setTextSize(2); //1 is default 6x8, 2 is 12x16, 3 is 18x24
  Serial.println("Finish SetUp");
}

void loop() {
  int D = 0;

  _tft->drawRGBBitmap(0, 0, F1, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F2, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F3, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F4, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F5, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F6, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F7, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F8, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F9, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F10, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F11, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F12, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F13, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F14, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F15, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F16, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F17, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F18, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F19, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F20, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F21, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F22, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F23, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F24, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F25, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F26, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F27, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F28, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F29, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F30, 120, 120);
  delay(D);

  _tft->drawRGBBitmap(0, 0, F30, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F29, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F28, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F27, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F26, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F25, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F24, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F23, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F22, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F21, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F20, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F19, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F18, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F17, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F15, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F16, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F14, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F13, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F12, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F11, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F10, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F9, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F8, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F7, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F6, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F5, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F4, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F3, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F2, 120, 120);
  delay(D);
  _tft->drawRGBBitmap(0, 0, F1, 120, 120);
  delay(D);
}
