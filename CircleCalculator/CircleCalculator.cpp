// CircleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl; 
using std::pow;
using std::round;


int main()
{
	// Print the name of the program to the screen for the user
	cout << "Circle Calculator" << endl;

	// Get input from the user
	double radius = 0;
	cout << "Enter the radius of the circle: ";
	cin >> radius;

	// Calculate the area of the circle
	double pi = 3.14159;
	double diameter = radius * 2;
	double area = pi * pow(radius, 2.0);
	double circumfrance = pi * diameter;
	// double radius = 0;

	// Round the calculations of circumfrance and area to 1 decimal place	
	circumfrance = round(circumfrance * 10) / 10;
	area = round(area * 10) / 10;

	// Print the results to the screen
	cout << "the Diameter is " << diameter << endl;
	cout << "the Circumfrance is " << circumfrance << endl;
	cout << "the Area is " << area << endl;
	// 	cout << "the Radius is " << radius << endl;
	cout << "the Pi is " << pi << endl;
	
	// return value value that ends the program 
	return 0;
}

