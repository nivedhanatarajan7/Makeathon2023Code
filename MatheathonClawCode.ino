#include <Servo.h>

//Name of the left claw object
Servo leftClawPiece; 

//the inital degrees of the left claw
int initialDegrees = 180;
//the degrees at which the claw is completely closed
int finalDegrees = 90;
//the degrees between each movement of the claw
int stepDegrees = -1;
//the miliseconds between each movement of the claw
int delaySeconds = 10;

void setup() {
  //the left claw if attached to the 4th pin in the Arduino board
  leftClawPiece.attach(4);
  //the left claw is set to 180 degrees
  leftClawPiece.write(initialDegrees);
}

void loop() {
  //the left claw will move until it reaches the final degrees by moving by the stepDegrees at the speed of delay second
  if (leftClawPiece.read() > finalDegrees) {
    leftClawPiece.write(leftClawPiece.read() + stepDegrees);
    delay(delaySeconds);
  } else {
    leftClawPiece.write(finalDegrees);
  }
}
