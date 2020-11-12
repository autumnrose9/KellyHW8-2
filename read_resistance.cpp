#include "analogin.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int ADCtoResistance(int val)
{
	float Vout = val*0.00439;
	float Vin = 1.8;
	int r1 = 1e3;
	int r2 = (Vout*r1)/(Vin-Vout);
	return r2;
}
int main()
{
	Analogin AIN(0);
	cout << "Using " << AIN.getNumber() << " to read analog value" << endl;
	cout << "Measuring resistance..." << endl;
	cout << "ADC Value is: " << AIN.readADCsample() << endl;
	int adcVal = AIN.readADCsample();
	int rn = ADCtoResistance(adcVal);
	cout << "Resistance: " << rn <<" Ohms" << endl;
}
