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
  boolean isLeftInRing();
  boolean isRightInRing();
  boolean AnyOutOfRing();
  int getLDValue();
private:
  boolean isLeftOn(); 
  boolean isRightOn();
};

#endif

