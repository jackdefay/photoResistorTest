#include <Arduino.h>

void setup() {
    pinMode(A0, INPUT);
    pinMode(12, OUTPUT);
    analogWrite(12, 50);

    Serial.begin(115200);
}

void loop() {
    analogWrite(12, 255);
    Serial.println(analogRead(A0));
    digitalWrite(12, 0);
    delay(1000);
}//heyyyyy
//HEY JACK
//YOOOOOO
