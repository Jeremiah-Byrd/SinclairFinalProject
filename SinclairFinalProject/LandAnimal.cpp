#include"LandAnimal.h"
using namespace std;

/**********************
CONSTRUCTOR
**********************/
LandAnimal::LandAnimal()
{
	//Private Variables 
	BiomeFound = "none";
	numOfLegs = 0;
	numOfHands = 0;
	numOfPaws = 0;
}

/***********************
SETTERS
***********************/
void LandAnimal::setBiomeFound(string inputtedBiome)
{
	BiomeFound = inputtedBiome;
}

void LandAnimal::setLegs(int inputtedLegs)
{
	numOfLegs = inputtedLegs;
}

void LandAnimal::setHands(int inputtedHands)
{
	numOfPaws = inputtedHands;
}

void LandAnimal::setPaws(int inputtedPaws)
{
	numOfPaws = inputtedPaws;
}

/******************************
PURPOSE:
Display object contents
******************************/
void LandAnimal::displayInfo()
{
	Animal::displayInfo();
	cout << "\nBiome animal is found:  " << BiomeFound;
	cout << "\nNumber of legs animal has: " << numOfLegs;
	cout << "\nNumber of hands animal has: " << numOfHands;
	cout << "\nNumber of paws animal has: " << numOfPaws << "\n";
}
