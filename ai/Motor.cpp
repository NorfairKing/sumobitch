/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "MotorConfig.h"
#include "Motor.h"



Motor::Motor()
{
  pinMode(LEFT_ENABLE, OUTPUT);
  pinMode(LEFT_PHASE, OUTPUT);
  pinMode(RIGHT_ENABLE, OUTPUT);
  pinMode(RIGHT_PHASE, OUTPUT);
  pinMode(MODE, OUTPUT);
  
  motorOn();
}

void Motor::leftForward(int speed)
{
 
}

void Motor::leftBack(int speed)
{

}

void Motor::rightForward(int speed)
{
 
}

void Motor::rightBack(int speed)
{

}

void Motor::motorOn()
{
   digitalWrite(MODE,HIGH);
}

void Motor::motorOff()
{
   digitalWrite(MODE,LOW);
}
