#include "Bridge.h"
#include <Arduino.h>

void setupBridge(Bridge *b) {
  pinMode(b->inputA, OUTPUT);
  pinMode(b->inputB, OUTPUT);
  pinMode(b->inputC, OUTPUT);
  pinMode(b->inputD, OUTPUT);
}

void moveForward(Bridge *b) {
  digitalWrite(b->inputA, HIGH);
  digitalWrite(b->inputB, LOW);
  digitalWrite(b->inputC, HIGH);
  digitalWrite(b->inputD, LOW);
}

void moveBackward(Bridge *b) {
  digitalWrite(b->inputA, LOW);
  digitalWrite(b->inputB, HIGH);
  digitalWrite(b->inputC, LOW);
  digitalWrite(b->inputD, HIGH);
}

void turnLeft(Bridge *b) {
  digitalWrite(b->inputA, LOW);
  digitalWrite(b->inputB, HIGH);
  digitalWrite(b->inputC, HIGH);
  digitalWrite(b->inputD, LOW);
}

void turnRight(Bridge *b) {
  digitalWrite(b->inputA, HIGH);
  digitalWrite(b->inputB, LOW);
  digitalWrite(b->inputC, LOW);
  digitalWrite(b->inputD, HIGH);
}

void stop(Bridge *b) {
  digitalWrite(b->inputA, HIGH);
  digitalWrite(b->inputB, HIGH);
  digitalWrite(b->inputC, HIGH);
  digitalWrite(b->inputD, HIGH);
}