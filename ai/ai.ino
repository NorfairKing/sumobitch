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
#include "FiniteStateMachine.h" // Import the FSM class

#include "Test.h"// Import the test class.

Motor motor;//Initialize the motors
Sensor sensor;// Initialize the sensors
Led led;// Initialize the led


//Initialize states
State starting = State(start);
State looking = State(look);
State attacking = State(attack);
State panicking = State(panic);

FSM sumorobot = FSM(starting);


boolean done;
boolean started;

void setup() {
}

void loop() {
  runAI();
}


void runAI()
{
  boolean anyOutOfRing = sensor.isAnyOutOfRing();
  if(anyOutOfRing){sumorobot.transitionTo(panicking);}
  boolean sees = sensor.canSeeEnemy();
  if (sees){sumorobot.transitionTo(attacking);}
  sumorobot.update();
}

void start(){
  led.countdown();
  sumorobot.transitionTo(looking);
}
void look(){
  motor.leftForward();
  motor.rightBack();
}
void attack(){
  motor.leftForward();
  motor.rightForward();
}
void panic(){
  motor.leftStop();
  motor.rightStop();
}






