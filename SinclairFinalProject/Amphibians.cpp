#include"Amphibian.h"
using namespace std;

/**************************************
SETTERS
**************************************/

void Amphibian::getNumOfLegs(int inputtedLegs) 
{
	numOfLegs = inputtedLegs;
}

void Amphibian::getNumOfHands(int inputtedHands)
{
	numOfHands = inputtedHands;
}

void Amphibian::getGills(bool inputtedIfGills)
{
	hasGills = inputtedIfGills;
}

void Amphibian::getFins(bool inputtedIfFins)
{
	hasFins = inputtedIfFins;
}

void Amphibian::getHibernates(bool inputtedHibernates)
{
	hibernates = inputtedHibernates;
}



/***************************
PURPOSE:
Display object data members
***************************/
void Amphibian::displayInfo(){
	cout << "\nNumber of legs: " << numOfLegs;
	cout << "\nNumber of hands: " << numOfHands;
	cout << "\nDoes this animal have gills: "; convertingBoolValue(hasGills);
	cout << "\nDoes this animal have fins: "; convertingBoolValue(hasFins);
	cout << "\nDoes this animal hibernate: "; convertingBoolValue(hibernates);
	Animal::displayInfo();
}
