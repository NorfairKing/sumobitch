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
#include "Sensor.h"

// Import the led class.
#include "Led.h"

// Import the test class.
#include "Test.h"

// Initialize the motors
Motor motor;

// Initialize the sensors
Sensor sensor;

// Initialize the led
Led led;

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
  Serial.println("Starting loop");
  
  if (!done){
  test.testEverything();
  }
  done = true;
  delay(1000);
  Serial.println("Loop done");
}

