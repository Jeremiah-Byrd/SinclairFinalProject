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
	int handsOfSpecies;
	int legsOfSpecies;
	bool animalHasGills;
	bool animalHasFins;
	bool animalHibernates;
	string species;
	bool animalIsAggressive;
	deque<string> predatorsOfAnimal;
	deque<string> preyOfAnimal;
	string locationOfAnimal;
	string nameOfAnimal;
	string biomeAnimalIsFound;
	int pawsOfAnimal;
	int depthAnimalIsFound;
	bool animalIsBlind;
};

//Prototypes
void exportingData(deque<Animal> &,deque<SeaAnimal> &,deque<LandAnimal> &,deque<Amphibian> &);
void changeAnimalRecord(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void viewInfo(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void addingAnAnimal(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void deletingAnAnimal(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void comparingAnimals(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void initializingSeaAnimalData(SeaAnimal &);
void initializingAnimalData(Animal &);
void initializingLandAnimalData(LandAnimal &);
void initializingAmphibianData(Amphibian &);
void introducingUserToProgram();
int getMenuChoice();

int main() {
	//Variables 
	deque<Animal> animalRecords;
	deque<LandAnimal> landAnimalRecords;
	deque<SeaAnimal> seaAnimalRecords;
	deque<Amphibian> AmphibianRecords;
	int userMenuChoice = 0;

	//Introducing the user to the program 
	introducingUserToProgram();

	do {

		//Getting the user menu choice
		userMenuChoice = getMenuChoice();

		//Looking for the users menu input
		switch (userMenuChoice)
		{
		case 1:
			//Adding an animal
			addingAnAnimal(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 2:
			//Deleting an animal 
			deletingAnAnimal(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 3:
			//Compare Animals 
			comparingAnimals(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 4:
			//View animals info 
			viewInfo(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 5:
			//Export binary file of animal information 
			exportingData(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 6:
			//change animals information 
			changeAnimalRecord(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;

		case 7:
			//Export the file information and close the program 
			exportingData(animalRecords, seaAnimalRecords, landAnimalRecords, AmphibianRecords);

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

/***********************************
PURPOSE:
Teaching user how to use the program
***********************************/
void introducingUserToProgram()
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
	cout << "\n4.View an animal(s) information";
	cout << "\n5.Export an animals information";
	cout << "\n6.Change an animal's records";
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

/********************
PURPOSE:
export inputted Data
********************/
void exportingData(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}

/**********************
PURPOSE:
Find an animals records
**********************/
void changeAnimalRecord(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}

/********************
PURPOSE:
Veiw animal(s) info
********************/
void viewInfo(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}

/********************
PURPOSE:
add an animal
********************/
void addingAnAnimal(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}

/********************
PURPOSE:
delete an animal
********************/
void deletingAnAnimal(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}

/********************
PURPOSE:
compare animals 
********************/
void comparingAnimals(deque<Animal>&, deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&)
{

}
