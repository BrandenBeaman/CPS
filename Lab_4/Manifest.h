
#ifndef MANIFEST_H
#define MANIFEST_H

#include <vector>
#include "passenger.h"


class Manifest
{
private:
	vector<passenger> passengerList;
public:
	// Constructor needed only if you have local variables of intrinsic types
	// Manifest manipulation methods
	int AddPassenger(passenger ThePassenger);
	int RemovePassenger(passenger ThePassenger);
	// Method to get manifest list and statistics
	void Print(void);

};

#endif //manifest
