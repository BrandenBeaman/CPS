
#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

using namespace std;

class passenger
{
private:
    string FirstName;
    string LastName;
    string CabinNumber;
public:
    //Accessor methods
    int SetFirstName(string Val);
    int SetLastName(string Val);
    int SetCabinNumber(string Val);

    //Composite read access method
    void GetInfo(string& userFirst, string& userLast, string& userCabinNum);

};//passenger

#endif //PASSENGER_H
