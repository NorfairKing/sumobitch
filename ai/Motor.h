/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
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
