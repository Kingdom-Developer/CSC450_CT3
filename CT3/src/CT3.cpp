//============================================================================
// Name        : CT3.cpp
// Author      : Nolan Hill
// Version     :
// Copyright   : Your copyright notice
// Description : Integer Pointers Program
//============================================================================

#include <iostream>
using namespace std;

/*
 * Program demonstrating dynamic memory allocation with pointers.
 * Gets three integers from user, stores them in dynamic memory, and displays results.
 */
int main() {
    // Declare three integer variables to hold user's numbers and three pointers
	int num1, num2, num3;
	int* num1Pointer = new int;
	int* num2Pointer = new int;
	int* num3Pointer = new int;

	// Prompt user for first integer value
	cout << "Enter the first number: ";
	cin >> num1;

	// Prompt user for second integer value
	cout << "Enter the second number: ";
	cin >> num2;

	// Prompt user for third integer value
	cout << "Enter the third number: ";
	cin >> num3;

	// Have pointers point to user's numbers
	*num1Pointer = num1;
	*num2Pointer = num2;
	*num3Pointer = num3;

	// Display contents of the variables and pointers
	cout << "The value for variable 'num1' is: " << num1 << endl;
	cout << "The value for the pointer 'num1Pointer' is: " << *num1Pointer << endl;
	cout << "The value for variable 'num2' is: " << num2 << endl;
	cout << "The value for the pointer 'num2Pointer' is: " << *num2Pointer << endl;
	cout << "The value for variable 'num3' is: " << num3 << endl;
	cout << "The value for the pointer 'num3Pointer' is: " << *num3Pointer << endl;

	// Release pointers from memory by using delete operator
	delete num1Pointer;
	delete num2Pointer;
	delete num3Pointer;

	// Return statement
	return 0;
}
