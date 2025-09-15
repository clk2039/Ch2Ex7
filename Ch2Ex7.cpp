/*
File Name: Ch2Ex7.cpp
Github URL: https://github.com/clk2039/Ch2Ex7.git
Programmer: Kit Miller
Date: September 2025
Requirements: Assuming the ocean levels rise 1.5 millimeters per year, write a program
that displays the number of millimeters that the ocean will have risen at 5,7, and 10 years from now.
*/

#include <iostream>
using namespace std;

int main()
{
	double rise = 1.5; // millimeters per year
	int fiveYears = 5;
	int sevenYears = 7;
	int tenYears = 10;

	double riseFiveYears = rise * fiveYears;
	double riseSevenYears = rise * sevenYears;
	double riseTenYears = rise * tenYears;

	cout << "The ocean is currently rising at a rate of about " << rise << " millimeters per year." << endl;
	cout << "In " << fiveYears << " years, the ocean will have risen about " << riseFiveYears << " millimeters." << endl;
	cout << "In " << sevenYears << " years, the ocean will have risen about " << riseSevenYears << " millimeters." << endl;
	cout << "In " << tenYears << " years, the ocean will have risen about " << riseTenYears << " millimeters." << endl;

	return 0;
}

