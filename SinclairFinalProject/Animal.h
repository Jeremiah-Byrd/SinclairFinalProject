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
		//Initializing variables
		 name = "not inputted yet";
		 location = "not inputted yet";
		 species = "not inputted yet";

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

	deque<string> getAnimalsPrey() const {
		return prey;
	}

	string getName() const {
		return name;
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
