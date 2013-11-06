/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#include "Arduino.h"
#include "SensorConfig.h"
#include "Sensor.h"

Sensor::Sensor()
{
  pinMode(SHORT_LEFT, INPUT);
  pinMode(SHORT_RIGHT, INPUT);
  pinMode(LONG, INPUT);
}

boolean Sensor::isLeftOn()
{
  return digitalRead(SHORT_LEFT) == HIGH;
}

boolean Sensor::isLeftInRing()
{
  return isLeftOn() == IN_RING_VALUE;
}

boolean Sensor::isRightOn()
{
  return digitalRead(SHORT_RIGHT) == HIGH;
}

boolean Sensor::isRightInRing()
{
   return isRightOn() == IN_RING_VALUE; 
}

boolean Sensor::AnyOutOfRing()
{
  return  !isLeftInRing() || !isRightInRing();
}

int Sensor::getLDValue()
{
  return analogRead(LONG); 
}

int Sensor::getLongSensorCm()
{
  int ldValue = getLDValue();
  return (1. / ldValue); 
}
