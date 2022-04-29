#include"SeaAnimal.h"
using namespace std;

/******************************
	SETTERS
******************************/
void SeaAnimal::setDepth(int inputtedDepth)
{
	depthAnimalIsFound = inputtedDepth;
}

void SeaAnimal::setGills(int inputtedGills)
{
	hasGills = inputtedGills;
}

void SeaAnimal::setFins(int inputtedFins)
{
	hasFins = inputtedFins;
}

void SeaAnimal::setIfBlind(int inputtedBlind)
{
	isBlind = inputtedBlind;
}

/******************************
PURPOSE:
Display object contents
******************************/
void SeaAnimal::displayInfo()
{
    Animal::displayInfo();
	cout << "\nDepth animal is found: " << depthAnimalIsFound;
	cout << "\nDoes this animal  have gills: "; convertingBoolValue(hasGills);
	cout << "\nDoes this animal have fins: "; convertingBoolValue(hasFins);
	cout << "\nIs this animal blind: "; convertingBoolValue(isBlind);
}
