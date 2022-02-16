#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// InputNames creates a vecotr of length ten to be used later.

void InputNames(vector<string>& names) {

	for (int i = 0; i < 10; i++) {
		cout << "Please Enter a Name: ";
		string name;
		getline(cin, name);
		names.push_back(name);


	}

}

void PrintNames(vector<string> & names) {

	vector<string> listCopy;

	InputNames(listCopy);

	cout << "Your List Is: ";

	for (int i = 0; i < listCopy.size(); i++) {
		std::cout << listCopy.at(i) << " ";

	}

}

int main() {

	vector<string> vectorCopy;

	
	
	

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