//JASKIRAT KAUR
//Homework  
// 02.13.18
//SAVED FILE
// compare
//two diff elevations
//lab 3c

#include <cmath>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
            cerr << "File cannot be opened for reading." << endl;
            exit(1); // exit if failed to open the file
    }
    // skip first line
    string junk;
    getline(fin, junk);

    //read file
    string date, user_startdate, user_enddate;
    double eastSt, eastEl, westSt, westEl;

    //user input
    cout << "Enter starting date: ";
    cin >> user_startdate; //asks user for beginning date
    cout << "Enter ending date: ";
    cin >> user_enddate; //asks user for end date
	

	
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        //user check date and give the correct value for east storage
	    
	bool entered_range = 0; 
	if (date == user_startdate){
		entered_range=1;
		while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
			if(eastEl > westEl)
            {
		cout << "East" << endl;
            }
			else if(westEl < eastEl)
            {
		cout << "West" << endl;
            }
			else if(westEl == eastEl){
		cout << "Equal" << endl;
	}
	else if (date == user_enddate){
		entered_range=0;
	}
       
     
return 0;
	}
    }
}
	
