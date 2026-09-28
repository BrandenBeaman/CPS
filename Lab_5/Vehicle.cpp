#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
	Year = 0;
}

int Vehicle::SetVehicleInfo(string userMake, string userModel, int userYear)
{
	Make  = userMake;
	Model = userModel;
	Year  = userYear;
	return 0;
}

void Vehicle::GetVehicleInfo(string& userMake, string& userModel, int& userYear)
{
	userMake  = Make;
	userModel = Model;
	userYear  = Year;
}