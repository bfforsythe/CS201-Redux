#pragma once

#ifndef HW04.h

#include "std_lib_facilites.h"




unsigned StringtoTokenWS() {

	string input;
	vector<string> tokens;

	bool ReadLine;

	if (input.empty()) {
		ReadLine == false;
	}
	else {
		ReadLine == true;
	}

	std::istringstream splitInput(input);

	string dummyInput;

	while (splitInput >> dummyInput) {
		tokens.push_back(dummyInput);
	}

	cout << tokens.size();


	return(0);

}

void AnalyzeTokens() {


		const vector<string> tokens;
		string input;

		StringtoTokenWS();

		char c;
		string s;

		std::istringstream splitInput(input);

		while (splitInput >> c >> s) {
			if (splitInput >> c) {
				cout << "{Character}" << c << "\n";
			}
			else if (splitInput >> s) {
				cout << "{String}" << s << "\n";
			}
		}
	}
#endif