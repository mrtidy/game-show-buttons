#include <Arduino.h>
#include <Keyboard.h>

int leftPin = 8;
int rightPin = 9;

void setup() {
  pinMode(leftPin, INPUT);
  digitalWrite(leftPin, HIGH);
  pinMode(rightPin, INPUT);
  digitalWrite(rightPin, HIGH);
}

void loop() {
  if(digitalRead(leftPin) == LOW) {
    Keyboard.write(KEY_LEFT_ARROW);
    delay(100);
  }
  if(digitalRead(rightPin) == LOW) {
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(100);
  }
}