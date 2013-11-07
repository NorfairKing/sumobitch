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


// Define a function pointer and initialize to NULL.
typedef void (*FunctionPointer) ();

// Declare looping actions function names, declared lower.
FunctionPointer xActions[] = {
  sense,scheduleAI,runAI};
// Define actions status flags. Set to 1 to auto execute a start.
int xActionsFlags[] = {
  0,0,0}; 

int xActionsCount = sizeof(xActions);

void xActionTrigger(int id=0, int action=0) {
  // The id represent it's position in the flags array.
  // Action 1 = executed, 0 not.
  xActionsFlags[id] = action;
}



boolean done;
void setup() {
  Serial.begin(9600);
  Serial.println("Set up serial");
  
  done = false;

  xActionTrigger(0,1); // sense
  xActionTrigger(1,1); // scheduleAI
  xActionTrigger(2,1); // runAI
}



void loop() {
  if (TESTING)
 {
    if (!done)
    {
      //test.testEverything();
      //motor.test();
    }
    
    done = true;
    delay(1000);
 }
  else
  {
   xDoActions();
  }
}

// Exectute all loop functions.
void xDoActions() {
  // Execute all looped function.
  for(unsigned int j=0; j < xActionsCount; j++) 
  {
    if( xActionsFlags[j] == 1 ) 
      // Execute the action if.
      xActions[j](); // Call the related loop action.
  }
}

void sense()
{ 
  sensor.sense();
}

void scheduleAI()
{

}


void runAI()
{

}




