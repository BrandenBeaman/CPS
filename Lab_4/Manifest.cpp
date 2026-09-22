#include "passenger.h"
#include "Manifest.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;


int Manifest::AddPassenger(passenger ThePassenger)
{
	int size = passengerList.size();

	// store Thepassenger information inside of strings for comparision
	string newFirst;
	string newLast;
	string newCabin;
	ThePassenger.GetInfo(newFirst, newLast, newCabin);
	
	
	string oldFirst;
	string oldLast;
	string oldCabin;

	if (size == 0) {
		passengerList.push_back(ThePassenger);
		cout << "Passeneger added to manifest!: " << newFirst << " " << newLast << endl;
		return 0;
	}//if
	
	for (int i = 0; i < size; i++) {
		passengerList[i].GetInfo(oldFirst, oldLast, oldCabin);

		if (oldFirst == newFirst && oldLast == newLast) {
			cout << "Passenger already excists! : " << oldFirst << " " << oldLast << endl;
			return 1;
		}//if
	}// for

	passengerList.push_back(ThePassenger);
	cout << "Passeneger added to manifest!: " << newFirst << " " << newLast << endl;
	return 0;

}// Add passenegr

int Manifest::RemovePassenger(passenger ThePassenger)
{
	int size = passengerList.size(); 

	string targetFirst;
	string targetLast;
	string targetCabinNum;

	ThePassenger.GetInfo(targetFirst, targetLast, targetCabinNum);

	string currentFirst;
	string currentLast;
	string currentCabinNum;

	for (int i = 0; i < size; i++) {
		passengerList[i].GetInfo(currentFirst, currentLast, currentCabinNum);

		if ((currentFirst==targetFirst) && (currentLast==targetLast) && (currentCabinNum==targetCabinNum)) {
			passengerList.erase(passengerList.begin() + i);
			return 0; // success
		}//if
	}// for

	return 1; // 1 for error
}

void Manifest::Print(void)
{

}