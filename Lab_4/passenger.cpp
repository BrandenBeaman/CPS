
#include <string>
#include <cctype> // for isDiget
#include "passenger.h"

using namespace std;

//Accessor methods
int passenger::SetFirstName(string Val)
{
	FirstName = Val;
	return 0;
}

int passenger::SetLastName(string Val)
{
	LastName = Val;
	return 0;
}

int passenger::SetCabinNumber(string Val)
{
	char X = Val[0];
	int count = 0;

		//if X = to P C or S and last 3 elements of Val are numbers, set Cabin number 
		// return 0 for Valid cabin number
		// return -1 for invalid cabin number 
	if ((X == 'P') || (X == 'C') || (X == 'S')) {

		for (int i = 2; i < 5; i++) {
			if (isdigit(Val[i])) {
				count++;
			}//if
		}// for

		if (count == 3) {
			CabinNumber = Val;
			return 0; 
		}
		else {
			return 1;
		}

	}//if
	else {
		return 2;

	}// else
}// SetCabinNumber

//Composite read access method passes in caller variables by refernce  so they can get the values of the private data memebers and be used in main
void passenger::GetInfo(string& userFirst, string& userLast, string& userCabinNum)
{
	userFirst = FirstName;
	userLast = LastName;
	userCabinNum = CabinNumber;
}