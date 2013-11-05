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
}

void Motor::leftForward()
{
  int fw = 0;
  digitalWrite(LEFT_ENABLE,HIGH);
  analogWrite(LEFT_PHASE,fw);
}

void Motor::leftBack()
{
  int back = 255;
  digitalWrite(LEFT_ENABLE,HIGH);
  analogWrite(LEFT_PHASE,back);
}

void Motor::leftStop()
{
  int stp = 128;
  digitalWrite(LEFT_ENABLE,LOW);
  analogWrite(LEFT_PHASE,stp);
}
void Motor::rightForward()
{
  int fw = 0;
  digitalWrite(RIGHT_ENABLE,HIGH);
  analogWrite(RIGHT_PHASE,fw);
}

void Motor::rightBack()
{
  int back = 255;
  digitalWrite(RIGHT_ENABLE,HIGH);
  analogWrite(RIGHT_PHASE,back);
}

void Motor::rightStop()
{
  int stp = 128;
  digitalWrite(RIGHT_ENABLE,LOW);
  analogWrite(RIGHT_PHASE,stp);
}



