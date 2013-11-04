/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

// Import the core Arduino functions.
#include "Arduino.h"

// Import the motor class.
#include "Motor.h"

// Import the sensor class.
#include "Sensor.h"

// Initialize the motors
//Motor motor;

// Initialize the sensors
//Sensor sensor;

extern Motor motor;
extern Sensor sensor;

#include "Test.h"

Test::Test()
{
}

void Test::testEverything()
{
  Serial.println("Starting tests");
  // Test Everything
  testMotors();
  //testSensors();
  Serial.println("Testing done");
}

void Test::testMotors()
{
  Serial.println("Starting motor tests");

  // Test Left
  //testMotorLeft();
  // Test Right
  //testMotorRight();
  // Test Both
  testMotorTogether();
  Serial.println("Motor tests done");
}

void Test::testMotorLeft()
{
  Serial.println("Starting motor tests left");
  motor.leftForward();
  delay(1000);
  motor.leftBack();
  delay(1000);
  motor.leftStop();
  delay(1000);
  Serial.println("Motor tests left done");
}
void Test::testMotorRight()
{
  Serial.println("Starting motor tests right");
  motor.rightForward();
  delay(1000);
  motor.rightBack();
  delay(1000);
  motor.rightStop();
  delay(1000);
  Serial.println("Motor tests right done");
}
void Test::testMotorTogether()
{
  Serial.println("Starting motor tests together");
  motor.leftForward();
  motor.rightForward();
  delay(1000);
  motor.leftBack();
  motor.rightBack();
  delay(1000);
  motor.leftBack();
  motor.rightForward();
  delay(1000);
  motor.leftForward();
  motor.rightBack();
  delay(1000);
  
  motor.leftStop();
  motor.rightStop();
  Serial.println("Motor tests together done");
}

void Test::testSensors()
{
  // Test short range sensors
  testSensorShortLeft();
  testSensorShortRight();
  // Test long range sensor
  testSensorLong();
}

void Test::testSensorShortLeft()
{

}
void Test::testSensorShortRight()
{

}
void Test::testSensorLong()
{

}









