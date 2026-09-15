// Lab_3.cpp : This file contains the 'main' function

#include <iostream>
#include <cmath> 
#include<cstdint>

#include "Q10p6.h"

using namespace std;


//Test for Q10p6 Class
//Tests All constructors, Conversions, Arethemetic operations, and Qnum getter 
// 
//Constructors: convert int, float, and double to Q10p6 format
//Conversions: handle Q10p6 back to int, flaot, and double 


int main()
{
    Q10p6 A = Q10p6();
    Q10p6 B = Q10p6(3);
    Q10p6 C = Q10p6(1.5f);
    Q10p6 D = Q10p6(2.25);



    cout << "Contructors:" << endl;
    cout << "default: A, " << A.getQnum() << endl;
    cout << "int to Q10p6: B, 12 = " << B.getQnum() << endl;
    cout << "float to Q10p6: C, 23.4 = " << C.getQnum() << endl;
    cout << "double to Q10p6: D, 143.51 = " << D.getQnum() << endl;



    cout << "Conversion:" << endl;
    cout << "Q10p6 to int: B,  = " << B.toInt() << endl;
    cout << "Q10p6 to float: C, 23.4 = " << C.toFloat() << endl;
    cout << "Q10p6 to double: D, 143.51 = " << D.toDouble() << endl;

    Q10p6 M = Q10p6(0.5);
    Q10p6 result = Q10p6();

    Q10p6 N = Q10p6(0.5);


    cout << "Opertations: " << endl;
    result = B.operator+(M);
    cout << "B + M: " << result.getQnum() << endl;

    result = B.operator-(M);
    cout << "B - M: " << result.getQnum() << endl;

    result = B.operator*(M);

    cout << "B * M: " << result.getQnum() << endl;

    result = B.operator/(M);

    cout << "B / M: " << result.getQnum() << endl;

    
    cout << "N == M: " << N.operator==(M) << endl;

    cout << "B == M:  " << B.operator==(M) << endl;
}

