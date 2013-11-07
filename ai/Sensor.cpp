/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#include "Arduino.h"
#include "SensorConfig.h"
#include "Sensor.h"


int ldpt;
int ldResults [PRECISION];

boolean left;
boolean right;

Sensor::Sensor()
{
  pinMode(SHORT_LEFT, INPUT);
  pinMode(SHORT_RIGHT, INPUT);
  pinMode(LONG, INPUT);

  ldpt = 0;
  for(int i=0; i < PRECISION; i++)
  {
    ldResults[i] = 0;
  }

  left = true;
  right = true;
}

void Sensor::sense()
{
  for (int i = 0; i < PRECISION; i++)
  {
    senseLD();
  }
  senseSD();
}

void Sensor::senseLD()
{
  ldResults[ldpt] = getLDAnalogValue();
  ldpt = (ldpt + 1) % PRECISION;
}

void Sensor::senseSD()
{
  left = isLeftOn();
  right = isRightOn();
}

boolean Sensor::canSeeEnemy()
{
  return avg(ldResults,PRECISION) >= THRESHOLD;
}

boolean Sensor::isLeftInRing()
{
  return left == IN_RING_VALUE;
}
boolean Sensor::isRightInRing()
{
  return right == IN_RING_VALUE; 
}

int Sensor::getLDAnalogValue()
{
  return analogRead(LONG); 
}
boolean Sensor::isLeftOn()
{
  return digitalRead(SHORT_LEFT) == HIGH;
}
boolean Sensor::isRightOn()
{
  return digitalRead(SHORT_RIGHT) == HIGH;
}

int avg(int array[], int len)
{
  int res = 0;
  for( int i=0;i<len;i++){
    res += array[i];
  }
  return res/len;
}







