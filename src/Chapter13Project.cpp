//============================================================================
// Name        : Chapter13Project.cpp
// Author      : Abdullah Ahmed
// Version     :
// Copyright   : Don't steal my program
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <climits>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "ArcticAnimal.hpp"
using namespace std;


int main() {

	char userChoice = '\0';
	ifstream inputFile;
	string fileName;
	string inputRecord;
	string tempString;

	vector<ArcticAnimal*> myArcticAnimals; // Creates a vector of ArcticAnimal object pointers

	// Display the menu to the user that allows them to do any of the following until they press x
	while (userChoice != 'x') {
		cout << "1) Enter the name of and read a CSV file" << endl;
		cout << "2) Clear the vector and all Animals from memory" << endl;
		cout << "3) Print out the vector of animals" << endl;
		cout << "x) Exit the program" << endl << endl;

		cout << "Select a menu option: " << endl;
		cin >> userChoice;

		switch (userChoice) {
		// First case to prompt the user to enter a file and if the file isn't successfully opened, display an error message
		// Otherwise, read the CSV file
		case '1': {
			cout << "Enter a file to open: " << endl;
			cin >> fileName;

			clearCIN();
			inputFile.open(fileName);
			if (inputFile.fail()) {
				cout << "Error opening file" << endl;
				break;
			} else {
				cout << "File opened successfully" << endl;
				cout << "Now reading the file" << endl << endl;

				string temp = "";
				while (!inputFile.eof()) {
					ArcticAnimal* myArcticAnimal = nullptr;   // A pointer variable named myArcticAnimal which stores nullptr as its value
					myArcticAnimal = new ArcticAnimal;		// Dynamically allocates a new ArcticAnimal and stores the address of it into myArcticAnimal
					getline(inputFile, inputRecord);
					stringstream strStream(inputRecord);
					getline(strStream, temp, ',');
					 if (!myArcticAnimal->setSpeciesName(temp))
					 {
						 cout << "Error Invalid Record: Invalid Species Name" << endl;
					 }
					getline(strStream, temp, ',');
					if (!myArcticAnimal->setAverageWeight(stoi(temp)))
					{
						cout << "Error Invalid Record: Invalid Species Name" << endl;
					}

					getline(strStream, temp, ',');
					if(!myArcticAnimal->setAverageLength(stoi(temp)))
					{
						cout << "Error Invalid Record: Invalid Average Length" << endl;
					}
					getline(strStream, temp, ',');
					if (!myArcticAnimal->setPopulation(stoi(temp)))
					{
						cout << "Error Invalid Record: Invalid Population" << endl;
					}
					getline(strStream, temp, ',');
					if (!myArcticAnimal->setEndangered((bool)stoi(temp)))
					{
						cout << "Error Invalid Record: Invalid Endangered Population" << endl;
					}
					getline(strStream, temp, ',');
					if(!myArcticAnimal->setFoodSource(temp))
					{
						cout << "Error Invalid Record: Invalid Food Source" << endl;
					}
					myArcticAnimals.push_back(myArcticAnimal);

				}

			}
			cout << endl;
			cout << endl;
			break;
		}
		// Clear the vector and all animals from memory
		case '2': {
			for(unsigned i = 0; i < myArcticAnimals.size(); i++)
			{
				delete myArcticAnimals[i];
				myArcticAnimals[i] = nullptr;
			}
			myArcticAnimals.clear();
			break;
		}
		// Print out the vector of animals
		case '3' : {

			cout << setw(30) << "Name" << setw(30) << "Weight" << setw(30) << "Length" << setw(30) << "Population" << setw(30) << "Endangered" << setw(30) << "Food Source" << endl;
			cout << setw(30) << "====" << setw(30) << "======" << setw(30) << "======" << setw(30) << "==========" << setw(30) << "==========" << setw(30) << "===========" << endl;

			for (unsigned i = 0; i < myArcticAnimals.size(); i++) {
				cout << setw(30) << right << myArcticAnimals[i]->getSpeciesName() << setw(30) << right << myArcticAnimals[i]->getAverageWeight() << setw(30) << right << myArcticAnimals[i]->getAverageLength() << setw(30) << right
				<< myArcticAnimals[i]->getPopulation() << setw(30) << right << (myArcticAnimals[i]->getEndangered() ? "Yes" : "No") << setw(30) << right << myArcticAnimals[i]->getFoodSource() << endl;
			}


			break;
		}

		// Exit the program and close the file
		case 'x': {
			for(ArcticAnimal* myArcticAnimal : myArcticAnimals)
			{
				delete myArcticAnimal;
				myArcticAnimal = nullptr;
			}
			cout << "Program ending, have a nice day!" << endl;
			break;
		}

		default: {
			cout << "You entered an invalid menu option" << endl;
			break;
		}
		inputFile.close();


		}
	}

	return 0;
}
