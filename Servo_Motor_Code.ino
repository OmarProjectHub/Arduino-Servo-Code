// Project : Controlling Servo Motor using Arduino Uno R3. 
// Controlling Servo
// Project done by Omar's Project Hub 
// Created by Omar Pervez 
// Credits : Cornel Amariei for Packt publishing , Instructables.com
// Have Fun!!

// Include the Servo library
#include <Servo.h> 

// Declare the Servo pin
int servoPin = 3;
// Create a servo object
Servo Servo1;

void setup() {
  // We need to attach the servo to the used pin number
  Servo1.attach(servoPin);
}

void loop(){
  // Make servo go to 0 degrees
  Servo1.write(0);
  delay(1000);
  // Make servo go to 90 degrees
  Servo1.write(90);
  delay(1000);
  // Make servo go to 180 degrees
  Servo1.write(180);
  delay(1000);
}
// Enjoy!!
// Credits: Cornel Amariei
// Made : Omar Pervez , Omar's Project Hub , Youtube.
