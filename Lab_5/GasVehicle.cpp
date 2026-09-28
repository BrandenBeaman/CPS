#include <string>
#include <sstream> //  for ostringstream
#include <iomanip> //  for setprecision
#include "GasVehicle.h"

using namespace std;

GasVehicle::GasVehicle()
{
	 FuelCapacity = 0.0; 
	 Efficiency = 0.0;   
}

int GasVehicle::SetGasVehicleInfo(string userFuelCap, string userEff) 
{
	float FC = stof(userFuelCap);
	float EFF = stof(userEff);

	FuelCapacity = FC;
	Efficiency = EFF;
	return 0;
}

string GasVehicle::GetVehicleSpecs()
{
	float NewFuelCap = FuelCapacity;
	float NewEff = Efficiency;

	string propulsionType = "ICE";
    
	ostringstream specs;

	specs << propulsionType << " "
		 << fixed << setprecision(1) << NewFuelCap << " "
		 << fixed << setprecision(1) << NewEff;

	
	return specs.str();
}