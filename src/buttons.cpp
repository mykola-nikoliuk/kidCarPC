#include "buttons.h"

GButton leftButton(LEFT_BUTTON_PIN);
GButton centralButton(CENTRAL_BUTTON_PIN);
GButton rightButton(RIGHT_BUTTON_PIN);

void setupButtons() {
  leftButton.setType(HIGH_PULL);
  leftButton.setDirection(NORM_OPEN);

  centralButton.setType(HIGH_PULL);
  centralButton.setDirection(NORM_OPEN);

  rightButton.setType(HIGH_PULL);
  rightButton.setDirection(NORM_OPEN);
}

void handleButtons() {
  leftButton.tick();
  centralButton.tick();
  rightButton.tick();
}