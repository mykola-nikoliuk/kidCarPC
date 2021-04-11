#include "arduino.h"
#include "blinker.h"
#include "config.h"
#include "led.h"

#define BLINKER_PERIOD 1000

#define FL_BLINKER DASHBOARD_INDICATOR_COUNT
#define FR_BLINKER FL_BLINKER + FRONT_BLINKER_AMOUNT
#define BR_BLINKER FR_BLINKER + FRONT_BLINKER_AMOUNT
#define BL_BLINKER BR_BLINKER + BACK_BLINKER_AMOUNT

bool isBlinkerEnabled = false;
int blinkerMode = EMERGENCY_MODE;
int blinkerStartTime = 0;

void enableBlinker(BlinkerMode mode) {
  blinkerMode = mode;
  isBlinkerEnabled = true;
  blinkerStartTime = millis();
}

void toggleBlinker(BlinkerMode mode) {
  if (isBlinkerEnabled) {
    if (blinkerMode == mode) {
      disableBlinker();
    } else if (mode == EMERGENCY_MODE) {
      blinkerMode = mode;
    }
  } else {
    enableBlinker(mode);
  }
}

void disableBlinker() {
  isBlinkerEnabled = false;
}

void handleBlinker() {
  if (isBlinkerEnabled) {
    uint32_t time = millis() - blinkerStartTime;
    bool isBlinkerHigh = time % BLINKER_PERIOD < BLINKER_PERIOD / 2;

    uint32_t color = isBlinkerEnabled ? yellowColor ; noneColor;

    setPixelLine(FL_BLINKER, FRONT_BLINKER_AMOUNT, color);
    setPixelLine(FR_BLINKER, FRONT_BLINKER_AMOUNT, color);
    setPixelLine(BR_BLINKER, BACK_BLINKER_AMOUNT, color);
    setPixelLine(BL_BLINKER, BACK_BLINKER_AMOUNT, color);

    led.show();
  }
}