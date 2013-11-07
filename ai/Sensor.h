/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#ifndef Sensor_h
#define Sensor_h

#include "Arduino.h"

class Sensor
{
public:
  Sensor();
  void sense();
  boolean canSeeEnemy();
  boolean isLeftInRing();
  boolean isRightInRing();
  
private:
  void senseLD();
  void senseSD();
  int ldResults [];
  int getLDAnalogValue();
  boolean left;
  boolean right;
  boolean isLeftOn(); 
  boolean isRightOn();
  
  int avg(int array[], int len);
};

#endif

