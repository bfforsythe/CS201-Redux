//Brandon Forsythe
//CS201-Redux HW03
//2/21/22

#include <iostream>
#include<string>

using namespace std;

/* #include "boxer.h"

int main() {

	// Amount of layers, String

	boxDefine();

} */



// Brandon Forsythe
// CS201-Redux HW03 A1
// 2/28/22
// collatz.cpp

// Formula ------ Even, n/2
// Formula ------ Odd, 3n + 1

void computation() {

	int collatzint;

	cin >> collatzint;
	

	while (collatzint < 0) {
		cout << "That's a negative number. Try again: ";
		cin >> collatzint;

	}

	cout << collatzint << " ";


		while (collatzint != 1) {

			if (collatzint % 2 == 0) {
				collatzint = collatzint / 2;
			}
			else {
				collatzint = (3 * collatzint) + 1;
			}
			cout << collatzint << " ";

		}
		cout << endl;
	}




int main(int collatzint) {

	cout << "Please enter a positive number to calculate the collatz formula ";


	computation();
}


