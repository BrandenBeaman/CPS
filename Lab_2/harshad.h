#ifndef _harshad_H
#define _harshad_H

#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;

// Function to get the base file name from user in command line
// User will be prompted to enter a valid file name until a valid file is found
// User only should insert the base file name without the .in extension
// The function will return the base file name without the .in extension
string GetFileName(int argc, char* argv[]);


//Determines if number from provided file is perfect or not
bool isHarshad(int number);

#endif // _harshad_H	