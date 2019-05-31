/*
 * Arrays.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	cout << "Array of ints" << endl;
	cout << "=============" << endl;

	int values[3];

	values[0] = 42;
	values[1] = 73;
	values[2] = 87;

	cout << "Value at element 0 = " << values[0] << endl;
	cout << "Value at element 1 = " << values[1] << endl;
	cout << "Value at element 2 = " << values[2] << endl;


	cout << endl << "Array of doubles" << endl;
	cout << "================" << endl;

	double numbers[] = {4.5, 2.3, 7.2, 8.1};	// If you initialise (set values) of the array when you declare it, there is no need to specify how many elements are required
												// as the system is smart enough to figure out how many elements you need based on how many values you initialised the array with.

	cout << numbers[0] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "================" << endl;

	double moreNums[5];

	for(int i = 0; i < 5; i ++)
	{
		moreNums[i] = (i * i);

		cout << "Value stored in element " << i << " is " << moreNums[i] << endl;
	}

	cout << endl << "Array of ints initialised with zero values" << endl;
	cout << "================" << endl;

	int numArray[8] = {};

	for(int i = 0; i < 5; i ++)
	{
		cout << "Value stored in element " << i << " is " << numArray[i] << endl;
	}

	cout << endl << "Array of strings" << endl;
	cout << "================" << endl;

	string words[] = {"Hello", "this", "is", "an", "array", "of", "strings"};


	for(int i = 0; i < 7; i++)
	{
		cout << words[i] << " " << flush;
	}

	cout << endl << "The 12 times table" << endl;
	cout << "================" << endl;

	int tables[13];

	for(int i = 0; i < 13; i ++)
	{
		tables [i] = i * 12;
	}

	for(int i = 0; i < 13; i ++)
	{
		cout << i << " x 12 = " << tables[i] << endl;
	}



	return 0;
}


