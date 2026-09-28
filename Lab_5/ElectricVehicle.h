#ifndef _ELECTRICVEHICLE_H
#define _ELECTRICVEHICLE_H

#include <string>
#include "Vehicle.h"

using namespace std;

class ElectricVehicle : public Vehicle
{
private:
	float EnergyCapacity; //killowatt-hours
	float Efficiency;   //miles/kwH

public:
	ElectricVehicle();// explcit constructor to initalize data memebrs 
	int SetElectricVehicleInfo(float userEnergyCap, float userEff);
	string GetVehicleSpecs();
};


#endif