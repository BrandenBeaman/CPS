// lab2 main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>
#include "harshad.h"

using namespace std;

int main(int argc, char* argv[])
{
	//get the file name from the command line
	string baseName;
	baseName = GetFileName(argc, argv);

	//declare a variable to hold the file handle
	string line;
	ifstream fileInput;
	ofstream fileOutput;

	int fileNum = 0;

	//open the file given by the user to read the numbers from
	fileInput.open(baseName + ".in");
	fileOutput.open(baseName + ".out");

	//read a line of text from the file and operate on that line
	if (fileInput.is_open()) {

		// while there is data in the file, store number from current line into fileNum, cant use getliine because it will read the line but then using >> to assign fileNum will not work because the line has already been read and itll skip to the next line
		while (getline(fileInput, line)) {

			fileNum = stoi(line);

			if (isHarshad(fileNum)) {
				fileOutput << fileNum << " is a Harshad number" << endl;
			}//if
			else {
				fileOutput << fileNum << " is not a Harshad number" << endl;
			}//else
		}//while()
		fileInput.close();
		fileOutput.close();

	} //if

	return 0;
} //main() 