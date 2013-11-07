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

// Import the Led configurations
#include "Led.h"

extern Motor motor;
extern Sensor sensor;
extern Led led;

#include "Test.h"

Test::Test()
{
  Serial.println("Set up tests.");
}

void Test::testEverything()
{
  Serial.println("Starting tests");
  testMotors();
  //testSensors();
  testLed();
  Serial.println("Testing done");
}

void Test::testMotors()
{
  Serial.println("Starting motor tests");
  testMotorLeft();
  testMotorRight();
  testMotorTogether();
  Serial.println("Motor tests done");
}

void Test::testSensors()
{
  Serial.println("Starting sensor tests");
  //testSensorShortLeft();
  //testSensorShortRight();
  testSensorLong();
  Serial.println("Sensor tests done");
}

void Test::testLed()
{
  Serial.println("Starting led tests");
  Serial.println("The led should be on now");
  led.ledOn(); 
  delay(TEST_SHORT);
  Serial.println("The led should be off now");
  led.ledOff(); 
  delay(TEST_SHORT);
  Serial.println("The led should be counting down now");
  Serial.println("Led tests done");
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
  Serial.println("The left wheel should not be turning now");
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
  Serial.print("Both wheels should have stopped now");
  motor.leftStop();
  motor.rightStop();
  delay(TEST_LONG);
  Serial.println("Motor tests together done");
}

void Test::testSensorShortLeft()
{
  Serial.println("Starting left short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the left short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 1000; i++)
  {
    sensor.sense();
    boolean result = sensor.isLeftInRing();
    if (result)
    {
      Serial.println("The left sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("The left sensor detects that it's outside of the ring.");
    }
    delay(10);
  }
  Serial.println("Left short-range sensor tests done");
}

void Test::testSensorShortRight()
{
  Serial.println("Starting right short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the right short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 1000; i++)
  {
    sensor.sense();
    boolean result = sensor.isLeftInRing();
    if (result)
    {
      Serial.println("The right sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("The right sensor detects that it's outside of the ring.");
    }
    delay(10);
  }
  Serial.println("Right short-range sensor tests done");
}
void Test::testSensorLong()
{
  Serial.println("Starting long-range sensor tests");
  Serial.println("For the next ten seconds, you can test the long-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 1000; i++)
  {
     Serial.print("The long-distance sensor detects a value of ");
     sensor.sense();
     if(sensor.canSeeEnemy())
     {
       Serial.println("The long-distance sensor sees the enemy");
     }
     else
     {
       Serial.println("The long distance sensor doesn't see anything");
     }
     delay(10);
  }
  Serial.println("Long-range sensor tests done");
}












