/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led
{
public:
  Led();
  void ledOn();
  void ledOff();
  void ledCountDown();
};

#endif

