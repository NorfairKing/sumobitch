/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */


#include "Config.h"// Import the main config values.
#include "Motor.h"// Import the motor class.
#include "Sensor.h"// Import the sensor class.
#include "Led.h"// Import the led class.

#include "Test.h"// Import the test class.

Motor motor;//Initialize the motors
Sensor sensor;// Initialize the sensors
Led led;// Initialize the led

Test test;// Initialize the tests

boolean done;
void setup() {
  Serial.begin(9600);
  if(TESTING)
  {
    Serial.println("Set up serial");
  }

  done = false;
}

void loop() {
  if (TESTING)
  {
    if (!done)
    {
      test.testEverything();
    }
    done = true;
    delay(1000);
  }
  else
  {
    runAI();
  }
}

void runAI()
{

}





