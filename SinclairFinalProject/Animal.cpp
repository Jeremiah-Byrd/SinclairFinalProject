#include"Animal.h"



/*******************************
	PURPOSE:
	Change Name
	********************************/
void Animal::changingName(string newName) {
	name = newName;
}

/*******************************
	PURPOSE:
	Change Location
	********************************/
void Animal::changingLocation(string newLocation) {
	location = newLocation;
}

/*******************************
	PURPOSE:
	Change Species
	********************************/
void Animal::changingTheSpecies(string newSpecies) {
	species = newSpecies;
}

/*******************************
	PURPOSE:
	Change Aggression
	********************************/
void Animal::changingTheAggressionLevel(bool newAggression) {
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
			return;
		}
	}

	//If not found 
	if (foundPosition == -1)
	{
		//Printing error message
		cout << "\nThe predator name could not be found! ";
		return;
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
			return;
		}
	}

	//If not found 
	if (foundPosition == -1)
	{
	//Printing error message
	cout << "\nThe prey name could not be found! ";
	return;
	}
}