
#include <string>
#include <cctype> // for isDiget
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
	int count = 0;

		//if X = to P C or S and last 3 elements of Val are numbers, set Cabin number 
		// return 1 for Valid cabin number
		// return 2 for invalid cabin number 
	if ((X == 'P') || (X == 'C') || (X == 'S')) {

		for (int i = 2; i < 4; i++) {
			if (isdigit(Val[i])) {
				count++;
			}//if
		}// for

		if (count == 3) {
			CabinNumber = Val;
			return 1; 
		}
		else {
			return 2;
		}

	}//if
	else {
		return 2;

	}// else
}// SetCabinNumber