#include <ESP32Servo.h>

Servo servo;

const int servoPin = 12;

void setup() {

  servo.attach(servoPin);

}

void loop() {

  // Rotate from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    servo.write(angle);
  
  }

  // Rotate back from 180° to 0°
  for (int angle = 180; angle >= 0; angle--) {
    servo.write(angle);
    
  }

}