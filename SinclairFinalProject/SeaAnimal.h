//Adding the animal class
#include"Animal.h"

#ifndef SeaAnimal_H
#define SeaAnimal_H

using namespace std;

//Making the class 
class SeaAnimal : public Animal{

	
private:
	//private variables 
	int depthAnimalIsFound;
	bool hasGills;
	bool hasFins;
	bool isBlind;

public:
	//All Parameter constructor 
	SeaAnimal(int depth, bool gills, bool fins, bool blind) : Animal() {
		//Intializing the member variables 
		depthAnimalIsFound = depth;
		hasGills = gills;
		hasFins = fins;
		isBlind = blind;
	}

	//Defualt Constructor 
	SeaAnimal() {
		//Initializing member variables 
		depthAnimalIsFound = userIntValueChoice("What depth is this animal found at: ");
		hasGills = userBoolValueChoice("Does this aquatic animal have gills(1. for yes and 0. for no)");
		hasFins = userBoolValueChoice("Does this aquatic animal have fins(1. for yes and 0. for no)");
		isBlind = userBoolValueChoice("Is this aquatic animal blind(1. for yes and 0. for no)");
	}

	
};

#endif

