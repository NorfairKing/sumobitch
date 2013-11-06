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
/*
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
  
  int pt = 0;
   int nb_of_results = 50;
   int results [nb_of_results];
   for( int i=0;i<nb_of_results;i++){
   results[i]=0;
   }
   while(true)
   {
   results[pt] = sensor.getLDValue();
   pt = (pt + 1) % nb_of_results;
   Serial.println(String(avg(results,nb_of_results)));
   }
   

  if (!done){
    test.testEverything();
  }
  done = true;
  delay(1000);
  Serial.println("Loop done");
}
*/
void sense()
{

}

int avg(int array[], int len)
{
  int res = 0;
  for( int i=0;i<len;i++){
    res += array[i];
  }
  return res/len;
}

// Define a function pointer and initialize to NULL.
typedef void (*FunctionPointer) ();

// Declare looping actions function names, declared lower.
FunctionPointer xActions[] = {loopActionA,loopActionB,loopActionC};
// Define actions status flags. Set to 1 to auto execute a start.
int xActionsFlags[] = {0,0,0}; 

int xActionsCount = sizeof(xActions);

void xActionTrigger(int id=0, int action=0) {
  // The id represent it's position in the flags array.
  // Action 1 = executed, 0 not.
  xActionsFlags[id] = action;
}

// LOOPING FUNCTIONS

void loopActionA() {
        // Do something...
}

void loopActionB() {
	// Do something...
}

void loopActionC() {
	// Do something...
}

// Exectute all loop functions.
void xDoActions() {
	// Execute all looped function.
	for(unsigned int j=0; j < xActionsCount; j++) {
		if( xActionsFlags[j] == 1 ) { // Execute the action if.
			xActions[j](); // Call the related loop action.
		}
	}
}

void setup() {
        xActionTrigger(0,1); // First action.
        xActionTrigger(2,1); // Third action.
}

void loop() {
	xDoActions();
}

