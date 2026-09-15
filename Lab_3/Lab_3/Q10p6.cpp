//Module Implemenation for Class Q10p6
#include <iostream>
#include <cmath> 
#include<cstdint>

#include "Q10p6.h"

Q10p6::Q10p6()
{
	Qnum = 0;
}

//Explicit Constructors
Q10p6::Q10p6(int integer)
{
	int32_t temp = 0;
	temp = integer * 64;
	Qnum = static_cast<int16_t>(temp);
}

Q10p6::Q10p6(float singlePercision)
{
	singlePercision = singlePercision * 64.0f;
	Qnum = static_cast<int16_t> (singlePercision);
}

Q10p6::Q10p6(double doublePercision)
{
	doublePercision = doublePercision * 64.00f;
	Qnum = static_cast<int16_t> (doublePercision);
}


//Conversions
int Q10p6::toInt()
{
	int number = static_cast<int>(Qnum/64);
	return number;
}

float Q10p6::toFloat()
{
	float singlePre = static_cast<float>(Qnum/64);
	return singlePre;
}

double Q10p6::toDouble()
{
	double doublePre = static_cast<double>(Qnum / 64);
	return doublePre;
}


//operators
Q10p6 Q10p6::operator+  (Q10p6& rhs)
{
	Q10p6 result;
	result.Qnum = static_cast<int16_t>(Qnum + rhs.Qnum);
	return result;
}

Q10p6 Q10p6::operator-  (Q10p6& rhs)
{

}

Q10p6 Q10p6::operator*  (Q10p6& rhs)
{ 

}

Q10p6 Q10p6::operator/  (Q10p6& rhs)
{

}

bool Q10p6::operator==  (Q10p6& rhs)
{

}




