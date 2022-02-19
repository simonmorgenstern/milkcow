# Cowntroller
All arduino related code is located in this subdirectory. 


## Used Parts
- "arduino nano" is a replica from aliexpress you can find [here](https://a.aliexpress.com/_mrx6KLw).
- pixel matrixes are from BTF-Lighting and can be found [here](https://a.aliexpress.com/_mNNZCVA).
- SD card and Arduino SD Card Module are from BerryBase and can be bought [here](https://www.berrybase.de/neu/micro-sd-card-reader-modul-mit-spi-schnittstelle?c=2507) 

## Arduino Config
The used arduino is a so called **arduino nano** which has the **ATMEGA328P** microchip.  
It uses the **Old Bootloader**.

## Pixel Matrixes Config
```cpp
#define PIN 5
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, 1, 2, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);
```

The Matrix is setup was done following the tutorial from Adafruit: [NeoMatrix Library](https://learn.adafruit.com/adafruit-neopixel-uberguide/neomatrix-library).   
TL;DR: First and second param describe the width and height of one matrix. Third and fourth param describe the arangement of the tiles along the x and y axis.   
PIN describes the used GPIO PIN on the arduino which is connected to the matrixes.  
NEO_MATRIX_TOP & NEO_MATRIX_LEFT describe the position of the first LED. 
NEO_MATRIX_COLUMNS & NEO_MATRIX_ZIGZAG describe the arrangement of the leds in the matrix. 

## External Libraries
- Adafruit NeoPixel
- Adafruit NeoMatrix
- Adafruit GFX Library
- PGMSPACE (for accessing flash storage)

```
            /~~~~~\        /~~~~~\
           |    (~'        ~~~)   |
            \    \__________/    /
            /~::::::::         ~\
 /~~~~~~~-_| ::::::::             |_-~~~~~~~\
\ ======= /|  ::A::;      A     :|\ ====== /
 ~-_____-~ |  _----------------_::| ~-____-~
           |/~                  ~\|
           /                      \
          (        ()    ()        )
           `\                   ./'
             ~-_______________-~
                   /~~~~\
                  |      |
                  |      |
                 (________)
                     ()
```