#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;


int Vehicle::SetVehicleInfo(string userMake, string userModel, string userYear)
{
	Make  = userMake;
	Model = userModel;
	Year  = userYear;
	return 0;
}

void Vehicle::GetVehicleInfo(string& userMake, string& userModel, string& userYear)
{
	userMake  = Make;
	userModel = Model;
	userYear  = Year;
}