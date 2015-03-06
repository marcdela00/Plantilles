#include <Servo.h> 
 
Servo servo1;  // create servo object to control a servo 
 
int potpin = 0;  // pin analogic on rebra la informació
int val;    // variable a llegir del pin analogic 
int pos1 = 180;
int pos2 = 90;
int pos3 = 0;



 void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 


void loop()

if
