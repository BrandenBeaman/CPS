// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <vector>
#include <string>
    
#include "passenger.h"
#include "Manifest.h"

using namespace std;

int main()
{
    int select;
    int codeAdd; 
    int codeRemove;
    int codeCN;

    string first;
    string last;
    string cNum;

    passenger ThePassenger;
    Manifest TheManifest;

    while (1) {
        cout << endl;
        cout << "1: create a passenger" << endl;
        cout << "2: add a passenger to the Manifest" << endl;
        cout << "3: remove recently added passenger from Manifest " << endl;
        cout << "4: Print Stats and Manifest " << endl;


        cin >> select;

        if (select == 1) {
            cout << "Enter Passenger's Cabin number(X - NNN)" << endl;
            cin >> cNum;
            codeCN = ThePassenger.SetCabinNumber(cNum);
            
             if (codeCN == 1){
                cout << "Cabin Number invalid" << endl;
                continue;
            }
            else if (codeCN == 2) {
                cout << "Cabin Letter invalid" << endl;
                continue;
                
            }


            cout << "Enter Passenger's First Name" << endl;
            cin >> first;            
            ThePassenger.SetFirstName(first);
            cout << "Enter Passenger's Last Name" << endl; 
            cin >> last;
            ThePassenger.SetLastName(last);

             cout << "Passenger: " << first << " " << last << " " << cNum << " created!" << endl;
        }

        if (select == 2) {
           
             codeAdd = TheManifest.AddPassenger(ThePassenger); 
             cout << codeAdd << endl;
        }

        if (select == 3) {
            codeRemove = TheManifest.RemovePassenger(ThePassenger);
            cout << codeRemove << endl;
        }
        
        if (select == 4) {
            TheManifest.Print();
        }


    }
}

