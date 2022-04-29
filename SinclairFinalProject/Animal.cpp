#include"Animal.h"



/*******************************
	PURPOSE:
	Change Name
********************************/
void Animal::setName(string newName) {
	name = newName;
}

/*******************************
PURPOSE:
Change Location
********************************/
void Animal::setLocation(string newLocation) {
	location = newLocation;
}

/*******************************
PURPOSE:
Change Species
********************************/
void Animal::setSpecies(string newSpecies) {
	species = newSpecies;
}

/*******************************
PURPOSE:
Change Aggression
********************************/
void Animal::setAggressionLevel(bool newAggression) {
	aggresive = newAggression;
}

/*******************************
PURPOSE:
add predator
********************************/
void Animal::addingAPredator(string newPredator) {
	predators.push_back(newPredator);
}

/*******************************
PURPOSE:
delete a predator
********************************/
void Animal::deletingAPredator(string predatorToBeDeleted) {

	//Variables 
	int foundPosition = -1;

	//Looping though prey
	for (string predatorName : predators) {

		//Incrementing the foundposition
		foundPosition++;

		//If found delete it
		if (predatorName == predatorToBeDeleted) {
			predators.erase(prey.begin() + foundPosition);
			cout << "\nDeletion Successful! ";
			exit(0);
		}
	}

	//If not found 
	if (foundPosition == -1)
	{
		//Printing error message
		cout << "\nThe predator name could not be found! ";
		exit(0);
	}
}

/*******************************
PURPOSE:
Add animal's prey
********************************/
void Animal::addingAPrey(string newPrey) {
	prey.push_back(newPrey);
}

/*******************************
	PURPOSE:
	delete an animal's prey
********************************/
void Animal::deletingAPrey(string preyToBeDeleted) {

	//Variables 
	int foundPosition = -1;

	//Looping though prey
	for (string preyName : prey) {

		//Incrementing the foundposition
		foundPosition++;

		//If found delete it
		if (preyName == preyToBeDeleted) {
			prey.erase(prey.begin()+foundPosition);
			cout << "\nDeletion Successful! ";
			exit(0);
		}
	}

	//If not found 
	if (foundPosition == -1)
	{
	//Printing error message
	cout << "\nThe prey name could not be found! ";
	exit(0);
	}
}

/*******************************
	PURPOSE:
displaying all data members
********************************/
void Animal::displayInfo() {
	cout << "\nName: " << name;
	cout << "\nSpecies: " << species;
	cout << "\nLocation: " << location;
	cout << "\nAggresive: "; convertingBoolValue(aggresive);
	cout << "\nPredators: "; printingStringDeque(predators);
	cout << "\nPrey: "; printingStringDeque(prey);
}
