#include"Amphibian.h"
using namespace std;

/**************************************
SETTERS
**************************************/

void Amphibian::setNumOfLegs(int inputtedLegs) 
{
	numOfLegs = inputtedLegs;
}

void Amphibian::setNumOfHands(int inputtedHands)
{
	numOfHands = inputtedHands;
}

void Amphibian::setGills(bool inputtedIfGills)
{
	hasGills = inputtedIfGills;
}

void Amphibian::setFins(bool inputtedIfFins)
{
	hasFins = inputtedIfFins;
}

void Amphibian::setHibernates(bool inputtedHibernates)
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
