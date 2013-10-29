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
  boolean isLeftOn();
  boolean isRightOn();
  boolean isAnyOn();
private:
  int getLDValue();
  int getLongSensorCm();
};

#endif

