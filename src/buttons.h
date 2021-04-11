#ifndef BUTTONS_H
#define BUTTONS_H

#include <GyverButton.h>
#include "config.h"

extern GButton leftButton;
extern GButton centralButton;
extern GButton rightButton;

void setupButtons();
void handleButtons();

#endif;