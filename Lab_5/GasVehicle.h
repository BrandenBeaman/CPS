#ifndef _GASVEHICLE_H
#define _GASVEHICLE_H

#include <string>
#include "Vehicle.h"

using namespace std;

class GasVehicle : public Vehicle
{
private:
	float FuelCapacity; //gallons
	float Efficiency;   //miles/gallon

public:
	GasVehicle();// explcit constructor to initalize data memebrs 
	int SetGasVehicleInfo(string userFuelCap, string userEff);
	string GetVehicleSpecs();
};

#endif


