#include "src/blinker.h"
#include "src/buttons.h"
#include "src/led.h"

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

bool isHighBeam = false;

void setup() {
  led.begin();
  pinMode(HIGH_BEAM_PIN, OUTPUT);
  setupButtons();
}

void loop() {
  handleButtons();
  handleBlinker();


  if (centralButton.isClick()) {
    isHighBeam = !isHighBeam;
    digitalWrite(HIGH_BEAM_PIN, isHighBeam);
  }

  if (leftButton.isClick()) {
    toggleBlinker(TURN_LEFT_MODE);
  }

  if (rightButton.isClick()) {
    toggleBlinker(TURN_RIGHT_MODE);
  }
//   for(int i=0; i < LED_AMOUNT; i++) { // For each pixel...
//     led.setPixelColor(i, led.Color(0, 150, 0));
//     led.show();   // Send the updated pixel colors to the hardware.
//     delay(DELAYVAL); // Pause before next pass through loop
//   }

}