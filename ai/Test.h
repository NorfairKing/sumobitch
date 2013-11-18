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
  void testLed();
  
  void testMotorLeft();
  void testMotorRight();
  void testMotorTogether();
  void testSensorShortFrontLeft();
  void testSensorShortFrontRight();
  void testSensorShortBackLeft();
  void testSensorShortBackRight();
  void testSensorLong();
};

#endif

