#ifndef COWNTROLLER_H
#define COWNTROLLER_H

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <avr/pgmspace.h>

void fillGlass();
void drinkMilk();

const static char milk_animation[34][128] PROGMEM = {
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},     
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 
   0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 
   0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 
   0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01},
  {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01}
}; 

#endif