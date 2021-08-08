#include "Header.h"
#include <iostream>

using namespace std;

// defining my instructions function.
void introduction() {
	cout << "Welcome to the most fun you've ever had with text!!" << endl;
	cout << "To get a story you will enter in some information." << endl;
	cout << "After you have entered in the information, you will get your own story!" << endl;
	cout << "Enjoy!!" << endl;
}


// defining my string function. 
string askName(string prompt) {
	//created a variable called name. 
	string name;
	cout << prompt << endl;
	cin >> name;
	//returns the same return type of string. 
	return name;
}


// defining my askAge function with the parameters. 
int askNumb(int high, int low) {
	//created a variable called age. 
	int age;
	//created a do-while loop to have the user enter in their age within the parameters. 
	do {
		cout << "Please enter a number between 1 and 100: ";
		cin >> age;
		//the while statement is making sure that the entered int will be within the parameters. 
	} while (age > high || age < low);
	return age;
}

//defining my jailTime function with the parameters.
int jailTime(int high, int low) {
	//created a variable called time.
	int time;
	do {
		cout << "Please choose a number between 1 and 50: " << endl;
		cin >> time;
	} while (time > high || time < low);
	return time;
}

//defining my askVerb function.
string askVerb(string verb) {
	//created a variable called verb2.
	string verb2;
	cout << verb;
	cin >> verb2;
	return verb2;
}

// defining my function story(), and adding in all of the text and variables that are used. 
void story(int numb2, string name2, int jail, string verb3) {
	cout << "Good morning " << name2 << endl;
	cout << "On Octobe 23rd, you were caught on camera stealing." << endl;
	cout << "You were caught stealing " << numb2 << " bananas." << endl;
	cout << "When confronted by a worker you started to panic." << endl;
	cout << "You " << verb3 << " out of the stored." << endl;
	cout << "While you " << verb3 << ", you dropped all of the bananas." << endl;
	cout << "The police arrived and arrested you on the scene." << endl;
	cout << "Thank you for patiently listening to the recap of the events." << endl;
	cout << "I am here to tell you today that you will recieve " << jail << " years in prison" << endl;
	cout << "Hopefully next time you will not steal " << numb2 << endl;
}
