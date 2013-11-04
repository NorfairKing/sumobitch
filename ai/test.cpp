/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

// Import the core Arduino functions.
#include "Arduino.h"

// Import the main config values.
#include "Config.h"

// Import the motor class.
#include "Motor.h"

// Import the sensor class.
#include "Sensor.h"

// Initialize the motors
Motor motor();

// Initialize the sensors
Sensor sensor();

Test::Test()
{
  // Init tests
}

void Test::testEverything()
{
  // Test Everything
  testMotors();
  testSensors();
}

void Test::testMotors()
{
  // Test Left
  // Test Right
}

void Test::testSensors()
{
  // Test short range sensors
  // Test long range sensor
}

