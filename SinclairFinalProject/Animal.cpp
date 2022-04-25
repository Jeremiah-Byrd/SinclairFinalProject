#include"Animal.h"



//Changing the name 
void Animal::changingName(string newName) {
	name = newName;
}

//Changing the location 
void Animal::changingLocation(string newLocation) {
	location = newLocation;
}

//Chaning the species 
void Animal::changingTheSpecies(string newSpecies) {
	species = newSpecies;
}

//changing the aggression
void Animal::changingTheAggressionLevel(bool newAggression) {
	aggresive = newAggression;
}

//Adding a predator 
void Animal::addingAPredator(string newPredator) {
	predators.push_back(newPredator);
}

//Deleting a preadator 
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

//Adding a prey 
void Animal::addingAPrey(string newPrey) {
	prey.push_back(newPrey);
}

//Deleting a prey 
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