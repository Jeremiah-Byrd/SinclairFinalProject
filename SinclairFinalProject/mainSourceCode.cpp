//Link Files 
#include"Amphibian.h"
#include"Animal.h"
#include"LandAnimal.h"
#include"SeaAnimal.h"
using namespace std;

/********************
STRUCTURE 
********************/
struct AnimalInfo
{
	int numOfLegs;
	int numOfHands;
	bool hasGills;
	bool hasFins;
	bool hibernates;
	string species;
	bool aggresive;
	deque<string> predators;
	deque<string> prey;
	string location;
	string name;
	string BiomeFound;
	int numOfLegs;
	int numOfHands;
	int numOfPaws;
	int depthAnimalIsFound;
	bool hasGills;
	bool hasFins;
	bool isBlind;
};

//Prototypes
void initializingSeaAnimalData(Animal &);
void initializingAnimalData(Animal &);
void initializingLandAnimalData(Animal &);
void initializingAmphibianData(Animal &);
int getMenuChoice();

int main() {
	//Variables 
	int userMenuChoice;

	do {

		//Getting the user menu choice
		userMenuChoice = getMenuChoice();

		//Looking for the users menu input
		switch (userMenuChoice)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;

		case 7:

			break;
		}
	} while (userMenuChoice != 7);
}

/********************
PURPOSE:
initializing the sea 
animal class
********************/
void initializingSeaAnimalData(Animal&)
{

}

/********************
PURPOSE:
initial animal class
********************/
void initializingAnimalData(Animal&)
{

}

/********************
PURPOSE:
initialize land animal
class
********************/
void initializingLandAnimalData(Animal&)
{

}

/********************
PURPOSE:
initialize amphibian 
class
********************/
void initializingAmphibianData(Animal&)
{

}

/********************
PURPOSE:
Get user menu choice
********************/
int getMenuChoice()
{
	//Variables 
	int userInputtedMenuChoice;

	//printed menu  
	cout << "Menu:\n";
	cout << "\n1.Add An Animal";
	cout << "\n2.Delete An Animal";
	cout << "\n3.Compare Animals";
	cout << "\n4.View an animal's information";
	cout << "\n5.Export an animals information";
	cout << "\n6.Veiw all animals of a certain species";
	cout << "\n7.End program and save animals to a file";

	//Getting the menu choice 
	cout << "\n\nEnter Menu Choice: ";
	while (!(cin >> userInputtedMenuChoice)||cin.fail()||userInputtedMenuChoice < 1 || userInputtedMenuChoice > 7)
	{
		cout << "\nERROR: Please input a menu choice that is between 1-6 ";
		cin.clear();
		cin.ignore();
		cout << "\n\nEnter Menu Choice: ";
	}

	//Returning the menu choice
	return userInputtedMenuChoice;
}
