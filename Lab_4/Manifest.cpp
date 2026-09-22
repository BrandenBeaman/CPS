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
		cout << "Passeneger added to manifest!: " << newFirst << " " << newLast << " " << newCabin << endl;
		return 0;
	}//if
	
	for (int i = 0; i < size; i++) {
		passengerList[i].GetInfo(oldFirst, oldLast, oldCabin);

		if (oldFirst == newFirst && oldLast == newLast) {
			cout << "Passenger already excists! : " << oldFirst << " " << oldLast << endl;
			return 1;
		}//if
	}//for

	passengerList.push_back(ThePassenger);
	cout << "Passeneger added to manifest!: " << newFirst << " " << newLast << " " << newCabin << endl;
	return 0;

}// Add passenegr

int Manifest::RemovePassenger(passenger ThePassenger)
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
	passengerList[size-1].GetInfo(oldFirst, oldLast, oldCabin);

	//removes last passenger object in the list
	if (newFirst == oldFirst && newLast == oldLast) {
    passengerList.pop_back();
	cout << "Passenger: " << newFirst << " " << newLast << " removed from Manifest" << endl;
	return 0;
	}
	else {
		return 1;
	}

}

void Manifest::Print(void)
{
	string currentFirst;
	string currentLast;
	string currentCabinNum;

	int port = 0;
	int center = 0;
	int starboard = 0;

	int size = passengerList.size();

	cout << "Manifest: " << endl;
	for (int i = 0; i < size; i++) {
		passengerList[i].GetInfo(currentFirst, currentLast, currentCabinNum);
		if (currentCabinNum[0] == 'P') {
			port++;
		}
		else if (currentCabinNum[0] == 'C') {
			center++;
		}
		else if (currentCabinNum[0] == 'S') {
			starboard++;
		}
		cout << currentFirst << " " << currentLast << " " << currentCabinNum << endl;
	}
	cout << "Number of Passangers in Port Cabin: " << port << endl;
	cout << "Number of Passangers in Center Cabin: " << center << endl;
	cout << "Number of Passangers in Starboard Cabin: " << starboard << endl;

}