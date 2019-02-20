/JASKIRAT KAUR
//Homework  
// 02.13.18
//SAVED FILE
// 
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
    string user_startdate, user_enddate;
    double eastSt, eastEl, westSt, westEl;

    //user input
    cout << "Enter starting date: ";
    cin >> user_startdate;
    cout << "Enter ending date: ";
    cin >> user_enddate;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        //user check date and give the correct value for east storage
        if(eastEl > westEl)
            {
                min = eastEl; //store min value
            }
        else if(westEl < eastEl)
            {
                max = westEl; //stores max value
            }
        {

        }
    }
    cout << date << min << endl; //prints min
    cout << date << max << endl; //prints max
return 0;
}

	
