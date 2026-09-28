// Lab_5.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "GasVehicle.h"

using namespace std;

int main()
{
	string make;
	string model;
	int year;

	GasVehicle car;

	while (1) {
		cout << "input car info, Year Make Model" << endl;
		cin >> make;
		cin >> model;
		cin >> year;

		cout << "setting car info.." << endl;
		cout << car.SetVehicleInfo(make, model, year) << endl;

		string make2;
		string model2;
		int year2;
		
		cout << "displaying car info.." << endl;

		car.GetVehicleInfo(make2, model2, year2);

		cout << "Make: " << make2 << " Model: " << model2 << " Year: " << year2 << endl;

		float FC = 0;
		float EFF = 0;

		GasVehicle GasCar;

		Vehicle* ptr;

		cout << "Enter FC and EFF" << endl;
		cin >> FC;
		cin >> EFF;

		GasCar.SetGasVehicleInfo(FC, EFF);

		ptr = &GasCar;
		
		cout << "Displaying Gas Car information: " << ptr->GetVehicleSpecs() << endl;
	}
}

