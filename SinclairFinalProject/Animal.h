#ifndef Animal_H
#define Animal_H
#pragma comment(lib, "libname")

//Adding Libararies
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<deque>


using namespace std;

//Making the class 
class Animal {

	
protected:
	//Protected Variables 
	string location;
	string name;
	
	
private:
	//Private Variables 
	string species;
	bool aggresive;
	deque<string> predators;
	deque<string> prey;

public:

	//Intialization Constructor  
	Animal(string animalLocation,string animalName, string animalSpecies, bool aggresiveAnswer, deque<string> animalPredators, deque<string> animalPrey){

		//Sending the values to member variables 
		location = animalLocation;
		name = animalName;
		species = animalSpecies;
		aggresive = aggresiveAnswer;
		predators = animalPredators;
		prey = animalPrey;
	}

	//Defualt constructor
	Animal(){
		//Variables 
		bool endPreyLoop = false;
		bool endPredatorLoop = false;
		string animalprey;
		string animalpredator;

			//Getting the animal name 
			cout << "\nWhat is the animals name: ";
			cin >> name;

			//Getting the species 
			cout << "\nWhat is the animal's species: ";
			cin >> species;

			//Getting the answer to animal aggresion 
			cout << "\nIs this animal aggresive(1. for yes 2. for No): ";
		    cin >> aggresive;
			
			//Getting the animal's predators 
			cout << "\nInput each of the animals questions one at a time when asked";

			while (endPredatorLoop == false)
			{
				//Getting the name
				cout << "\nwhat is a predator? ";
				cin >> animalpredator;
				predators.push_back(animalpredator);

				//Asking the user if they want to continue adding predators
				cout << "\nDo you want to continue adding predators(1. for yes 2. for no): ";
				while (!(cin >> endPredatorLoop) || cin.fail() || endPredatorLoop != true && endPredatorLoop != false) {
					cout << "\nERROR: Please input either 1 or 2";
					cin.clear();
					cin.ignore();
					cout << "\nDo you want to continue adding predators(1. for yes 2. for no): ";
				};
			}

			//Getting the animal's prey
			while (endPreyLoop == false)
			{
				//Getting the name
				cout << "\nwhat is a one of the animal's prey? ";
				cin >> animalprey;
				prey.push_back(animalprey);

				//Asking the user if they want to continue adding predators
				cout << "\nDo you want to continue adding prey(1. for yes 2. for no): ";
				while (!(cin >> endPreyLoop) || cin.fail() || endPreyLoop != true && endPreyLoop != false) {
					cout << "\nERROR: Please input either 1 or 2";
					cin.clear();
					cin.ignore();
					cout << "\nDo you want to continue adding prey(1. for yes 2. for no): ";
				};
			}


	}

	//Destructor
	~Animal()
	{
		//Deleting the predators and prey
		predators.~deque();
		prey.~deque();
	}

	//printing all the animals information
	void printingAnimalInformation() const{
		cout << "\nAnimal Name: " << name;
		cout << "\nSpecies: " << species;
		cout << "\nIs the species aggresive: ";
		cout << "\nLocation: " << location;

		//Looping through the predators deque 
		cout << "\nPredators: ";
		for (string predator : predators) {
			cout << predator << " , ";
		}

		//Looping though the prey deque
		cout << "\nPrey: ";
		for (string food : prey) {
			cout << food << " , ";
		}

	}

	//Returning the species 
	string returnSpecies() const{
		return species;
	}

	//Returning if the animal is aggresive 
	bool returnAnimalAggression() const{
		return aggresive;
	}

	//Returning the location
	string returnAnimallocation() const{
		return location;
	}

	//Returning predators
	deque<string> returnAnimalPredators() const{
		return predators;
	}

	//Returning prey
	deque<string> returnAnimalsPrey() const{
		return prey;
	}

	//Changing the name 
	void changingName(string newName);

	//Changing the location 
	void changingLocation(string newLocation);

	//Chaning the species 
	void changingTheSpecies(string newSpecies);

	//changing the aggression
	void changingTheAggressionLevel(bool newAggression);

	//Adding a predator 
	void addingAPredator(string newPredator);

	//Deleting a preadator 
	void deletingAPredator(string predatorToBeDeleted);

	//Adding a prey 
	void addingAPrey(string newPrey);

	//Deleting a prey 
	void deletingAPrey(string preyToBeDeleted);

};

#endif
