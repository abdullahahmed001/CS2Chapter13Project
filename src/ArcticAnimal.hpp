/*
 * ArcticAnimal.hpp
 *
 *  Created on: Feb 23, 2023
 *      Author: abdullahahmed
 */

#ifndef ARCTICANIMAL_HPP_
#define ARCTICANIMAL_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
void clearCIN();

class ArcticAnimal {
public:


	void initializeVars(void);
	ArcticAnimal();
	virtual ~ArcticAnimal();
	string getSpeciesName() const;
	int getAverageWeight() const;
	int getAverageLength() const;
	int getPopulation() const;
	bool getEndangered() const;
	string getFoodSource() const;

	// Mutators
	bool setSpeciesName(string);
	bool setAverageWeight(int);
	bool setAverageLength(int);
	bool setPopulation(int);
	bool setEndangered(bool);
	bool setFoodSource(string);


private:

	string speciesName;
	int averageWeight;
	int averageLength;
	int animalPopulation;
	bool endangered;
	string foodSource;

};



#endif /* ARCTICANIMAL_HPP_ */
