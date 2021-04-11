#ifndef LED_H
#define LED_H

#include <Adafruit_NeoPixel.h>

extern Adafruit_NeoPixel led;

extern uint32_t noneColor;
extern uint32_t yellowColor;
extern uint32_t whiteColor;
extern uint32_t redColor;
extern uint32_t blueColor;
extern uint32_t greenColor;

void setPixelLine(int start, int amount, uint32_t color);

#endif