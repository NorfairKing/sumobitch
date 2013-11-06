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

// Import the Test configurations
#include "TestConfig.h"

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
  testSensors();
  Serial.println("Testing done");
}

void Test::testMotors()
{
  Serial.println("Starting motor tests");
  // Test Left
  testMotorLeft();
  // Test Right
  testMotorRight();
  // Test Both
  testMotorTogether();
  Serial.println("Motor tests done");
}

void Test::testMotorLeft()
{
  Serial.println("Starting motor tests left");
  Serial.println("The left wheel should be turning forward now");
  motor.leftForward();
  delay(TEST_SHORT);
  Serial.println("The left wheel should be turning backward now");
  motor.leftBack();
  delay(TEST_SHORT);
  Serial.println("The right wheel should not be turning now");
  motor.leftStop();
  delay(TEST_SHORT);
  Serial.println("Motor tests left done");
}
void Test::testMotorRight()
{
  Serial.println("Starting motor tests right");
  Serial.println("The right wheel should be turning forward now");
  motor.rightForward();
  delay(TEST_SHORT);
  Serial.println("The right wheel should be turning backward now");
  motor.rightBack();
  delay(TEST_SHORT);
  Serial.println("The right wheel should not be turning now");
  motor.rightStop();
  delay(TEST_SHORT);
  Serial.println("Motor tests right done");
}
void Test::testMotorTogether()
{
  Serial.println("Starting motor tests together");
  Serial.println("Both wheels should be turning forward now");
  motor.leftForward();
  motor.rightForward();
  delay(TEST_LONG);
  Serial.println("Both wheels should be turning backward now");
  motor.leftBack();
  motor.rightBack();
  delay(TEST_LONG);
  Serial.println("The left wheel should be turning backward while the right wheel is turning forward now");
  motor.leftBack();
  motor.rightForward();
  delay(TEST_LONG);
  Serial.println("The left wheel should be turning forward while the right wheel is turning backward now");
  motor.leftForward();
  motor.rightBack();
  delay(TEST_LONG);
  Serial.print("Both wheels should have stopped now")
    motor.leftStop();
  motor.rightStop();
  delay(TEST_LONG);
  Serial.println("Motor tests together done");
}

void Test::testSensors()
{
  Serial.println("Starting sensor tests");
  // Test short range sensors
  testSensorShortLeft();
  testSensorShortRight();
  // Test long range sensor
  testSensorLong();
  Serial.println("Sensor tests done");
}

void Test::testSensorShortLeft()
{
  Serial.println("Starting left short-range sensor tests");

  Serial.println("Left short-range sensor tests done");
}
void Test::testSensorShortRight()
{
  Serial.println("Starting right short-range sensor tests");

  Serial.println("Right short-range sensor tests done");
}
void Test::testSensorLong()
{
  Serial.println("Starting long-range sensor tests");

  Serial.println("Long-range sensor tests done");
}










