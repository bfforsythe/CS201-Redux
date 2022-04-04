#pragma once

#ifndef HW04.h

#include "std_lib_facilites.h"

string i;
int j;


// Functionality for Sorting

void AnalyzeTokens() {

	vector<string> token;
	for (int k = 0; k < token.size(); k++) {

		if (j) {

			cout << "[integer]";

			k++;

		}

		else if (i = "1", "2", "3", "4", "5", "6", "7", "8", "9") {

			cout << "[string]";

			k++;

		}

		else if (i == " ") {

			cout << "[whitespace]";

		}

		else {

			cout << "[unknown]";

			k++;

		}

	}

}

void parse() {
	unsigned StringtoToken();

	vector<string> token;
	string str;

	std::istringstream input(str);

	while (input) {

		input >> i;

		token.push_back(i);

	}

	for (int k = 0; k < token.size() - 1; k++) {
		AnalyzeTokens();
		cout << " " << token.at(k) << endl;

	}

	cout << "Number of Tokens are: " << token.size() - 1;

}
#endif