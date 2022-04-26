// Including libarary 
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<deque>
using namespace std;

/********************
PURPOSE: Validate bool
user input
*********************/
void gettingBoolUserInput(string message, bool& variable) {
	
	//Variables 
	int userInput;

	//Getting and validating user input
	cout << message;
	while (!(cin >> userInput) || cin.fail() || userInput != 1 && userInput != 2)
	{
		cout << "\nERROR: Please enter 1 or 2";
		cin.clear();
		cin.ignore();
		cout << message;
	}

	//Giving the variables a value 
	variable = (userInput == 1) ? true : false;
}


/********************
PURPOSE: Validate int
user input
********************/
void gettingIntegerUserInput(string message, int& variable) {

	//Variables 
	int userValueChoice;

	//Printing message and validating user input 
	cout << message;
	while (!(cin >> userValueChoice) || cin.fail())
	{
		cout << "\nERROR: Please enter a integer";
		cin.clear();
		cin.ignore();
		cout << message;
	}

	//Giving the variable a value 
	variable = userValueChoice;
}