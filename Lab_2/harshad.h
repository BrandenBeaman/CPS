#ifndef _harshad_H
#define _harshad_H

#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;

// Function to get the base file name from user in command line
string GetFileName(int argc, char* argv[]);


//Determines if number is perfect
bool isHarshad(int number);

#endif // _harshad_H	