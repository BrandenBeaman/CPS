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

int GasVehicle::SetGasVehicleInfo(float userFuelCap, float userEff) 
{
	FuelCapacity = userFuelCap;
	Efficiency = userEff;
	return 0;
}

string GasVehicle::GetVehicleSpecs()
{
	float NewFuelCap = FuelCapacity;
	float NewEff = Efficiency;

	string propulsionType = "ICE";
    
	ostringstream specs;

	specs << propulsionType << " "
		 << fixed << setprecision(2) << NewFuelCap << " "
		 << fixed << setprecision(2) << NewEff;

	
	return specs.str();
}