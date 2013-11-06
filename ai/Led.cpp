/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#include "Arduino.h"
#include "LedConfig.h"
#include "Led.h"

Led::Led()
{
  pinMode(LED_PIN, OUTPUT);
}

void Led::ledOn()
{
  digitalWrite(LED_PIN,HIGH);
}
void Led::ledOff()
{
  digitalWrite(LED_PIN,LOW);
}

void Led::ledCountDown()
{
  
}
