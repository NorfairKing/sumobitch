#include "Arduino.h"
#include "Config.h"

void setup()
{
  /* 
    Initialize all pins. 
  */
  
  // Initialize motor pins
  pinMode(MOTOR_LEFT_ENABLE, OUTPUT);
  pinMode(MOTOR_LEFT_PHASE, OUTPUT);
  pinMode(MOTOR_RIGHT_ENABLE, OUTPUT);
  pinMode(MOTOR_RIGHT_PHASE, OUTPUT);
  pinMode(MOTOR_MODE, OUTPUT);
}

void loop()
{
  delay(3000);
}
