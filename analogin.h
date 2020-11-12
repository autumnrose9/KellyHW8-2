#ifndef ANALOGIN_H_
#define ANALOGIN_H_

#include<iostream>
using namespace std;
using std::string;

class Analogin
{
	private:
		unsigned int number;

	public:
		Analogin();
		Analogin(unsigned int n);
		virtual unsigned int getNumber();
		virtual void setNumber(unsigned int n);
		virtual int readADCsample();
		virtual ~Analogin();
};

#endif /*ANALOGIN_H_ */
