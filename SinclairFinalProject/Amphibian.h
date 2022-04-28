//Adding the animal class
#include"Animal.h"

#ifndef Amphibian_H
#define Amphibian_H

using namespace std;

//Making the class 
class Amphibian : public Animal {

private:
	//Private Variables 
	int numOfLegs;
	int numOfHands;
	bool hasGills;
	bool hasFins;
	bool hibernates;

	
public:
	/****************************
	GETTERS
	****************************/
	//Returning the number of legs 
	int getNumOfLegs() const {
		return numOfLegs;
	}

	//Returning the number of hands
	int getNumOfHands() const {
		return numOfHands;
	}

	//Returning if the species has gills 
	bool getGills() const {
		return hasGills;
	}

	//Returning if the species has fins 
	bool getFins() const {
		return hasFins;
	}

	//Returning if the species can hibernate
	bool getHibernates() const {
		return hibernates;
	}

	/**************************************
	SETTERS
	**************************************/
	//setting the number of legs 
	void getNumOfLegs(int inputtedLegs);

	//setting the number of hands
	void getNumOfHands(int inputtedHands);

	//setting if the species has gills 
	void getGills(bool inputtedIfGills);

	//setting if the species has fins 
	void getFins(bool inputtedIfFins);

	//settting if the species can hibernate
	void getHibernates(bool inputtedHibernates);

	/**************************************
	Constructors 
	**************************************/
	Amphibian(int inputtedLegs, int inputtedHands,bool InputtedGills, bool inputtedFins,bool inputtedHibernates,
		string animalLocation, string animalName, string animalSpecies, bool aggresiveAnswer,
		deque<string> animalPredators, deque<string> animalPrey) : Animal(animalLocation,animalName,animalSpecies,
			aggresiveAnswer,animalPredators,animalPrey) {
		//Initializing the variables 
		numOfLegs = inputtedLegs;
		numOfHands = inputtedHands;
		hasGills = InputtedGills;
		hasFins = inputtedFins;
		hibernates = inputtedHibernates;
	}

	Amphibian() : Animal() {
		//Initializing the variables 
		numOfLegs = 0;
		numOfHands = 0;
		hasGills = false;
		hasFins = false;
		hibernates = false;
	}

	//Printing out the object information 
	void displayInfo();
};

#endif