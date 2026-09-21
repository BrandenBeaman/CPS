
#include <string>
#include "passenger.h"

using namespace std;

//Accessor methods
int passenger::SetFirstName(string Val)
{
	FirstName = Val;
}

int passenger::SetLastName(string Val)
{
	LastName = Val;
}

int passenger::SetCabinNumber(string Val)
{
	 char X = Val[0];

	 if ((X == "P") || (X == "C") || (X == "C")) {

	}
	
	for (int i = 0; i < 3; i++) {
		Val[0] == "P"
	}
	CabinNumber = Val;
}