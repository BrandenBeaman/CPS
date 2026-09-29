#include <string>
#include <sstream> //  for ostringstream
#include <iomanip> //  for setprecision
#include "ElectricVehicle.h"

using namespace std;

ElectricVehicle::ElectricVehicle()
{
	EnergyCapacity = 0.0;
	Efficiency = 0.0;
}

int ElectricVehicle::SetElectricVehicleInfo(string userEnergyCap, string userEff)
{
	float FC = stof(userEnergyCap);
	float EFF = stof(userEff);

	EnergyCapacity = FC;
	Efficiency = EFF;
	return 0;
}

string ElectricVehicle::GetVehicleSpecs()
{
	float NewEnergyCap = EnergyCapacity;
	float NewEff = Efficiency;

	string propulsionType = "EV";

	ostringstream specs;

	specs << propulsionType << " "
		<< fixed << setprecision(1) << NewEnergyCap << " "
		<< fixed << setprecision(1) << NewEff;


	return specs.str();
}