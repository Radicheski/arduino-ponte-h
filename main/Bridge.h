#ifndef Bridge_h
#define Bridge_h

typedef struct {
  int inputA;
  int inputB;
  int pwmA;
  int inputC;
  int inputD;
  int pwmB;
} Bridge;

void setupBridge(Bridge *b);

void moveForward(Bridge *b, int speed);
void moveBackward(Bridge *b, int speed);

void turnLeft(Bridge *b, int speed);
void turnRight(Bridge *b, int speed);

void stop(Bridge *b);

#endif