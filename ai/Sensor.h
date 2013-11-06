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
private:
  boolean isLeftOn(); 
  boolean isRightOn();
  int getLDValue();
  int getLongSensorCm();
};

#endif

