#ifndef GroupWrite_h
#define GroupWrite_h

#include "Arduino.h"

class GroupWrite
{
  public:
    void group(byte pin1,byte pin2,byte pin3,byte pin4);
    void set(byte value1,byte value2,byte value3,byte value4);
  private:
    byte _pin1,_pin2,_pin3,_pin4,_value1,_value2,_value3,_value4;
    int k;
};

#endif
