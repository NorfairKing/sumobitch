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
  testSensors();
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
  testSensorShortFrontLeft();
  testSensorShortFrontRight();
  testSensorShortBackLeft();
  testSensorShortBackRight();
  testSensorLong();
  Serial.println("Sensor tests done");
}

void Test::testLed()
{
  Serial.println("Starting led tests");
  Serial.println("The led should be on now");
  led.on(); 
  delay(TEST_SHORT);
  Serial.println("The led should be off now");
  led.off(); 
  delay(TEST_SHORT);
  Serial.println("The led should be counting down now");
  led.countdown();
  delay(TEST_SHORT);
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

void Test::testSensorShortFrontLeft()
{
  Serial.println("Starting front left short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the front left short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 100; i++)
  {
    boolean result = sensor.isFrontLeftInRing();
    if (result)
    {
      Serial.println("> The front left sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("> The front left sensor detects that it's outside of the ring.");
    }
    delay(100);
  }
  Serial.println("Front left short-range sensor tests done");
}

void Test::testSensorShortFrontRight()
{
  Serial.println("Starting front right short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the front right short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 100; i++)
  {
    boolean result = sensor.isFrontRightInRing();
    if (result)
    {
      Serial.println("> The front right sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("> The front right sensor detects that it's outside of the ring.");
    }
    delay(100);
  }
  Serial.println("Front right short-range sensor tests done");
}

void Test::testSensorShortBackLeft()
{
  Serial.println("Starting back left short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the back left short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 100; i++)
  {
    boolean result = sensor.isBackLeftInRing();
    if (result)
    {
      Serial.println("> The back left sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("> The back left sensor detects that it's outside of the ring.");
    }
    delay(100);
  }
  Serial.println("Back left short-range sensor tests done");
}

void Test::testSensorShortBackRight()
{
  Serial.println("Starting back right short-range sensor tests");
  Serial.println("For the next ten seconds, you can test the back right short-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 100; i++)
  {
    boolean result = sensor.isBackRightInRing();
    if (result)
    {
      Serial.println("> The back right sensor detects that it's inside of the ring.");
    }
    else
    {
      Serial.println("> The back right sensor detects that it's outside of the ring.");
    }
    delay(100);
  }
  Serial.println("Back right short-range sensor tests done");
}

void Test::testSensorLong()
{
  Serial.println("Starting long-range sensor tests");
  Serial.println("For the next ten seconds, you can test the long-range sensor");
  Serial.println("GO!");
  delay(1000);
  for(int i = 0; i < 100; i++)
  {
    boolean result = sensor.canSeeEnemy();
    if(result)
    {
      Serial.println("> The long-distance sensor sees the enemy.");
    }
    else
    {
      Serial.println("> The long distance sensor doesn't see anything.");
    }
    delay(100);
  }
  Serial.println("Long-range sensor tests done");
}













