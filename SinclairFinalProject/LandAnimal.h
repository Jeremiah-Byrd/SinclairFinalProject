//Adding the animal class
#include"Animal.h"

#ifndef LandAnimal_H
#define LandAnimal_H


using namespace std;


//Making the class 
class LandAnimal : public Animal {

private:
	//Private Variables 
	string BiomeFound;
	int numOfLegs;
	int numOfHands;
	int numOfPaws;
	
public:
	/***********************
	CONSTRUCTOR
	***********************/
	LandAnimal(string inputtedBiome, int inputtedLegs, int inputtedHands,
		int inputtedPaws, string animalLocation, string animalName, string animalSpecies, bool aggresiveAnswer,
		deque<string> animalPredators, deque<string> animalPrey) : Animal(animalLocation, animalName, animalSpecies,
			aggresiveAnswer, animalPredators, animalPrey) {

		//Inilized the land animal variables 
		BiomeFound = inputtedBiome;
		numOfLegs = inputtedLegs;
		numOfHands = inputtedHands;
		numOfPaws = inputtedPaws;
	}

	LandAnimal();
	/***********************
	GETTERS
	***********************/
	string getBiomeFound() const {
		return BiomeFound;
	}

	int getLegs() const {
		return numOfLegs;
	}

	int getHands() const {
		return numOfHands;
	}

	int getPaws() const {
		return numOfPaws;
	}
	/***********************
	SETTERS
	***********************/
	void setBiomeFound(string inputtedBiome);

	void setLegs(int inputtedLegs);

	void setHands(int inputtedHands);

	void setPaws(int inputtedPaws);
};

#endif