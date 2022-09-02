//Brandon Forsythe
//CS201-Redux HW03
//2/21/22

#include "std_lib_facilites.h"

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

/*void computation() {

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



//Brandon Forsythe
//CS201-Redux HW03A2
// 2/28/22




/*int main() {
	
	printString("Hi!");

	nuke();

	cout << "Hello!\n";
	keepWindowOpen();
} */


// Brandon Forsythe
//CS201-Redux HW03A3
// 3/1/22
// Fixed Kelvin converter

/* double ctok(double c) {
	int k = c + 273.15;
	return k; // "return int", should be "return k"
}

int main() {

	double c = 0;
	cout << "Enter a value to convert to Kelvin: "; // original code did not prompt user.
	cin >> c; // "cin >> d", d does not exist.

	double k = ctok(c); // "ctok("c"), is type char, not int.
	cout << k << "\n"; // cout was capitalized, single quotes around new line, slash was the incorrect direction.
} */

//Brandon Forsythe
//CS201-Redux HW03A4
//3/2/22

//Quadratic Formula calculator

void quadratic(double a,double b,double c) {

	double gatekeeper = sqrt((b * b) - (4 * a * c));
	cout << gatekeeper;

	double quadSolvedpositive = (-b + gatekeeper) / (2 * a);
	cout << "Your quadratic using the positive direction is: " << quadSolvedpositive << endl;
	double quadSolvednegative = (-b - gatekeeper) / (2 * a);
	cout << "Your quadratic using the negative direction is: " << quadSolvednegative << endl;

}

int main() {

	cout << "Please enter three numbers to calculate the quadratic formula: ";

	double a, b, c;

	cin >> a >> b >> c;

	quadratic(a,b,c);
}