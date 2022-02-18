// Brandon Forsythe
// CS201 Redux HW02
// 2/10/22
// Fits the Parameters of HW02


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;


// InputNames creates a vector of length ten to be used later.
/*
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

} */




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



//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//Brandon Forsythe
// CS201 Redux HW02 A1
// Money.cpp
// 2/12/22

/* void coinStar() {

	int penny, nickel, quarter, dime, dollarcoin;

	cout << "-----------------------------\n";
	cout << "   Welcome to the Coinstar   \n";
	cout << "-----------------------------\n";

	cout << "\n\n Please Enter Your Change \n";

	cout << "Pennies: ";
	cin >> penny;

	cout << "\n Nickels: ";
	cin >> nickel;

	cout << "\n Quarters: ";
	cin >> quarter;

	cout << "\n Dimes: ";
	cin >> dime;

	cout << "\n Dollar Coins: ";
	cin >> dollarcoin;

	cout << "You have: " << penny << " pennies, " << nickel << " nickels " << dime << " dimes, " << quarter << " quarters, and " << dollarcoin << " Dollar coins.\n";

	float total = penny + (5 * nickel) + (25 * quarter) + (10 * dime) + (100 * dollarcoin);

	cout << "Your total is: " << total << " cents. / $" << setprecision(5) <<  total / 100;
}

int main() {

	coinStar();

} */









// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// Brandon Forsythe
// CS201 Redux HW02 A2
// 2/13/22
// rice.cpp

/*void riceCounter(int chessSquares) {

	int grain = 1;

	cout << "! 1000 Grains is given after 11 squares ! \n ";
	cout << "! 1,000,000 Grains is given after 20 squares ! \n";
	cout << "! 1,000,000,000 Grains is given after 30 squares ! \n\n";
	cout << " 30 Squares also happens to be the highest number you can achieve before the program explodes, due to memory limits\n";

	cout << "Your squares work out to be \n";

	for (int i = 0; i <= chessSquares; i++) {

		cout << grain << " : " << i << " squares\n";

		grain = grain*2;

		

		
	}
	
}

int main() {

	riceCounter(40);


}*/


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//Brandon Forsythe
//CS201 HW02 A3
//2/15/22
// grid.h & grid.cpp;

/*#include "grid.h"

		int main() {

			planeInit();

		} */

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// Brandon Forsythe
// CS201 HW02 A4
// 217
// 2/16/21

		void vecNum(vector<string>& names, vector<int>& numbers) {

			cout << "Please enter a Name, along with a Number ID: \n *Press Enter twice after you've entered all your names and numbers";
			int number = 1;
			string name = " ";


		while (!name.empty() && number != 0) {
			getline(cin, name);
			cin >> number;
			names.push_back(name);
			numbers.push_back(number);
			}
}


		int main() {

			vector<string> names;
			vector<int> numbers;

			vecNum(names, numbers);


		}