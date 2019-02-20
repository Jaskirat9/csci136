//JASKIRAT KAUR
//Homework  
// 02.13.18
//SAVED FILE
// 

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main () {
ifstream fin ("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
	cerr << "File cannot be opened for reading." << endl; 
	exit(1); //exit if file failed to open
	}

//skip first line
string junk;
getline(fin,junk);


int min;
