/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
public:
  Motor();
  void leftForward(int speed);
  void leftBack(int speed);
  void rightForward(int speed);
  void rightBack(int speed);
private:
  void motorOn();
  void motorOff();
};

#endif

