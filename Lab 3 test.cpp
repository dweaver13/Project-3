/*
Dale Weaver
C++ Fall 2020
Due: 28 September 2020
Lab 3 User and File I/O
This program will compute outputs and the mean and population SD of 4 integers.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <istream>


using namespace std;
// this part is for the file you input 
string inputfile = "inMeanStd.dat.txt";
string outputfile = "outMeanStd.dat.txt";
//this is where i declared all of the floats
float std_Dev2();
float std_Dev();
float mean();
float mean2();

float numuno;
float numdos;
float numtre;
float numqua;

float num1;
float num2;
float num3;
float num4;

float meanans;
float meanans2;

int main()
{
	ifstream inFile;
	ofstream outFile;

	// this part asks the user to input their numbers
	cout << "Please enter your numbers: " << endl;
	cin >> numuno >> numdos >> numtre >> numqua; // asigns a label to the number

	// sends you down where it calculates the mean
	cout << "The mean of your numbers is: ";
	mean(); //displays mean

	// sned you down where it calculates the standard deviation
	cout << "The standard deviation of your numbers is: ";
	std_Dev2(); //displays standard deviation

	// brings users file into play
	inFile.open(inputfile);
	outFile.open(outputfile);

	//assigns a label to the numbers in the file
	inFile >> num1 >> num2 >> num3 >> num4;

	//displays the mean of the numbers in the file
	outFile << "The mean of the numbers in the file is: ";
	cout << "The Mean of the numbers in the file is: " << mean2() << endl; 

	//this displays the standard deviation of the numbers in the file
	outFile << "The standard deviation of the numbers in your file is: ";
	cout << "The standard deviation of the numbers in your file is: " << std_Dev() << endl;

	return 0;
	// closes files
	inFile.close();
	outFile.close();
}

//this calculates the standard deviation for the users number
float mean()
{
	float meanans = ((numuno + numdos + numtre + numqua) / 4);
	cout << meanans << endl;
	return 0;
}
// this calculates the mean of the numbes in the users file
float mean2()
{
	float meanans2 = ((num1 + num2 + num3 + num4) / 4);
	cout << meanans2 << endl;
	return 0;
}

float std_Dev() 
{
	float mean1 = ((num1 + num2 + num3 + num4) / 4);
	float stdDev1 = sqrt((((pow(num1 - mean1, 2) + pow(num2 - mean1, 2) + pow(num3 - mean1, 2) + pow(num4 - mean1, 2)) / 4)));
	cout << stdDev1 << endl;
	return stdDev1;
}

float std_Dev2()
{
	float mean = ((numuno + numdos + numtre + numqua) / 4);
	float stdDev = sqrt((((pow(numuno - mean, 2) + pow(numdos - mean, 2) + pow(numtre - mean, 2) + pow(numqua - mean, 2)) / 4)));
	cout << stdDev;
	return stdDev;
}
