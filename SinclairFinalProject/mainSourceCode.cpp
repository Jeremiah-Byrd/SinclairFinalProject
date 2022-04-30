//Link Files 
#include<Windows.h>
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
void exportingData(deque<SeaAnimal> &,deque<LandAnimal> &,deque<Amphibian> &);
void changeAnimalRecord(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void viewInfo(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void addingAnAnimal(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void deletingAnAnimal(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void comparingAnimals(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void printingAllData(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void printingSpecificSpecies(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void printNumberOfAnimalsInProgram(deque<SeaAnimal>&, deque<LandAnimal>&, deque<Amphibian>&);
void printingALandAnimal(string&, deque<LandAnimal>&);
void printingASeaAnimal(string&, deque<SeaAnimal>&);
void printingAnAmphibian(string &, deque<Amphibian> &);
int searchingForALandAnimal(string &,deque<LandAnimal> &);
int searchingForASeaAnimal(string &, deque<SeaAnimal> &);
int searchingForAnAmphibian(string &, deque<Amphibian> &);
void selectingMenuOptionForLandAnimals(int&, deque<LandAnimal>&);
void selectingMenuOptionForSeaAnimals(int&, deque<SeaAnimal>&);
void selectingMenuOptionForAmphibians(int&, deque<Amphibian>&);
void initializingSeaAnimalData(SeaAnimal &);
void initializingLandAnimalData(LandAnimal &);
void initializingAmphibianData(Amphibian &);
void introducingUserToProgram();
int getMenuChoice();

int main() {
	//Variables 
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
			addingAnAnimal(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 2:
			//Deleting an animal 
			deletingAnAnimal(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 3:
			//Compare Animals 
			comparingAnimals(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 4:
			//View animals info 
			viewInfo(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 5:
			//change animals information 
			changeAnimalRecord(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 6:
			//Printing number of animals in the program 
			printNumberOfAnimalsInProgram(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			break;
		case 7:
			//Export the file information and close the program 
			exportingData(seaAnimalRecords, landAnimalRecords, AmphibianRecords);

			//Telling user we saved the data 
			cout << "\nData Saved";
			Sleep(3000);

			break;
		}
	} while (userMenuChoice != 7);
}

/********************
PURPOSE:
initializing the sea 
animal class
********************/
void initializingSeaAnimalData(deque<SeaAnimal>& animals)
{
	//Making the new record 
	SeaAnimal record(initializingIntVariable("\nWhat is the depth this animal is found: "),initializingBoolVariable("\nDoes this animal have gills(1. Yes, 2. No): ")
		,initializingBoolVariable("\nDoes this animal have fins(1. Yes, 2. No): "),initializingBoolVariable("\nIs this animal blind(1. Yes, 2. No): ")
		,initializingStringVariable("\nWhere is this animal located: "),initializingStringVariable("\nWhat is this animals name: "),
		initializingStringVariable("\nWhat species is this animal apart of: "),initializingBoolVariable("\nIs this animal aggressive(1. Yes, 2. No): "),
		initializingStringDequeVariable("\nWhat is this animal's predator: "),initializingStringDequeVariable("\nWhat is this animal's prey: "));
	
	//Clearing screen
	for (int i = 0; i < 25; i++)
	{
		cout << endl;
	}

	//Adding it to the records
	animals.push_back(record);
	
}

/********************
PURPOSE:
initialize land animal
class
********************/
void initializingLandAnimalData(deque<LandAnimal>& animals)
{
	//Making the new record 
	LandAnimal record(initializingStringVariable("\nWhat biome is this animal found: "), initializingIntVariable("\nhow many legs does this animal have: ")
		, initializingIntVariable("\nHow many hands does this animal have: "), initializingIntVariable("\nHow many paws does this animal have: ")
		, initializingStringVariable("\nWhere is this animal located: "), initializingStringVariable("\nWhat is this animals name: "),
		initializingStringVariable("\nWhat species is this animal apart of: "), initializingBoolVariable("\nIs this animal aggressive(1. Yes, 2. No): "),
		initializingStringDequeVariable("\nWhat is this animal's predator: "), initializingStringDequeVariable("\nWhat is this animal's prey: "));

	//Clearing screen
	for (int i = 0; i < 25; i++)
	{
		cout << endl;
	}

	//Adding it to the records
	animals.push_back(record);
}

/********************
PURPOSE:
initialize amphibian 
class
********************/
void initializingAmphibianData(deque<Amphibian>& animals)
{
	//Making the new record 
	Amphibian record(initializingIntVariable("\nHow many legs does this animal have: "), initializingIntVariable("\nHow many hands does this animal have: ")
		, initializingBoolVariable("\nDoes this animal have gills(1. Yes, 2. No): "), initializingBoolVariable("\nDoes this animal have fins(1. Yes, 2. No): ")
		,initializingBoolVariable("\nDoes this animal hibernate(1. Yes, 2. No): "), initializingStringVariable("\nWhere is this animal located: "), initializingStringVariable("\nWhat is this animals name: "),
		initializingStringVariable("\nWhat species is this animal apart of: "), initializingBoolVariable("\nIs this animal aggressive(1. Yes, 2. No): "),
		initializingStringDequeVariable("\nWhat is this animal's predator: "), initializingStringDequeVariable("\nWhat is this animal's prey: "));

	//Clearing screen
	for (int i = 0; i < 25; i++)
	{
		cout << endl;
	}

	//Adding it to the records
	animals.push_back(record);

}

/***********************************
PURPOSE:
Teaching user how to use the program
***********************************/
void introducingUserToProgram()
{
	//Printing introduction
	cout << "\nWelcome user to the Miami Valley Animal Instuition(MVAI) App";
	cout << "\nThis is an exciting app used to store, export, and veiw relationships between animals";
	cout << "\nFeel free to explore the app and conduct research on these animals as you see fit";
	cout << "\nEnjoy!\n\n";
	//Sleep(15000);
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
	cout << "\n\nMenu:\n";
	cout << "\n1.Add An Animal";
	cout << "\n2.Delete An Animal";
	cout << "\n3.Compare Animals";
	cout << "\n4.View an animal(s) information";
	cout << "\n5.Change an animal's records";
	cout << "\n6.Number of animals in the program";
	cout << "\n7.End program and save animals to a file";

	//Getting the menu choice 
	cout << "\n\nEnter Menu Choice: ";
	while (!(cin >> userInputtedMenuChoice)||cin.fail()||userInputtedMenuChoice < 1 || userInputtedMenuChoice > 7)
	{
		cout << "\nERROR: Please input a menu choice that is between 1-7 ";
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
void exportingData(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Making the file 
	fstream binaryFile("MVAI_App.Data", ios::out | ios::binary);

	//Checking if file is open  
	if (!binaryFile) {
		cout << "\nCannot open file!" << endl;
	}
	else
	{//Clearing the eof 
		binaryFile.clear();

	//Going to the beginning of the file 
		binaryFile.seekp(0);

	//Adding the records to file 
		binaryFile.write((char *)&seaAnimals, sizeof(seaAnimals));
		binaryFile.write((char*)&landAnimals, sizeof(landAnimals));
		binaryFile.write((char*)&amphibians, sizeof(amphibians));
	}

	//Closing the file 
	binaryFile.close();
}

/********************
PURPOSE:
add an animal
********************/
void addingAnAnimal(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	int menuChoice;

	//Menu for animl adding options
	cout << "\nWhat type of animal would you like to add: \n";
	cout << "\n1. Sea Animal";
	cout << "\n2. Land Animal";
	cout << "\n3. Amphibian\n";

	//Asking user for menu choice
	cout << "\nEnter menu choice: ";
	while (!(cin >> menuChoice)|| cin.fail()|| menuChoice < 1 || menuChoice > 3)
	{
		cout << "\nERROR: Please enter a valid number";
		cin.clear();
		cin.ignore();
		cout << "\nEnter menu choice: ";
	}

	//Searching for menu option 
	switch (menuChoice)
	{
	case 1:
		//User choice was sea animal 
		initializingSeaAnimalData(seaAnimals);

		break;
	case 2:

		//User choice was a land animal 
		initializingLandAnimalData(landAnimals);
		break;
	case 3:

		//User choice was an amphibian
		initializingAmphibianData(amphibians);
		break;
	}
}

/********************
PURPOSE:
Find a user input in
land animal 
********************/
int searchingForALandAnimal(string& animalToFind, deque<LandAnimal>& landAnimals)
{
	//Variables
	int positionFound = -1;

	//Looping through the deque to find the position
	for (unsigned int i = 0; i < landAnimals.size(); i++)
	{

		//If the deque element equal animal to find 
		if (animalToFind == landAnimals[i].getName())
		{

			//Return the found position 
			return i;
			break;

		}
	}

	//Returning -1 if not  found
	return positionFound;
}

/********************
PURPOSE:
Find a user input in
sea animal deque
********************/
int searchingForASeaAnimal(string& animalToFind, deque<SeaAnimal>& seaAnimals)
{
	//Variables
	int positionFound = -1;

	//Looping through the deque to find the position
	for (unsigned int i = 0; i < seaAnimals.size(); i++)
	{

		//If the deque element equal animal to find 
		if (animalToFind == seaAnimals[i].getName())
		{

			//Return the found position 
			return i;
			break;

		}
	}

	//Returning -1 if not  found
	return positionFound;
}

/********************
PURPOSE:
Find a user input in 
amphibian deque
********************/
int searchingForAnAmphibian(string & animalToFind, deque<Amphibian> & amphibians)
{
	//Variables
	int positionFound = -1;

	//Looping through the deque to find the position
	for (unsigned int i = 0; i < amphibians.size(); i++)
	{

		//If the deque element equal animal to find 
		if (animalToFind == amphibians[i].getName())
		{

			//Return the found position 
			return i;
			break;

		}
	}

	//Returning -1 if not  found
	return positionFound;
}

/**********************
PURPOSE:
select a land animal's
menu option 
**********************/
void selectingMenuOptionForLandAnimals(int & foundPosition, deque<LandAnimal> &landAnimals)
{
	//Variables 
	int userMenuChoice;

	//Printing menu options 
	cout << "\n1. Change Biome";
	cout << "\n2. Change number of legs";
	cout << "\n3. Change number of hands";
	cout << "\n4. Change number of paws";

	//Getting menu option 
	cout << "\nEnter menu choice: ";
	while (!(cin >> userMenuChoice) || cin.fail() || userMenuChoice < 1 || userMenuChoice > 4)
	{
		cout << "\nERROR: please enter a number 1-4";
		cin.clear();
		cin.ignore();
		cout << "\nEnter menu choice: ";
	}

	//Searching for menu action 
	switch (userMenuChoice)
	{
	case 1:
		//Set depth
		landAnimals[foundPosition].setBiomeFound(initializingStringVariable("*New* Where is this animal found: "));

		break;
	case 2:
		//Set blind
		landAnimals[foundPosition].setLegs(initializingIntVariable("*New* How many legs does this animal have: "));

		break;
	case 3:
		//Adding if the animal has gills
		landAnimals[foundPosition].setHands(initializingIntVariable("*New* How many hands does this animal have: "));

		break;
	case 4:
		//Adding if the animal has fins 
		landAnimals[foundPosition].setPaws(initializingIntVariable("*New* How many paws do animals have: "));

		break;
	}
}

/********************
PURPOSE:
select a sea animal's
menu option 
********************/
void selectingMenuOptionForSeaAnimals(int & foundPosition, deque<SeaAnimal> &seaAnimals)
{
	//Variables 
	int userMenuChoice;

	//Printing menu options 
	cout << "\n1. depth animal is found";
	cout << "\n2. Change if animal is blind";
	cout << "\n3. Change if the animal has gills";
	cout << "\n4. Change if the animal has fins";

	//Getting menu option 
	cout << "\nEnter menu choice: ";
	while (!(cin >> userMenuChoice) || cin.fail()||userMenuChoice < 1 || userMenuChoice > 4)
	{
		cout << "\nERROR: please enter a number 1-4";
		cin.clear();
		cin.ignore();
		cout << "\nEnter menu choice: ";
	}

	//Searching for menu action 
	switch (userMenuChoice)
	{
	case 1:
		//Set depth
		seaAnimals[foundPosition].setDepth(initializingIntVariable("\n*New* What is the depth the animal is found: "));

		break;
	case 2:
		//Set blind
		seaAnimals[foundPosition].setIfBlind(initializingBoolVariable("\n*New* Is this animal blind(1. for yes 2. for no): "));

		break;
	case 3:
		//Adding if the animal has gills
		seaAnimals[foundPosition].setGills(initializingBoolVariable("\n*New* Does this animal have gills(1. for yes 2. for no): "));

		break;
	case 4:
		//Adding if the animal has fins 
		seaAnimals[foundPosition].setFins(initializingBoolVariable("\n*New* Does this animal have fins(1. for yes 2. for no): "));

		break;
	}
}

/************************************
PURPOSE:
select an amphibian menu option
*************************************/
void selectingMenuOptionForAmphibians(int &foundPosition, deque<Amphibian>& amphibians)
{
	//Variables 
	int userMenuChoice;

	//Printing menu options 
	cout << "\n1. change number of legs";
	cout << "\n2. Change number of hands";
	cout << "\n3. Change if the animal has gills";
	cout << "\n4. Change if the animal has fins";
	cout << "\n5. Change if the animal hibernates";

	//Getting menu option 
	cout << "\nEnter menu choice: ";
	while (!(cin >> userMenuChoice)||cin.fail()||userMenuChoice>5||userMenuChoice<1)
	{
		cout << "\nERROR: please enter a number 1-5";
		cin.clear();
		cin.ignore();
		cout << "\nEnter menu choice: ";
	}

	//Searching for menu action 
	switch (userMenuChoice)
	{
	case 1:
		//Changing nuber of legs
		amphibians[foundPosition].setNumOfLegs(initializingIntVariable("*New* How many legs does this animal have: "));

		break;
	case 2:
		//Changing number of hands
		amphibians[foundPosition].setNumOfHands(initializingIntVariable("*New* How many hands does this animal have: "));

		break;
	case 3:
		//Adding if the animal has gills
		amphibians[foundPosition].setGills(initializingBoolVariable("*New* Does this animal have gills(1. for yes 2. for no): "));

		break;
	case 4:
		//Adding if the animal has fins 
		amphibians[foundPosition].setFins(initializingBoolVariable("*New* Does this animal have fins(1. for yes 2. for no): "));

		break;
	case 5:
		//Adding if the animal hibernates
		amphibians[foundPosition].setHibernates(initializingBoolVariable("*New* Does this animal hibernates(1. for yes 2. for no): "));

		break;
	}
}

/********************
PURPOSE:
Veiw animal(s) info
********************/
void viewInfo(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	int menuChoice;
	string animalSearched;
	int speciesSelected = 9;

	//Menu for animl adding options
	cout << "\nWhat type of animal would you like to view: \n";
	cout << "\n1. All Records";
	cout << "\n2. Entire Species";
	cout << "\n3. Specific Animal\n";

	//Asking user for menu choice
	cout << "\nEnter menu choice: ";
	while (!(cin >> menuChoice) || cin.fail() || menuChoice < 1 || menuChoice > 3)
	{
		cout << "\nERROR: Please enter a valid number";
		cin.clear();
		cin.ignore();
		cout << "\nEnter menu choice: ";
	}

	//Searching for menu option 
	switch (menuChoice)
	{
	case 1:
		//User choice was print all
		printingAllData(seaAnimals,landAnimals,amphibians);

		break;
	case 2:
		//User choice was a land animal 
		printingSpecificSpecies(seaAnimals,landAnimals,amphibians);

		break;
	case 3:
		//Asking user who they want to print
		while (speciesSelected > 3 || speciesSelected < 1)
		{
			cout << "\nPLEASE ENTER: 1 for Sea Animal, 2 for Land Animal, 3 for Amphibians";
			speciesSelected = initializingIntVariable("\nWhat type of animal is this animal: ");
		}

		//Asking user for name to be searched
		animalSearched = initializingStringVariable("\nWhat is the animals name: ");

		//Finding specific species code
		switch (speciesSelected)
		{
		case 1:
			//User choice sea animal 
			printingASeaAnimal(animalSearched, seaAnimals);

			break;
		case 2:
			//User choice land animal 
			printingALandAnimal(animalSearched, landAnimals);

			break;
		case 3:
			//User choice amphibian 
			printingAnAmphibian(animalSearched, amphibians);

			break;
		}

		break;
	}
}

/********************
PURPOSE:
Printing land animals 
********************/
void printingALandAnimal(string& userSearch, deque<LandAnimal>& landAnimals)
{
	//Finding were animal is found 
	int foundPosition = searchingForALandAnimal(userSearch, landAnimals);

	//If position found is > -1
	if (foundPosition > -1)
	{
		//Print display info 
		landAnimals[foundPosition].displayInfo();
	}
	else
	{
		//Print Error message 
		cout << "\nERROR: Animal not found";
	}
}

/********************
PURPOSE:
print a sea animal 
********************/
void printingASeaAnimal(string& userSearch, deque<SeaAnimal>& seaAnimals)
{
	//Finding were animal is found 
	int foundPosition = searchingForASeaAnimal(userSearch, seaAnimals);

	//If position found is > -1
	if (foundPosition > -1)
	{
		//Print display info 
		seaAnimals[foundPosition].displayInfo();
	}
	else
	{
		//Print Error message 
		cout << "\nERROR: Animal not found";
	}
}

/********************
PURPOSE:
Print an amphibian 
********************/
void printingAnAmphibian(string &userSearch, deque<Amphibian> &Amphibians)
{
	//Finding were animal is found 
	int foundPosition = searchingForAnAmphibian(userSearch, Amphibians);

	//If position found is > -1
	if (foundPosition > -1)
	{
		//Print display info 
		Amphibians[foundPosition].displayInfo();
	}
	else
	{
		//Print Error message 
		cout << "\nERROR: Animal not found";
	}
}	

/********************
PURPOSE:
printing all animals
********************/
void printingAllData(deque<SeaAnimal>&seaAnimals, deque<LandAnimal>&landAnimals, deque<Amphibian>&amphibians)
{
	//Printing sea animals 
	cout << "\nSea Animals:\n";
	cout << "_________________________________________\n";
	for (unsigned int i = 0; i < seaAnimals.size(); i++)
	{
		//Displaying info
		seaAnimals[i].displayInfo();
	}

	//Printing land animals 
	cout << "\n\nLand Animals:\n";
	cout << "_________________________________________\n";
	for (unsigned int i = 0; i < landAnimals.size(); i++)
	{
		//Displaying info
		landAnimals[i].displayInfo();
	}

	
	//Printing amphibians 
	cout << "\n\nAmphibians:\n";
	cout << "_________________________________________\n";
	for (unsigned int i = 0; i < amphibians.size(); i++)
	{
		//Displaying info
		amphibians[i].displayInfo();
	}
}

/********************
PURPOSE:
Printing all animals 
of a species 
********************/
void printingSpecificSpecies(deque<SeaAnimal>&seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	int userMenuChoice = 4;

	//Asking the userwhat species to print 
	while (userMenuChoice > 3 || userMenuChoice < 1)
	{
		cout << "\nPLEASE ENTER: 1 for Sea Animal, 2 for Land Animal, 3 for Amphibians";
		userMenuChoice = initializingIntVariable("\nWhat type of animal is this animal: ");
	}

	//Printing species 
	switch (userMenuChoice)
	{
	case 1:
		for (unsigned int i = 0; i < seaAnimals.size(); i++)
		{
			//Displaying info
			seaAnimals[i].displayInfo();
		}
		break;
	case 2:
		//Printing land animals 
		for (unsigned int i = 0; i < landAnimals.size(); i++)
		{
			//Displaying info
			landAnimals[i].displayInfo();
		}
		break;
	case 3:
		//Printing amphibians
		for (unsigned int i = 0; i < amphibians.size(); i++)
		{
			//Displaying info
			amphibians[i].displayInfo();
		}
		break;
	}
}

/**********************
PURPOSE:
Find an animals records
**********************/
void changeAnimalRecord(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	string animalBeingSearch = initializingStringVariable("\nWhat animal are you searching for: ");
	int foundPosition = -1;
	int speciesAnimalIsFrom = 4;

	//Asking the userwhat species the animal is from 
	while (speciesAnimalIsFrom > 3 || speciesAnimalIsFrom < 1)
	{
		cout << "\nPLEASE ENTER: 1 for Sea Animal, 2 for Land Animal, 3 for Amphibians";
		speciesAnimalIsFrom = initializingIntVariable("\nWhat type of animal is this animal: ");
	}

	//Searching for 
	switch (speciesAnimalIsFrom)
	{
	case 1:

		//Searching for a sea animal 
		foundPosition = searchingForASeaAnimal(animalBeingSearch,seaAnimals);

		//If found 
		if (foundPosition > -1)
		{
			selectingMenuOptionForSeaAnimals(foundPosition,seaAnimals);
		}
		else {
			cout << "\nERROR: Unable to find animal\n";
		}
		
		break;
	case 2:

		//Searching for a land animal
		foundPosition = searchingForALandAnimal(animalBeingSearch, landAnimals);

		//If found 
		if (foundPosition > -1)
		{
			selectingMenuOptionForLandAnimals(foundPosition, landAnimals);
		}
		else {
			cout << "\nERROR: Unable to find animal\n";
		}

		break;
	case 3:

		//Searching for a amphibian
		foundPosition = searchingForAnAmphibian(animalBeingSearch, amphibians);

		//If found 
		if (foundPosition > -1)
		{
			selectingMenuOptionForAmphibians(foundPosition, amphibians);
		}
		else {
			cout << "\nERROR: Unable to find animal\n";
		}

		break;
	}

}

/********************
PURPOSE:
compare animals
********************/
void printNumberOfAnimalsInProgram(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	cout << "\nThe number of animals in this program is: " << (seaAnimals.size() + landAnimals.size() + amphibians.size()) << "\n\n";
}

/********************
PURPOSE:
compare animals 
********************/
void comparingAnimals(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	int ARRAYSIZE = 1;
	string animalsBeingCompared[2];
	int animalsSpecies[2] = {0,2};
	

	//Getting the animals Name 
	animalsBeingCompared[0] = initializingStringVariable("\nWhat is the first animal you want to compare: ");
	animalsBeingCompared[1] = initializingStringVariable("\nWhat is the second animal you want to compare: ");

	//Getting the species of the animal 
	while (animalsSpecies[0] > 3 || animalsSpecies[0] < 1 || animalsSpecies[1] > 3 || animalsSpecies[1] < 1)
	{
		cout << "\nPLEASE ENTER: 1 for Sea Animal, 2 for Land Animal, 3 for Amphibians";
		animalsSpecies[0] = initializingIntVariable("\nWhat species is animal one: ");
		animalsSpecies[1] = initializingIntVariable("\nWhat species is animal two: ");
	}

	//Finding where this animal is found 
	for (int i = 0; i < 2; i++) {

		//Looking for the animal location
		switch (animalsSpecies[i])
		{
		case 1:
			//Printing the animal 
			printingASeaAnimal(animalsBeingCompared[i], seaAnimals);

			break;
		case 2:
			//Printing the animal 
			printingALandAnimal(animalsBeingCompared[i], landAnimals);

			break;
		case 3:
			//Printing the animal 
			printingAnAmphibian(animalsBeingCompared[i], amphibians);

			break;
		}
	}
}

/********************
PURPOSE:
delete an animal
********************/
void deletingAnAnimal(deque<SeaAnimal>& seaAnimals, deque<LandAnimal>& landAnimals, deque<Amphibian>& amphibians)
{
	//Variables 
	string animalName;
	int speciesOfAnimal = 4;
	int foundPosition = -1;

	//Asking the the user for the animal
	animalName = initializingStringVariable("\nWhat is the animal's name: ");

	//What species is it apart of 
	while (speciesOfAnimal > 3 || speciesOfAnimal < 1 || speciesOfAnimal > 3 || speciesOfAnimal < 1)
	{
		cout << "\nPLEASE ENTER: 1 for Sea Animal, 2 for Land Animal, 3 for Amphibians";
		speciesOfAnimal = initializingIntVariable("\nWhat species is this animal: ");
	}

	//Finding the species specific code 
	switch (speciesOfAnimal)
	{
	case 1:
		//Printing the animal 
		foundPosition = searchingForASeaAnimal(animalName, seaAnimals);

		//Deleting if not negative
		if (foundPosition > -1)
		{
			//Delete Class
			SeaAnimal* animalLocationPointer = &(seaAnimals[foundPosition]);
			delete animalLocationPointer;
		}

		break;
	case 2:
		//Printing the animal 
		foundPosition = searchingForALandAnimal(animalName, landAnimals);

		//Deleting if not negative
		if (foundPosition > -1)
		{
			//Deleting Class
			LandAnimal* animalLocationPointer = &(landAnimals[foundPosition]);
			delete animalLocationPointer;
		}

		break;
	case 3:
		//Printing the animal 
		foundPosition = searchingForAnAmphibian(animalName, amphibians);

		//Deleting if not negative
		if (foundPosition > -1)
		{
			//Deleting Class
			Amphibian* animalLocationPointer = &(amphibians[foundPosition]);
			delete animalLocationPointer;
		}

		break;
	}
}