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
  pinMode(SHORT_LEFT, INPUT);
  pinMode(SHORT_RIGHT, INPUT);
  pinMode(LONG, INPUT);
}

boolean Sensor::canSeeEnemy()
{
  return getAccurateLDValue() > THRESHOLD;
}

boolean Sensor::isLeftInRing()
{
  return isLeftOn() == IN_RING_VALUE;
}

boolean Sensor::isRightInRing()
{
  return isRightOn() == IN_RING_VALUE; 
}

int Sensor::getLDAnalogValue()
{
  return analogRead(LONG); 
}

int Sensor::getAccurateLDValue()
{
  for (int i=0;i < PRECISION;i++)
  {
    int result = getLDAnalogValue();
    medianThingy.addValue(result);
  }
  return medianThingy.getMedian();

  // ....
  // myMedian.addValue(value); // adds a value
  // m = myMedian.getMedian(); // retieves the median
  /*
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
  return res;
  */
}

boolean Sensor::isLeftOn()
{
  return digitalRead(SHORT_LEFT) == HIGH;
}

boolean Sensor::isRightOn()
{
  return digitalRead(SHORT_RIGHT) == HIGH;
}







