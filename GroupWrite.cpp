#include "Arduino.h"
#include "GroupWrite.h"

void GroupWrite::group(byte pin1,byte pin2,byte pin3,byte pin4)
{
  _pin1=pin1;
  _pin2=pin2;
  _pin3=pin3;
  _pin4=pin4;
  pinMode(_pin1,OUTPUT);
  pinMode(_pin2,OUTPUT);
  pinMode(_pin3,OUTPUT);
  pinMode(_pin4,OUTPUT);
}

void GroupWrite::set(byte value1,byte value2,byte value3,byte value4);
{
  _value1=value1;
  _value2=value2;
  _value3=value3;
  _value4=value4;
   if (_value1 == 1) 
  {     
    digitalWrite(_pin1, HIGH);  
  } 
  else 
  {
    digitalWrite(_pin1, LOW); 
  }
   if (_value2 == 1) 
  {     
    digitalWrite(_pin2, HIGH);  
  } 
  else 
  {
    digitalWrite(_pin2, LOW); 
  }
   if (_value3 == 1) 
  {     
    digitalWrite(_pin3, HIGH);  
  } 
  else 
  {
    digitalWrite(_pin3, LOW); 
  }
   if (_value4 == 1) 
  {     
    digitalWrite(_pin4, HIGH);  
  } 
  else 
  {
    digitalWrite(_pin4, LOW); 
  }
}
