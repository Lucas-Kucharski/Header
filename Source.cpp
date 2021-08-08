/*
Lucas Kucharski	
8/7/2021
Header and source code files
*/

#include <iostream> 
#include "Header.h"

using namespace std;

int main() {

	introduction();
	//creating a variable that stores the data given in the askAge() function. 
	int numb2 = askNumb(100);
	//creating a variable that stores the data given in the askName() function.
	string name2 = askName("Please enter your name: ");
	//creating a variable that stores the data given in the jailTime() function.
	int jail = jailTime(50);
	//created a variable that stores the data given in the askVerb() function.
	string verb3 = askVerb("Please enter a verb in the past tense: ");

	// this is the main function that will display the story with the data inputted from the user. 
	story(numb2, name2, jail, verb3);
	return 0;
}


