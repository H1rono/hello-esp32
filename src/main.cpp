#include <Arduino.h>

const int ledPin = 2;
bool flag = false;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, flag);
    delay(500);
    flag = !flag;
}