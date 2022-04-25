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
	SeaAnimal(int depth, bool gills, bool fins, bool blind) {
		//Intializing the member variables 
		depthAnimalIsFound = depth;
		hasGills = gills;
		hasFins = fins;
		isBlind = blind;
	}

	
};

#endif

