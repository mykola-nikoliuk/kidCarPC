#include "buttons.h"

GButton leftButton(LEFT_BUTTON_PIN);
GButton centralButton(CENTRAL_BUTTON_PIN);
GButton rightButton(RIGHT_BUTTON_PIN);

void setupButtons() {
  pinMode(LEFT_BUTTON_PIN, INPUT_PULLUP);
  pinMode(CENTRAL_BUTTON_PIN, INPUT_PULLUP);
  pinMode(RIGHT_BUTTON_PIN, INPUT_PULLUP);

  leftButton.setType(HIGH_PULL);
  leftButton.setDirection(NORM_OPEN);
  leftButton.setTimeout(HOLD_BUTTON_TIMEOUT);

  centralButton.setType(HIGH_PULL);
  centralButton.setDirection(NORM_OPEN);
  centralButton.setTimeout(HOLD_BUTTON_TIMEOUT);

  rightButton.setType(HIGH_PULL);
  rightButton.setDirection(NORM_OPEN);
  rightButton.setTimeout(HOLD_BUTTON_TIMEOUT);
}

void handleButtons() {
  leftButton.tick();
  centralButton.tick();
  rightButton.tick();
}