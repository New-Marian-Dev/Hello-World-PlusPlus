// HelloWorld.cpp : Defines the entry point for the console application.
//
//This is just me messing around, doing nothing really too constructive

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int pointyThings()
{
	string cat = "whiskers"; //Make a string with the first cat's name
	string cat2 = "snowball"; //cat # 2's name
	string * catPos = &cat2; //create a pointer to the value of cat2 ("snowball")

	cout << "Here I have 2 cats, thier names are " << cat << " and " << cat2 << endl; //print the names
	cout << "I keep them hidden away in memory, otherwise they'd get fur everywhere!" << endl;
	cout << "If you want to see them, " << cat << " is at " << &cat << ", and " << *catPos << " is at " << catPos; //print the names again, then the position in memory
	//note the use of the "&" infront of cat, it is used to point the values memory address
	//also the astrisk used infront of catPos is to find the value of the address in memory, in this case, the name snowball

	//debugger breakpoint
	return 0;
}

float divide(float num1, float num2)
{

	return num1 / num2;

}

int structStuff()
{
	struct dingle //create struct "dingle" for the structStuff meathod
	{
		float poop; //initialize a float
		double poople; //initialize a double
		string pooping; //initialize a string
	};

	dingle ahgeh =
	{
		102542012120.5455f, //assign the float the value of 102542012120.5455
		21.12, //assign the double the value 21.12
		"Marmilaid" //assign the string to Marmilaid
	};

	cout << ahgeh.poop << endl; //print the float
	cout << ahgeh.poople << endl; //print the double
	cout << ahgeh.pooping; //print the string

	return 0;
}

int stringThings()
{
	const int size = 25;			//setting a constant for the array size

	char name1[size] = "Visuo";				//setting the name used by the program.
	char name2[size];			//initializing the array for the user's name

	cout << "Hello there! I'm " << name1;			//print the program's "name"
	cout << "! " << endl <<"What's your name?" << endl;
	cin.getline(name2, size);			//prompt and store the user's name into the array. Edited from the simple "cin << name2"
	cout << "Well " << name2;			//print the user's name
	cout << " you have " << strlen(name2) << " letters in your name." << endl;			//use strlen() to get the length of the string in name2
	cout << "Also, your name is stored in an array that is " << sizeof(name2) << " bytes long" << endl;				//get the size of the name2 array
	cout << name2[0] << " is your first initial, "<< endl <<"and the first 3 letters of my name are ";			//print the first char from name2

	name1[3] = '\0';			//change the 4th element in name1 to the "null" char

	cout << name1;			//read the edited string in nam1. The shell stops when it hits a "null" char

	//breakpoint added here so the debugger doesn't close as soon as it finishes

	return 0;
}

int stringThings2()
{
	char charr1[20];			//create an empty array of chars
	char charr2[20] = "Jaguar";			//creates an array with the chars in the string "Jaguar"
	string str1;			//creates an empty string
	string str2 = "Panther";			//creates a string of "Panter"

	cout << "Enter the name of a feline: ";
	cin >> charr1;			//prompt for input and place in the "charr1" array
	cout << "Enter another kind of feline: ";
	cin >> str1;			//prompt for input and place in the string variable "str1"
	cout << "Here's some felines: ";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;			//prints the values for the four variables, 2 being char arrays, 2 being strings
	cout << "The thiord letter in " << charr2 << " is " << charr2[2] << endl; //prints the 3rd element in the array
	cout << "the third letter in " << str2 << " is " << str2[2] << endl; //prints the 3rd letter from the string, as if it was a char array

	//breakpoint added to keep debugger open

	return 0;
}

int main()
{
	pointyThings();
}
