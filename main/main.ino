#include "Bridge.h"

Bridge ponte;

#define DELAY 1000
  
void setup() {
  ponte = {4, 5, 6, 7};
  setupBridge(&ponte);
}
  
void loop() {
  moveForward(&ponte, 255);
  delay(DELAY);

  turnLeft(&ponte, 255);
  delay(DELAY);

  turnRight(&ponte, 255);
  delay(DELAY);

  moveBackward(&ponte, 255);
  delay(DELAY);

  stop(&ponte);
  delay(DELAY);
}

