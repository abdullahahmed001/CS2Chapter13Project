/*
 * ArcticAnimal.cpp
 *
 *  Created on: Feb 23, 2023
 *      Author: abdullahahmed
 */

#include "ArcticAnimal.hpp"
#include <iostream>
#include <climits>
#include <string>
using namespace std;

ArcticAnimal::ArcticAnimal() {
	// TODO Auto-generated constructor stub
	this->initializeVars();

}
// Auto-generated destructor stub
ArcticAnimal::~ArcticAnimal() {

	this->initializeVars();
}

void ArcticAnimal::initializeVars(void)
{
	this->speciesName = "";
	this->averageWeight = 0;
	this->averageLength = 0;
	this->animalPopulation = 0;
	this->endangered = false;
	this->foodSource = "";
}


// getter functions

// This method returns the value of the species name attribute
string ArcticAnimal::getSpeciesName(void) const
{
	return this->speciesName;
}

// This method returns the value of the average weight attribute
int ArcticAnimal::getAverageWeight(void) const
{
	return this->averageWeight;
}

// This method returns the value of the average length attribute
int ArcticAnimal::getAverageLength(void) const
{
	return this->averageLength;
}

// This method returns the value of the animal population
int ArcticAnimal::getPopulation(void) const
{
	return this->animalPopulation;
}

// This method returns either true or false as its value for the endangered attribute
bool ArcticAnimal::getEndangered(void) const
{
	return this->endangered;
}

// This method returns the value of the food source attribute
string ArcticAnimal::getFoodSource(void) const
{
	return this->foodSource;
}

// setter functions

/*
 * Goal: Verify that person has the ability to set the species name
 * Name of the method: setSpeciesName
 * Inputs: string
 * Outputs: true: the name was set, false: there was a blank line
 * Conditionals: if the string has a blank line, return false. Otherwise, set the name and return it.
 */
bool ArcticAnimal::setSpeciesName(string myString)
{
	if (myString == "")
	{
		return false;
	}
	else
	{
		this->speciesName = myString;
		return true;
	}
}
/*
 * Goal: Verify that person has the ability to set the average weight
 * Name of the method: setAverageWeight
 * Inputs: integer
 * Outputs: true: the average was set, false: the integer was less than 0
 * Conditionals: If the integer is less than 0, return false. Otherwise, set the average weight and return it.
 */
bool ArcticAnimal::setAverageWeight(int myInt)
{
	if (myInt < 0)
	{
		return false;
	}
	else
	{
		this->averageWeight = myInt;
		return true;
	}
}
/*
 * Goal: Verify that person has the ability to set the average length
 * Name of the method: setAverageLength
 * Inputs: integer
 * Outputs: true: the average length was set, false: the integer was less than 0
 * Conditionals: If the integer is less than 0, return false. Otherwise, set the average length and return it.
 */
bool ArcticAnimal::setAverageLength(int myInt)
{
	if (myInt < 0)
	{
		return false;
	}
	else
	{
		this->averageLength = myInt;
		return true;
	}
}
/*
 * Goal: Verify that person has the ability to set the population
 * Name of the method: setPopulation
 * Inputs: integer
 * Outputs: true: the population was set, false: integer was less than 0
 * Conditionals: If the integer is less than 0, return false. Otherwise, set the population and return it.
 */
bool ArcticAnimal::setPopulation(int myInt)
{
	if (myInt < 0)
	{
		return false;
	}
	else
	{
		this->animalPopulation = myInt;
		return true;
	}
}
/*
 * Goal: Verify that the person has the ability to set the endangered population
 * Name of the method: setEndangered
 * Inputs: bool
 * Outputs: true: the population was endangered, false: the population wasn't endangered
 * Conditionals: If the animals is endangered, it will return true. Otherwise, it'll set to false
 */
bool ArcticAnimal::setEndangered(bool isEndangered)
{
	this->endangered = isEndangered;
	return true;
}
/*
 * Goal: Verify that person has the ability to set the food source
 * Name of the method: setFoodSource
 * Inputs: string
 * Outputs: true: the food source was set, false: the string had a blank line
 * Conditionals: If the string has a blank line, return false. Otherwise, set the food source and return it.
 */
bool ArcticAnimal::setFoodSource(string sourceOfFood)
{
	if (sourceOfFood == "")
	{
		return false;
	}
	else
	{
		this->foodSource = sourceOfFood;
		return true;
	}
}

void clearCIN(void)
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

