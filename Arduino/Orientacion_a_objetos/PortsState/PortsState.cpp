#include "Arduino.h"
#include "PortsState.h"

	PortsState::PortsState(String dateTime,
 				    int value0,
 				    int value1,
 				    int value2,
 				    int value3,
				    int value4,
 				    int value5) 
	{
	    sensor0 = value0;
	    sensor1 = value1;
	    sensor2 = value2;
	    sensor3 = value3;
	    sensor4 = value4;
	    sensor5 = value5;
	    _date = dateTime;
	}

	int PortsState::getSensor0()
	{
	    return sensor0;
	}

	void PortsState::setSensor0(int value)
	{
	    sensor0 = value;
	}

	int PortsState::getSensor1()
	{
	    return sensor1;
	}

	void PortsState::setSensor1(int value)
	{
	    sensor1 = value;
	}

	int PortsState::getSensor2()
	{
	    return sensor2;
	}

	void PortsState::setSensor2(int value)
	{
	    sensor2 = value;
	}

	int PortsState::getSensor3()
	{
	    return sensor3;
	}

	void PortsState::setSensor3(int value)
	{
	    sensor3 = value;
	}

	int PortsState::getSensor4()
	{
	    return sensor4;
	}

	void PortsState::setSensor4(int value)
	{
	    sensor4 = value;
	}

	int PortsState::getSensor5()
	{
	    return sensor5;
	}

	void PortsState::setSensor5(int value)
	{
	    sensor5 = value;
	}

	String PortsState::getDate()
	{
	    return _date;
	}

	void PortsState::setDate(String dateTime)
	{
	    _date = dateTime;
	}

	double PortsState::getPortsAverage()
	{
	    int sum = sensor0 + sensor1 + sensor2 + sensor3 + sensor4 + sensor5;
	    double portsAverage = sum / 6;
	    return portsAverage;
	}