#ifndef BLINKER_H
#define BLINKER_H

#define FRONT_BLINKER_AMOUNT 3
#define BACK_BLINKER_AMOUNT 3

enum BlinkerMode {
  TURN_LEFT_MODE,
  TURN_RIGHT_MODE,
  EMERGENCY_MODE,
};

void toggleBlinker(BlinkerMode mode);
void disableBlinker();
void handleBlinker();

#endif;