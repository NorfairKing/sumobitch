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
}

void Motor::test()
{
  
  Serial.println("PHASE: LOW");
  digitalWrite(LEFT_PHASE, LOW);
  Serial.print("ENABLE: 0");
  analogWrite(LEFT_ENABLE, 0);
  delay(5000);
  
  Serial.println("done");
  
  Serial.println("PHASE: HIGH");
  digitalWrite(LEFT_PHASE, HIGH);
  Serial.print("ENABLE: 0");
  analogWrite(LEFT_ENABLE, 0);
  delay(5000);
  Serial.println("done");
}

void Motor::leftForward()
{
  digitalWrite(LEFT_PHASE, HIGH);
  analogWrite(LEFT_ENABLE, FORWARD_VALUE);
}

void Motor::leftBack()
{
  digitalWrite(LEFT_ENABLE,HIGH);
  analogWrite(LEFT_PHASE,BACKWARD_VALUE);
}

void Motor::leftStop()
{
  digitalWrite(LEFT_ENABLE,LOW);
  analogWrite(LEFT_PHASE,STOP_VALUE);
}
void Motor::rightForward()
{
  digitalWrite(RIGHT_PHASE,HIGH);
  analogWrite(RIGHT_ENABLE, FORWARD_VALUE);
}

void Motor::rightBack()
{
  digitalWrite(RIGHT_ENABLE,HIGH);
  analogWrite(RIGHT_PHASE,BACKWARD_VALUE);
}

void Motor::rightStop()
{
  digitalWrite(RIGHT_ENABLE,LOW);
  analogWrite(RIGHT_PHASE,STOP_VALUE);
}



