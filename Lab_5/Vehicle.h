#ifndef _VEHICLE_
#define _VEHICLE_

#include <string>

using namespace std;

class Vehicle
{

	//private data memebers about each vehicle
private:
	string Make;
	string Model;
	string Year;

	
public:

	int SetVehicleInfo(string userMake, string userModel, string userYear); //method to set vehicle information
	void GetVehicleInfo(string& userMake, string& userModel, string& userYear); // method to get vehivle information

	virtual string GetVehicleSpecs(void) = 0; // pure virtual method for getting the specs of a specific type of vehicle, implemented in dervided classes
};

#endif //_VEHICLE_
