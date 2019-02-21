//JASKIRAT KAUR
//CSCI 136
//ASSIGNMENT 3D
//REVERSE THAT ORDER SONN


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

	ifstream fin("Current_Reservoir_Levels.tsv");

	if(fin.fail())
	{
		cout << "Failed to open the file." << endl; // exit if failed to open the file : <cstdlib>
		exit(1);
	}

	string ONE;
	getline(fin, ONE);

	string date, earlier_date, later_date;
	string eastSt, eastEl, westSt, westEl;

	cout << "Enter an earlier date(MM/DD/2016): "; //asks user for input
	cin >> earlier_date;

	cout << "Enter an later date(MM/DD/2016): "; //asks user for input
	cin >> later_date;

	string myArray[400];
	int center = 0;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) //reads file in this order
    {
		if(date >= earlier_date && date <= later_date)
		{	
			myArray[center] = date + " " + westEl; 
			center++;
		}
	}	

	for(int i = center - 1; i >= 0; i--) 
		cout << myArray[i] <<endl; 

	fin.close(); //closes file

return 0;
} //i think that's enough
