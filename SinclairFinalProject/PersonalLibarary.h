// Including libarary 
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<deque>
#include<fstream>
using namespace std;

/*********************************************
PURPOSE:
Receive user input for boolean values 
*********************************************/
 inline bool initializingBoolVariable(string message) {
	//Variables 
	int userInput;

	//Asking user for an input 
	cout << message;

	//Validating user choice 
	while (!(cin >> userInput)||cin.fail()||userInput!=0 && userInput!=1)
	{
		cout << "\nERROR: please input a proper value";
		cin.clear();
		cin.ignore();
		cout << message;
	}

	//Ignoring the enter 
	if (userInput == false) {
		cin.ignore(1, '\n');
	}

	//Returning the user Value 
	return (userInput != 1) ? false : true;
}

/*********************************************
PURPOSE:
Convert boolean variables to text
*********************************************/
inline void convertingBoolValue(bool variable) {

	//Converting the boolean value 
	(variable == 0) ? cout << "No" : cout << "Yes";

}

/*********************************************
PURPOSE:
Receive user input for boolean values
*********************************************/
 inline int initializingIntVariable(string message) {
	//Variables 
	int userInput;

	//Asking user for an input 
	cout << message;

	//Validating user choice 
	while (!(cin >> userInput) || cin.fail())
	{
		cout << "\nERROR: please input a proper value";
		cin.clear();
		cin.ignore();
		cout << message;
	}


	//Returning the user Value 
	return userInput;
}

 /*******************************************
 PURPOSE:
 Convert a string deque to text 
 *******************************************/
 inline void printingStringDeque(deque<string> dequeList) {
	 
	 //Printing the deque 
	 for (unsigned int i = 0; i < dequeList.size(); i++)
	 {
		 cout << dequeList[i] << " ";
	 }

 }

 /*********************************************
PURPOSE:
Receive user input for boolean values
*********************************************/
 inline string initializingStringVariable(string message,bool clearingEndLineNeeded = false) {
	 //Variables 
	 string userInput;

	 //Asking user for an input 
	 cout << message;

	 //Deciding if an extra /n is needed
	 if (clearingEndLineNeeded ==true)
	 {
		 //clearing the newline
		 cin.ignore(1, '\n');
	 }

	 //Getting input
	 getline(cin, userInput);
	
	 //Returning the user Value 
	 return userInput;
 }


 /*********************************************
PURPOSE:
Receive user input for boolean values
*********************************************/
 inline deque<string> initializingStringDequeVariable(string message) {
	 //Variables 
	 deque<string> userDequeList;
	 string userStringInput;
	 bool endLoop = false;

	 //Asking the user to input more strings
	 do
	 {
		 //Getting user input for the deque 
		 userDequeList.push_back(initializingStringVariable(message,true)); 

		//Asking user if they want to continue loop
		endLoop = initializingBoolVariable("\nDo you want to stop adding(1. Yes, 0. No): ");


	 } while (endLoop!=true);

	 //Returning the user Value 
	 return userDequeList;
 }