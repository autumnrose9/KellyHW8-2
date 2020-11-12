#include "analogin.h"

#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
#define ADC 0

Analogin::Analogin()
{
	;
}

Analogin::Analogin(unsigned int n)
{
	number = n;
}

void Analogin::setNumber(unsigned int n)
{
	number = n;
}

unsigned int Analogin::getNumber()
{
	return number;
}

int Analogin::readADCsample()
{
	stringstream ss;
   	ss << ADC_PATH << number << "_raw";
   	fstream fs;
   	fs.open(ss.str().c_str(), fstream::in);
   	fs >> number;
   	fs.close();
   	return number;
}

Analogin::~Analogin()
{
	;
}
