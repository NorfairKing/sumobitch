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

void Led::On()
{
  digitalWrite(LED_PIN,HIGH);
}
void Led::Off()
{
  digitalWrite(LED_PIN,LOW);
}

void Led::CountDown()
{
  // Blink 5 times
  for(int i = 0; i < (COUNTDOWN_TIME - 1); i++)
  {
    On();
    delay(500);
    Off();
    delay(500);
  }
  
}



