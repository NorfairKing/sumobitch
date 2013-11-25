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

void Led::on()
{
  digitalWrite(LED_PIN,HIGH);
}
void Led::off()
{
  digitalWrite(LED_PIN,LOW);
}

void Led::countdown()
{
  // Blink 5 times
  for(int i = 0; i < (COUNTDOWN_TIME-1); i++)
  {
    on();
    delay(500);
    off();
    delay(500);
  }
  
}



