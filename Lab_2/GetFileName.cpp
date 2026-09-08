#include <fstream>
#include <cstdlib>  
#include "GetfileName.h"
using namespace std;

string GetfileName(int argc, char* argv[]) {

	//create an empty string to hold the filename
	string baseFileName = "";
	string filename = "";


	while (1) {
		//promt the user 
		cout << "Enter File name: " << endl;
		cin >> baseFileName;

		// add .in to input file name 
		fileName = baseFileName + ".in";

		//file handler
		ifstream file;
		file.open(fileName);

		//checking is file can be opened
		if (file.is_open()) {
			cout << "File successfully opened" << endl;
			//close the file 
			file.close();
			return baseFileName;
		}//if 
		else {
			cout << "File cannot be opened, try again..." << endl;
		}//else
	}//while
}//getfilename

bool isHarshad(int fileNum) {
	int tempNum = fileNum;
	int sum = 0;
	int lastDig = 0;

	//0 and negative number cant be a hashard 
	if (fileNum <= 0) {
		return false;
	}//if

	while (1) {
		//finds the last diget
		lastDig = tempNum % 10;
		sum = lastDig + sum;

		//divide current number by 10 to remove the last diget
		tempNum = tempNum / 10;

		//check if all the numbers have been summed
		if (tempNum <= 0) {
			if ((fileNum % sum) == 0) {
				return true;
			}//if
			else {
				return false;
			}// else
		}// if

	}//while
}// isHashard