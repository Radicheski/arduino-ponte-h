#include "Bridge.h"

Bridge ponte;

#define DELAY 1000
  
void setup() {
  ponte = {4, 5, 6, 7};
  setupBridge(&ponte);
}
  
void loop() {
  moveForward(&ponte);
  delay(DELAY);

  turnLeft(&ponte);
  delay(DELAY);

  turnRight(&ponte);
  delay(DELAY);

  moveBackward(&ponte);
  delay(DELAY);

  stop(&ponte);
  delay(DELAY);
}

