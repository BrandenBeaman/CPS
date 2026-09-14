//Module Interface for class Q10p6
#ifndef QNUMBERS_H
#define QNUMBERS_H

#include <iostream>
#include <cmath> 
#include<cstdint>


//class Q10p6 can take an int, float, or a double as a argument and convert it into Q10p6 format
//toInt, toFloat, and toDouble returns Qnum as a int, float, or a double
//class Q10p6 also provided +,-,*,/, and -- operators for Q10p6 formmated numbers

class Q10p6
{
private:
	int16_t Qnum;

public:
	//explicit constructors with defult conscructor
	Q10p6();
	explicit Q10p6(int integer);
	explicit Q10p6(float singlePercision);
	explicit Q10p6(double doublePercision);

	//Conversions
	int toInt();
	float toFloat();
	double toDouble();

	//Operators
	Q10p6 operator+  (Q10p6& rhs);
	Q10p6 operator-  (Q10p6& rhs);
	Q10p6 operator*  (Q10p6& rhs);
	Q10p6 operator/  (Q10p6& rhs);
	bool  operator==  (Q10p6& rhs);
};



#endif

