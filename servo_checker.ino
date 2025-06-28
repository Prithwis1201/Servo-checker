#include <Servo.h>

Servo testServo;

void setup() {
  testServo.attach(9); // Attach servo to pin 9
}

void loop() {
  testServo.write(180); // Move to 180 degrees
  delay(1000);
  testServo.write(0);   // Move to 0 degrees
  delay(1000);
}
