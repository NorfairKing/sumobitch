/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#include "Arduino.h"
#include "SensorConfig.h"
#include "Sensor.h"
#include "FastRunningMedian.h"
FastRunningMedian<int,32, 0> medianThingy;

Sensor::Sensor()
{
  pinMode(SHORT_FRONT_LEFT, INPUT);
  pinMode(SHORT_FRONT_RIGHT, INPUT);
  pinMode(SHORT_BACK_LEFT, INPUT);
  pinMode(SHORT_BACK_RIGHT, INPUT);
  pinMode(LONG, INPUT);
}

boolean Sensor::canSeeEnemy()
{
  return getAccurateLDValue() > THRESHOLD;
}

boolean Sensor::isFrontLeftInRing()
{
  return isFrontLeftOn() == IN_RING_VALUE;
}

boolean Sensor::isFrontRightInRing()
{
  return isFrontRightOn() == IN_RING_VALUE; 
}

boolean Sensor::isBackLeftInRing()
{
  return isBackLeftOn() == IN_RING_VALUE;
}

boolean Sensor::isBackRightInRing()
{
  return isBackRightOn() == IN_RING_VALUE; 
}

boolean Sensor::isAnyOutOfRing()
{
  return !isFrontLeftInRing() || !isFrontRightInRing() || !isBackLeftInRing() || !isBackRightInRing();
}

int Sensor::getLDAnalogValue()
{
  return analogRead(LONG); 
}

int Sensor::getAccurateLDValue()
{
  int first = getLDAnalogValue();
  int second = getLDAnalogValue();
  int third = getLDAnalogValue();
  int value = (first+second+third)/3;
  Serial.println(value);
  return value;
  /*for (int i=0;i < PRECISION;i++)
  {
    int result = getLDAnalogValue();
    medianThingy.addValue(result);
  }
  int accurateValue = medianThingy.getMedian();
  return accurateValue;*/
}

boolean Sensor::isFrontLeftOn()
{
  return digitalRead(SHORT_FRONT_LEFT) == HIGH;
}

boolean Sensor::isFrontRightOn()
{
  return digitalRead(SHORT_FRONT_RIGHT) == HIGH;
}

boolean Sensor::isBackLeftOn()
{
  return digitalRead(SHORT_BACK_LEFT) == HIGH;
}

boolean Sensor::isBackRightOn()
{
  return digitalRead(SHORT_BACK_RIGHT) == HIGH;
}







