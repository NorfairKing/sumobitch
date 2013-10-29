/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
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
  digitalWrite(LEFT_ENABLE,HIGH);
  analogWrite(LEFT_PHASE,speed);
}

void Motor::leftBack(int speed)
{
  digitalWrite(LEFT_ENABLE,LOW);
  analogWrite(LEFT_PHASE,speed);
}

void Motor::rightForward(int speed)
{
  digitalWrite(RIGHT_ENABLE,HIGH);
  analogWrite(RIGHT_PHASE,speed);
}

void Motor::rightBack(int speed)
{
  digitalWrite(RIGHT_ENABLE,LOW);
  analogWrite(RIGHT_PHASE,speed);
}

void Motor::motorOn()
{
  digitalWrite(MODE,HIGH);
}

void Motor::motorOff()
{
  digitalWrite(MODE,LOW);
}



