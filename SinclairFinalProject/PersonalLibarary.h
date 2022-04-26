// Including libarary 
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<deque>
using namespace std;

/*********************************************
PURPOSE:
Receive user input for boolean values 
*********************************************/
inline bool userBoolValueChoice(string message) {
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
inline bool userIntValueChoice(string message) {
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