#pragma once

#ifndef HW04.h

#include "std_lib_facilites.h"

bool ReadLine(string& str) {
	getline(cin, str);


	return(0);
}

unsigned StringtoTokenWS(const string& input) {

	ReadLine;


	vector<string> tokens;

	std::istringstream pieceMeal(input);
	string str;

	while (pieceMeal) {
		pieceMeal >> str;

		tokens.push_back(str);

	}

	for (int i = 0; i < tokens.size() - 1; i++) {
		cout << tokens.at(i) << " ";
	}

	return(0);
}



void AnalyzeTokens(const vector<string> tokens) {
	vo
}

#endif