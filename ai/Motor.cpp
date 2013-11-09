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
/*
void Motor::test()
{
  Serial.println("Starting motor config test");
  Serial.println("Testing Left");
  Serial.println("PHASE: LOW");
  digitalWrite(LEFT_PHASE, LOW);
  Serial.println("ENABLE: 0");
  analogWrite(LEFT_ENABLE, 0);
  delay(5000);

  Serial.println("PHASE: LOW");
  digitalWrite(LEFT_PHASE, LOW);
  Serial.println("ENABLE: 255");
  analogWrite(LEFT_ENABLE, 255);
  delay(5000);
  
  Serial.println("PHASE: HIGH");
  digitalWrite(LEFT_PHASE, HIGH);
  Serial.println("ENABLE: 0");
  analogWrite(LEFT_ENABLE, 0);
  delay(5000);
  
  Serial.println("PHASE: HIGH");
  digitalWrite(LEFT_PHASE, HIGH);
  Serial.println("ENABLE: 255");
  analogWrite(LEFT_ENABLE, 255);
  delay(5000);
  
  Serial.println("Testing Right");
  Serial.println("PHASE: LOW");
  digitalWrite(RIGHT_PHASE, LOW);
  Serial.println("ENABLE: 0");
  analogWrite(RIGHT_ENABLE, 0);
  delay(5000);

  Serial.println("PHASE: LOW");
  digitalWrite(RIGHT_PHASE, LOW);
  Serial.println("ENABLE: 255");
  analogWrite(RIGHT_ENABLE, 255);
  delay(5000);
  
  Serial.println("PHASE: HIGH");
  digitalWrite(RIGHT_PHASE, HIGH);
  Serial.println("ENABLE: 0");
  analogWrite(RIGHT_ENABLE, 0);
  delay(5000);
  
  Serial.println("PHASE: HIGH");
  digitalWrite(RIGHT_PHASE, HIGH);
  Serial.println("ENABLE: 255");
  analogWrite(RIGHT_ENABLE, 255);
  delay(5000);
  
  Serial.println("done");
}
*/

void Motor::leftForward()
{
  digitalWrite(LEFT_PHASE, LEFT_FORWARD_PHASE);
  analogWrite(LEFT_ENABLE, LEFT_FORWARD_VALUE);
}

void Motor::leftBack()
{
  digitalWrite(LEFT_PHASE, LEFT_BACKWARD_PHASE);
  analogWrite(LEFT_ENABLE, LEFT_BACKWARD_VALUE);
}

void Motor::leftStop()
{
  digitalWrite(LEFT_PHASE, LEFT_STOP_PHASE);
  analogWrite(LEFT_ENABLE, LEFT_STOP_VALUE);
}
void Motor::rightForward()
{
  digitalWrite(RIGHT_PHASE, RIGHT_FORWARD_PHASE);
  analogWrite(RIGHT_ENABLE, RIGHT_FORWARD_VALUE);
}

void Motor::rightBack()
{
  digitalWrite(RIGHT_PHASE, RIGHT_BACKWARD_PHASE);
  analogWrite(RIGHT_ENABLE, RIGHT_BACKWARD_VALUE);
}

void Motor::rightStop()
{
  digitalWrite(RIGHT_PHASE, RIGHT_STOP_PHASE);
  analogWrite(RIGHT_ENABLE, RIGHT_STOP_VALUE);
}




