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
	/******************************
	CONSTRUCTORS
	******************************/
	SeaAnimal(int inputtedDepth,bool inputtedGills,bool inputttedFins,bool inputtedBlind,string animalLocation,string animalName, string animalSpecies, bool aggresiveAnswer,
		deque<string> animalPredators, deque<string> animalPrey) : Animal(animalLocation, animalName, animalSpecies,
			aggresiveAnswer, animalPredators, animalPrey) {
		//Initializing the variables 
		depthAnimalIsFound = inputtedDepth;
		hasGills = inputtedGills;
		hasFins = inputttedFins;
		isBlind = inputtedBlind;
	}

	SeaAnimal() : Animal() {

		/****************************
		Initializing data members 
		with defualt values
		****************************/
		depthAnimalIsFound = 0;
		hasGills=false;
		hasFins=false;
		isBlind=false;
	}

	/******************************
	GETTERS
	******************************/
	int getDepth() const {
		return depthAnimalIsFound;
	}


	bool getGills() const {
		return hasGills;
	}


	bool getFins() const {
		return hasFins;
	}


	bool getIfBlind() const {
		return isBlind;
	}


	/******************************
	SETTERS
	******************************/
	void setDepth(int depth);

	void setGills(int gills);

	void setFins(int fins);

	void setIfBlind(int blind);

	/******************************
	PURPOSE:
	Display object contents 
	******************************/
	void displayInfo();

};

#endif

