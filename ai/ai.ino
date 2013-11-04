/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

// Import the main config values.
#include "Config.h"

// Import the motor class.
#include "Motor.h"

// Import the sensor class.
//#include "Sensor.h"

// Import the test class.
#include "Test.h"

// Initialize the motors
Motor motor;

// Initialize the sensors
//Sensor sensor;

// Initialize the tests
Test test;

boolean done = false;

// Set up the entire robot.
void setup()
{
  Serial.println("Starting setup");
  
  Serial.begin(9600);
    
  Serial.println("Setup done");
}

// Loop the main program.
void loop()
{
  Serial.println("Looping");
  
  if (!done){
  test.testEverything();
  }
  done = true;
  delay(1000);
}

