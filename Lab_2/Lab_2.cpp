// lab2 main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>
#include "harshad.h"

using namespace std;

int main(int argc, char* argv[])
{   
	string line;
    string baseName;
    int fileNum = 0;

	//get the file name from the command line
	baseName = GetFileName(argc, argv);

	//file handle for input and output files
	ifstream fileInput;
	ofstream fileOutput;

	//open the file given by the user to read the numbers from, concadnate with .in and .out to create the input and output file names
	fileInput.open(baseName + ".in");
	fileOutput.open(baseName + ".out");

	//if the file was opened successfully read the numbers from the file and check if they are harshad numbers or not, then write the result to the output file
	if (fileInput.is_open()) {

		while (getline(fileInput, line)) {

			//convert the line to an integer
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