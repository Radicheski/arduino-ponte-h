#include "Bridge.h"
#include <Arduino.h>

void setupBridge(Bridge *b) {
  pinMode(b->inputA, OUTPUT);
  pinMode(b->inputB, OUTPUT);
  pinMode(b->inputC, OUTPUT);
  pinMode(b->inputD, OUTPUT);
}

void stop(Bridge *b) {
  analogWrite(b->pwmA, 0);
  analogWrite(b->pwmB, 0);
}

void moveForward(int *pinA, int *pinB, int *pwm, int speed) {
  digitalWrite(*pinA, HIGH);
  digitalWrite(*pinB, LOW);
  analogWrite(*pwm, speed);
}

void moveBackward(int *pinA, int *pinB, int *pwm, int speed) {
  digitalWrite(*pinA, LOW);
  digitalWrite(*pinB, HIGH);
  analogWrite(*pwm, speed);
}

void moveForward(Bridge *b, int speed) {
  moveForward(b->inputA, b->inputB, b->pwmA, speed);
  moveForward(b->inputC, b->inputD, b->pwmB, speed);
}

void moveBackward(Bridge *b, int speed) {
  moveBackward(b->inputA, b->inputB, b->pwmA, speed);
  moveBackward(b->inputC, b->inputD, b->pwmB, speed);
}

void turnLeft(Bridge *b, int speed) {
  moveBackward(b->inputA, b->inputB, b->pwmA, speed);
  moveForward(b->inputC, b->inputD, b->pwmB, speed);
}

void turnRight(Bridge *b, int speed) {
  moveForward(b->inputA, b->inputB, b->pwmA, speed);
  moveBackward(b->inputC, b->inputD, b->pwmB, speed);
}