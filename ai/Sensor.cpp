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
  int results[PRECISION];
  for (int i=0;i < PRECISION;i++)
  {
    results[i] = getLDAnalogValue();
  }
  
  int res = 0;
  for( int i=0;i < PRECISION;i++)
  {
    res += results[i];
  }
  res = res / PRECISION;
  Serial.println(res);
  return res;
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







