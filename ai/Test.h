/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

#ifndef Test_h
#define Test_h

#include "Arduino.h"

class Test
{
public:
  Test();
  void testEverything();
private:
  void testMotors();
  void testSensors();
  
  void testMotorLeft();
  void testMotorRight();
  void testMotorTogether();
  void testSensorShortLeft();
  void testSensorShortRight();
  void testSensorLong();
};

#endif

