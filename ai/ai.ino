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
boolean started;

void setup() {
  if(TESTING)
  {
    Serial.begin(9600);
    Serial.println("Set up serial");
  }
  done = false;
}

void loop() {
  if(!(TESTING || started))
  {
     led.countdown();
     started = true; 
  }
  if (TESTING)
  {
    if (!done)
    {
      test.testEverything();
    }
    done = true;
    delay(1000);
  }
  else runAI();
}

boolean searching = true;

void runAI()
{
  searching = !sensor.canSeeEnemy(); 
  boolean anyOutOfRing = sensor.isAnyOutOfRing();
  if(anyOutOfRing){
    motor.leftStop();
    motor.rightStop();
  }
  else 
  if (searching)
  {
    motor.leftForward();
    motor.rightBack();
  }
  else
  {
    motor.leftForward();
    motor.rightForward();
  }

}








