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
  void leftForward();
  void leftBack();
  void leftStop();
  void rightForward();
  void rightBack();
  void rightStop();
  
  void test();
};

#endif

