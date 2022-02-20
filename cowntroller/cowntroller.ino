#include "cowntroller.h"

#define PIN 5
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(
    8, 8, 1, 2, PIN,
    NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
    NEO_GRB + NEO_KHZ800);

const static uint32_t COLOR_OFF = matrix.Color(0, 0, 0);
const static uint32_t COLOR_WHITE = matrix.Color(255, 255, 255);
const static unsigned long ONE_MINUTE = 60000;
boolean hasSDCardConnected = false;
File animationFile;

void setup() {
    matrix.begin();
    matrix.setBrightness(25);
    matrix.fillScreen(COLOR_OFF);
    Serial.begin(9600);
    // try to open animation file on SD card
    if (SD.begin(4)) {
        animationFile = SD.open("ANI.txt", FILE_READ);
        if (animationFile) {
            hasSDCardConnected = true;
        }
    }
}

void loop() {
    if (hasSDCardConnected) {
        displayAnimationFromFile();
    } else {
        fillGlass();
        drinkMilk();
    }
}

void displayAnimationFromFile() {
    char colorInHex[6];
    while (animationFile.available()) {
        for (uint16_t y = 0; y < 16; y++) {
            for (uint16_t x = 0; x < 8; x++) {
                for (int i = 0; i < 6; i++) {
                    colorInHex[i] = animationFile.read();
                }
                // Serial.print(&color[0]);
                uint32_t color = getColorFromHexValue(&colorInHex[0]);
                matrix.drawPixel(x, y, color);
                animationFile.read();
            }
        }
        matrix.show();
        animationFile.read();
        delay(100);
        matrix.fillScreen(COLOR_OFF);
    }
    delay(10000);
    animationFile = SD.open("ANI.txt", FILE_READ);
}

/**
 * This function takes a array of 3 hex value pairs
 * @param {Array<char>} hexValueArray
 * @return {color} uint32_t
 */
uint32_t getColorFromHexValue(char hexValueArray[6]) {
    char *ptr;

    char redString[3] = {hexValueArray[0], hexValueArray[1]};
    uint8_t red = (uint8_t)strtol(redString, &ptr, 16);

    char greenString[3] = {hexValueArray[2], hexValueArray[3]};
    uint8_t green = (uint8_t)strtol(greenString, &ptr, 16);

    char blueString[3] = {hexValueArray[4], hexValueArray[5]};
    uint8_t blue = (uint8_t)strtol(blueString, &ptr, 16);

    return matrix.Color(red, green, blue);
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
    for (uint16_t layer = 0; layer < 16; layer++) {
        delay(ONE_MINUTE);
        for (uint16_t x = 0; x < 8; x++) {
            matrix.drawPixel(x, layer, COLOR_OFF);
        }
        matrix.show();
    }
}
