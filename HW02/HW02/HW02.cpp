#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void InputNames(vector<string>& names) {

	for (int i = 0; i < 10; i++) {
		cout << "Please Enter a Name: ";
		string name;
		getline(cin, name);
		names.push_back(name);


	}

}


int main() {

	vector<string> vectorCopy;

	InputNames(vectorCopy);

	/*	for (int i = 0; i < vectorCopy.size(); i++) {
		cout << vectorCopy[i];
		cout << " ";
	} */

	// Name Search



}