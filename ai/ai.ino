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
State panicking = State(panic_in,panic,panic_out);

FSM sumorobot = FSM(looking);


boolean done;
boolean started;

void setup() {
  Serial.begin(9600);
  started = false;
  sumorobot.transitionTo(starting);
  sumorobot.update();
}

void loop() {
  runAI();
}


void runAI()
{
  sumorobot.update();
  boolean anyOutOfRing = sensor.isAnyOutOfRing();
  if(anyOutOfRing){
    sumorobot.transitionTo(panicking);
  }
  else{
    boolean sees = sensor.canSeeEnemy();
    if (sees){
      sumorobot.transitionTo(attacking);
    }
    else {
      sumorobot.transitionTo(looking);
    }
  }
}

void start(){
  led.countdown();
}
void look(){
  motor.leftForward();
  motor.rightBack();
}
void attack(){
  motor.leftForward();
  motor.rightForward();
}
void panic_in(){
  led.on();
}
void panic(){
  if(sensor.isAnyFrontOutOfRing()){
    motor.leftBack();
    motor.rightBack();
    delay(250);
  }
  else if (sensor.isAnyBackOutOfRing()){
    motor.leftForward();
    motor.rightForward();
    delay(250);
  }

}
void panic_out(){
  led.off();
}








