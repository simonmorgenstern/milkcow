#include "cowntroller.h"

#define PIN 5
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(
    8, 8, 1, 2, PIN, NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG, NEO_GRB + NEO_KHZ800);

const static uint32_t COLOR_OFF = matrix.Color(0, 0, 0);
const static uint32_t COLOR_WHITE = matrix.Color(255, 255, 255);
const static unsigned long ONE_MINUTE = 60000;

void setup() {
    matrix.begin();
    matrix.setBrightness(25);
}

void loop() { 
  fillGlass();
  drinkMilk();
}

/** 
 * This function displays the fill glass animation onto the LED matrix
 * It reads from the milk_animation array defined in cowntroller.h header file 
 */
void fillGlass() {
  for (int step = 0; step < 34; step++) {
    matrix.fillScreen(COLOR_OFF);
    for (uint16_t y = 0; y < 16; y++) {
      for (uint16_t x = 0; x < 8; x++) {
        int stelle = y * 8 + x;
        char on = pgm_read_byte(&milk_animation[step][stelle]);
        if (on == 0x01) {
          matrix.drawPixel(x, y, COLOR_WHITE);
        } 
      }
    }
      matrix.show();
      delay(100);
  }  
}

/**
 * This function turns off one layer of LED's and waits for a minute 
 */
void drinkMilk() {
  for(uint16_t layer = 0; layer < 16; layer++) {
    delay(ONE_MINUTE);
    for (uint16_t x = 0; x < 8; x++) {
      matrix.drawPixel(x, layer, COLOR_OFF);
    }
    matrix.show();
  }
}
