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
  boolean canSeeEnemy();
  boolean isLeftInRing();
  boolean isRightInRing();
  
private:
  int getLDAnalogValue();
  int getAccurateLDValue();
  boolean isLeftOn();
  boolean isRightOn();
};
#endif

