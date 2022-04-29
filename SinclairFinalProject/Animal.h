#ifndef Animal_H
#define Animal_H


//Adding Libararies
#include"PersonalLibarary.h"



using namespace std;



//Making the class 
class Animal {

	
private:
	//Private Variables 
	string species;
	bool aggresive;
	deque<string> predators;
	deque<string> prey;
	string location;
	string name;


public:

	/********************
	CONSTRUCTOR
	*********************/
	Animal(string animalLocation,string animalName, string animalSpecies, bool aggresiveAnswer, deque<string> animalPredators, deque<string> animalPrey){

		//Sending the values to member variables 
		location = animalLocation;
		name = animalName;
		species = animalSpecies;
		aggresive = aggresiveAnswer;
		predators = animalPredators;
		prey = animalPrey;
	}

	Animal(){
		//Variables 
		bool endPreyLoop = true;
		bool endPredatorLoop = true;
		string animalprey;
		string animalpredator;

			//Getting the animal name 
			cout << "\nWhat is the animals name: ";
			getline(cin,name);

			//Getting the species 
			cout << "\nWhat is the animal's species: ";
			cin.ignore(1, '\n');
			getline(cin,species);

			cout << "\nWhere is this animal located: ";
			cin.ignore(1, '\n');
			getline(cin,location);

			//Getting the answer to animal aggresion 
		    aggresive = initializingBoolVariable("\nIs this animal aggresive(1. for yes 0. for No): ");
			
			//Getting the animal's predators 
			cout << "\nInput each of the animals questions one at a time when asked";

			while (endPredatorLoop == true)
			{
				//Getting the name
				cout << "\nwhat is a predator? ";
				cin.ignore(1, '\n');
				getline(cin,animalpredator);
				predators.push_back(animalpredator);

				//Asking the user if they want to continue adding predators
				endPredatorLoop=initializingBoolVariable("\nDo you want to add another predator(1 for yes or 0 for no): ");
			}


			//Getting the animal's prey
			while (endPreyLoop == true)
			{
				//Getting the name
				cout << "\nwhat is a one of the animal's prey? ";
				cin.ignore(1, '\n');
				getline(cin,animalprey);
				prey.push_back(animalprey);

				//Asking the user if they want to continue adding predators
				endPreyLoop = initializingBoolVariable("\nDo you want to add another prey(1 for yes or 0 for no): ");
				
			}


	}

	/***************************
	DESTRUCTOR
	****************************/
	~Animal()
	{
		//Deleting the predators and prey
		predators.~deque();
		prey.~deque();
	}


	/********************************** 
	PURPOSE: 
	printing all the animals information
	**********************************/
	void printingAnimalInformation() const{
		cout << "\nAnimal Name: " << name;
		cout << "\nSpecies: " << species;
		cout << "\nIs the species aggresive: "; convertingBoolValue(aggresive);
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

	/*********************************
	GETTERS
	*********************************/
	string getSpecies() const{
		return species;
	}

	bool getAnimalAggression() const{
		return aggresive;
	}

	string getAnimallocation() const{
		return location;
	}

	deque<string> getAnimalPredators() const{
		return predators;
	}

	deque<string> getAnimalsPrey() const{
		return prey;
	}


	/*******************************
	SETTERS
	********************************/
	void setName(string newName);

	void setLocation(string newLocation);

	void setSpecies(string newSpecies);

	void setAggressionLevel(bool newAggression);


	/*******************************
	PURPOSE:
	add predator
	********************************/
	void addingAPredator(string newPredator);

	/*******************************
	PURPOSE:
	delete a predator 
	********************************/
	void deletingAPredator(string predatorToBeDeleted);

	/*******************************
	PURPOSE:
	Add animal's prey 
	********************************/
	void addingAPrey(string newPrey);

	/*******************************
	PURPOSE:
	delete an animal's prey 
	********************************/
	void deletingAPrey(string preyToBeDeleted);


	/*******************************
	PURPOSE:
	displaying all information
	********************************/
	void displayInfo();

};

#endif
