/**
* Class: CSCI2490 C++ Programming
* Instructor: Y. Daniel Liang
* Description: This program calculates the mean and standard deviation when the user enters 10 numbers.
* Due: 08/22/2016
* @author Shaun C. Dobbs
* @version 1.0

* I pledge by honor that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.

Sign here: Shaun C. Dobbs
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout << "Enter ten numbers: " << endl;

	double input[10];
	double dev[10];
	double sum, mean, sumDev, meanDev, deviation;
	sum = 0;
	mean = 0;
	sumDev = 0;
	meanDev = 0;
	deviation = 0;
	
	for (unsigned int i = 0; i < 10; i++) {
		cin >> input[i];
		sum += input[i];
	}
	
	mean = sum / 10;

	for (unsigned int j = 0; j < 10; j++) {
		dev[j] = pow((input[j] - mean), 2);
		sumDev += dev[j];
	}

	meanDev = sumDev / 9;

	deviation = sqrt(meanDev);
	
	cout << "The mean is " << mean << endl;
	cout << "The standard deviation is " << deviation << endl;

    return 0;
}

