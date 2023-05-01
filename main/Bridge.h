#ifndef Bridge_h
#define Bridge_h

typedef struct {
  int inputA;
  int inputB;
  int inputC;
  int inputD;
} Bridge;

void setupBridge(Bridge *b);

void moveForward(Bridge *b);
void moveBackward(Bridge *b);

void turnLeft(Bridge *b);
void turnRight(Bridge *b);

void stop(Bridge *b);

#endif