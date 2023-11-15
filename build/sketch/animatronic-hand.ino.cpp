#include <Arduino.h>
#line 1 "/Users/ladidisu/robotics/animatronic-hand/animatronic-hand.ino"
#include <Servo.h>

// Define the Servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

// Define the analog input pins for the potentiometers
int pot1 = 3;
int pot2 = 4;
int pot3 = 5;
int pot4 = 6;
int pot5 = 7;

// Variables to store the potentiometer values
int valPot1;
int valPot2;
int valPot3;
int valPot4;
int valPot5;

#line 24 "/Users/ladidisu/robotics/animatronic-hand/animatronic-hand.ino"
void setup();
#line 33 "/Users/ladidisu/robotics/animatronic-hand/animatronic-hand.ino"
void loop();
#line 24 "/Users/ladidisu/robotics/animatronic-hand/animatronic-hand.ino"
void setup() {
  // Attach each servo to its corresponding analog input pin
  servo1.attach(A0);
  servo2.attach(A1);
  servo3.attach(A2);
  servo4.attach(A3);
  servo5.attach(A4);
}

void loop() {
  // Read the value from each potentiometer and map it to a servo position
  valPot1 = analogRead(pot1);
  valPot1 = map(valPot1, 0, 1023, 180, 0);
  servo1.write(valPot1);

  valPot2 = analogRead(pot2);
  valPot2 = map(valPot2, 0, 1023, 180, 0);
  servo2.write(valPot2);

  valPot3 = analogRead(pot3);
  valPot3 = map(valPot3, 0, 1023, 180, 0);
  servo3.write(valPot3);

  valPot4 = analogRead(pot4);
  valPot4 = map(valPot4, 0, 1023, 180, 0);
  servo4.write(valPot4);

  valPot5 = analogRead(pot5);
  valPot5 = map(valPot5, 0, 1023, 180, 0);
  servo5.write(valPot5);

  delay(15); // Short delay to stabilize the servo positions
}

