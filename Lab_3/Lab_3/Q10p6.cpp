//Module Implemenation for Class Q10p6
#include <iostream>
#include <cmath> 
#include<cstdint>
#include<bit>

#include "Q10p6.h"

using namespace std;

Q10p6::Q10p6()
{
	Qnum = 0;
}

//Explicit Constructors
Q10p6::Q10p6(int integer)
{
	
	int32_t temp = static_cast<int32_t>(integer)* 64; 
	Qnum = static_cast<int16_t>(temp);
}

Q10p6::Q10p6(float singlePercision)
{
	
	float scaled = singlePercision * 64.0f;
	int32_t temp = static_cast<int32_t>(scaled);
	Qnum = static_cast<int16_t>(temp);
}

Q10p6::Q10p6(double doublePercision)
{
	 
	double scaled = doublePercision * 64.00;
	int32_t temp = static_cast<int32_t>(scaled);
	Qnum = static_cast<int16_t>(temp);
}


//Conversions
int Q10p6::toInt()
{

	return static_cast<int>(Qnum >> 6);
}

float Q10p6::toFloat()
{

	float converted = static_cast<float>(Qnum / 64.0f);
	return converted;
}

double Q10p6::toDouble()
{
	double converted = static_cast<double>(Qnum / 64.0);
	return converted;
}

//getter
int16_t Q10p6::getQnum ()
{
	int16_t Qform = Qnum;
	return Qform;
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
	Q10p6 result;
	result.Qnum = static_cast<int16_t>(Qnum - rhs.Qnum);
	return result;
}

Q10p6 Q10p6::operator*  (Q10p6& rhs)
{ 
	Q10p6 result;
	int32_t temp = (static_cast<int32_t>(Qnum) >> 2) * (static_cast<int32_t>(rhs.Qnum) >> 4);
	result.Qnum = static_cast<int16_t>(temp);
	return result;
}

Q10p6 Q10p6::operator/  (Q10p6& rhs)
{
	Q10p6 result;
	int32_t num = static_cast<int32_t>(Qnum);
	int32_t den = static_cast<int32_t>(rhs.Qnum);
	int32_t temp = (num << 6) / den;
	result.Qnum = static_cast<int16_t>(temp);
	return result;
}

bool Q10p6::operator==  (Q10p6& rhs)
{
	if ((Qnum - rhs.Qnum) == 0) {
		return true;
   }
	else {
		return false;
	}
}




