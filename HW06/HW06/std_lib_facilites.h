#pragma once

#ifndef std_lib_facilites.h

#include<iostream>
#include<iomanip>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<random>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::getline;

// keepWindowOpen (Keeps window open)
inline void keepWindowOpen() {
	string exit;
	cin.clear();
	cout << "Press Enter to exit the program" << endl;
	getline(cin, exit);
}

//printString (Function to print a complete string with newline) (Testing purposes?)

inline void printString(string debuggy) {
	cout << debuggy << "\n";
}


//Nuclear option (I cannot come up with anything else I need for the moment. This blows up.

inline void nuke() {
	for (int heatDeath = 0; heatDeath <= 1000; heatDeath++) {
		cout << "Goodbye!";
	}
}

#endif


