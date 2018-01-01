#ifndef PortsState_h
#define PortsState_h

#include "Arduino.h"

class PortsState {
  public:
    PortsState(String dateTime, 
	       int value0, 
	       int value1, 
	       int value2, 
	       int value3, 
	       int value4, 
	       int value5);
    void setSensor0(int value);
    void setSensor1(int value);
    void setSensor2(int value);
    void setSensor3(int value);
    void setSensor4(int value);
    void setSensor5(int value);
    void setDate(String date);
    int getSensor0();
    int getSensor1();
    int getSensor2();
    int getSensor3();
    int getSensor4();
    int getSensor5();
    String getDate();
    double getPortsAverage();
  private:
    int sensor0;
    int sensor1;
    int sensor2;
    int sensor3;
    int sensor4;
    int sensor5;
    String _date;
};
#endif

