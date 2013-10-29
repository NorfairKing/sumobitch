#include "Arduino.h"
#include "SensorConfig.h"
#include "Sensor.h"



Sensor::Sensor()
{
  pinMode(SHORT_LEFT, INPUT);
  pinMode(SHORT_RIGHT, INPUT);
  pinMode(LONG, INPUT);
}

void Sensor::isLeftOn()
{
 
}

void Sensor::isRightOn()
{
 
}

void Sensor::isAnyOn()
{
 
}
