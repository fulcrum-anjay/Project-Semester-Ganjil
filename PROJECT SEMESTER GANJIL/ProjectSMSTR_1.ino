#include <Servo.h>
  
Servo servo1;
int joyX = A0;
int servoVal;
  
void setup() 
{
  servo1.attach(2);
}
  
void loop()
{
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 40);
  servo1.write(servoVal);
}