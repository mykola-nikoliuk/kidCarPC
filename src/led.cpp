#include "led.h"
#include "config.h"

Adafruit_NeoPixel led(LED_AMOUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

uint32_t noneColor = led.Color(0, 0, 0);
uint32_t yellowColor = led.Color(255, 255, 0);
uint32_t whiteColor = led.Color(255, 255, 255);
uint32_t redColor = led.Color(255, 0, 0);
uint32_t blueColor = led.Color(0, 0, 255);
uint32_t greenColor = led.Color(0, 255, 0);

void setPixelLine(int start, int amount, uint32_t color) {
  for (int i = start; i < start + amount; i++) {
    led.setPixelColor(i, color);
  }
}