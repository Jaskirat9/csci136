//JASKIRAT KAUR
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
    double min=1000000000, max=0;
    // skip first line
    string junk;
    getline(fin, junk);

    //read file
    string date, user_date;
    double eastSt, eastEl, westSt, westEl;

    //user input
    cout << "Enter a date: ";
    cin >> user_date;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        //user check date and give the correct value for east storage
        if(min > eastSt)
            {
                min = eastSt; //store min value
            }
        else if(max < eastSt)
            {
                max = eastSt; //stores max value
            }
        {

        }
    }
    cout << "minimum storage in East basin:" << min << endl; //prints min
    cout << "MAXimum storage in East basin:" << max << endl; //prints max
return 0;
}

	
