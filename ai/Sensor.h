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
  boolean isFrontLeftInRing();
  boolean isFrontRightInRing();
  boolean isBackLeftInRing();
  boolean isBackRightInRing();
  boolean isAnyOutOfRing();
private:
  int getLDAnalogValue();
  int getAccurateLDValue();
  boolean isFrontLeftOn();
  boolean isFrontRightOn();
  boolean isBackLeftOn();
  boolean isBackRightOn();
};
#endif

