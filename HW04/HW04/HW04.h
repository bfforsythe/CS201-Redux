#pragma once

#ifndef HW04.h

#include "std_lib_facilites.h"

bool ReadLine(string& str) {

	getline(cin, str);

	if (str.empty()) {
		return (false);
	}
	else {
		return(true);
	}
}


unsigned StringtoTokenWS(string &input, vector<string> &tokens) {

	getline(cin, input);

	char c;
	string s;



	return(0);

}

void AnalyzeTokens(const vector<string>& tokens) {

	while (splitInput) {
		if (splitInput >> c) {
			cout << "{Character}" << c << "\n";
		}
		else if (splitInput >> s) {
			cout << "{String}" << s << "\n";
		}
	}


}
#endif