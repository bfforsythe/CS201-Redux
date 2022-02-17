// Brandon Forsythe
// CS201 Redux HW02
// 2/10/22
// Fits the Parameters of HW02


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// InputNames creates a vector of length ten to be used later.

void InputNames(vector<string>& names) {

	for (int i = 0; i < 10; i++) {
		cout << "Please Enter a Name: ";
		string name;
		getline(cin, name);
		names.push_back(name);


	}

}

//General Function to print a Vector 

void PrintNames(vector<string> & names) {

	vector<string> listCopy;

	InputNames(listCopy);

	cout << "Your List Is: ";

	for (int i = 0; i < listCopy.size(); i++) {
		std::cout << listCopy.at(i) << " ";

	}

}

// Alphabetizes the large vector using the std::sort function

void alphabetize(vector<string>& names) {

	vector<string> alphName;

	InputNames(alphName);

	sort(alphName.begin(), alphName.end());

	for (int i = 0; i < alphName.size(); i++) {
		cout << alphName.at(i) << " ";

	}
}

// Main function to test all functions

int main() {

	vector<string> passPN;

	alphabetize(passPN);
	
	return(0);

}




// Name Search

/*cout << "Please enter a name to search for: ";
string searchedName;
getline(cin, searchedName);
bool isNameHere = false;

for (int parse = 0; parse < vectorCopy.size(); parse++) {

	if (searchedName == vectorCopy.at(parse)) {
		cout << "Your query exists";
		isNameHere = true;
		parse = vectorCopy.size();
	}

}

if (isNameHere == false) {
	cout << "Your query does not exist";
} */