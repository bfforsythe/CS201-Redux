// Brandon Forsythe
// CS201 Redux HW01
// 2/4/22
// Makes a diamond given a postive integer input



#include <iostream>
#include <string>
#include <iomanip>

/*
int main()
{
	using std::cout;
	using std::cin;

	int input;


		cout << "Please Enter a Diamond Size \n";
		cin >> input;

	int space = input - 1;

		for (int i = 0; i < input; i++) {

			for (int j = 0; j < space; j++)
				cout << " ";
			space--;
			for (int j = 0; j <= 2*i; j++)
				cout << "#";

			cout << std::endl;

	}
		space = 1;

		for (int inot = 1; inot <= (input - 1); inot++) {

			for (int j = 1; j <= space; j++)
				cout << " ";
				space++;

				for (int j = 1; j <= 2 * (input-inot) -1; j++)
					cout << "#";
				cout << std::endl;
		}


} */



// Brandon Forsythe
// CS201 Redux HW01 A1
// 2/4/22
// Prints greatest positive number


/* int main() {

	using namespace std;

	cout << "Please enter a positive integer, This will tell you the greatest number entered. \n\n Please enter zero to end";

	int new_int = 1;
	int stored_int = 0;

	while (new_int != 0) {



		cin >> new_int;

		if (new_int > stored_int) {
			stored_int = new_int;
		}

		//Quit Handling

		if (new_int <= 0) {
			cout << "Your Highest Number Was: " << stored_int;
			break;
		}
	}
}
*/


// Brandon Forsythe
// CS201 Redux HW01 A2
// 2/4/22
// Dot & Cross Product

/* int main() {

	using namespace std;

	float ax, ay, az;
	float bx, by, bz;

	cout << "Please input 3 numbers to find the cross & dot product of \n";

	cin >> ax >> ay >> az;

	cout << "You've entered " << ax << ", " << ay << ", " << az << ", \n\n";

	cout << "Now enter another set of three digits to find the cross & dot product of \n";

	cin >> bx >> by >> bz;

	cout << "You've entered " << bx << ", " << by << ", " << bz << ", \n\n";

	//Dot Product AxBx + AyBy + AzBz
	int dotprod;

	dotprod = (ax * bx) + (ay * by) + (az * bz);

	cout << std::setprecision(5) << "The dot Product is: " << dotprod << "\n";

	// Cross Product AyBz - AzBy, AzBx - AxBz, AxBy - AyBx

	int crossprodx, crossprody, crossprodz;

	crossprodx = (ay * bz) - (az * by);
	crossprody = (az * bx) - (ax * bz);
	crossprodz = (ax * by) - (ay * bx);

	cout << std::setprecision(5) << "The cross Product is: " << "< " << crossprodx << ", " << crossprody << ", " << crossprodz << " >";

} */

//Brandon Forsythe
//CS 201 Redux HW01 A3
// 2/4/22
// Grid.cpp

 /*int main() {

	using namespace std;

	int rows;
	int columns;
	int i = 0;

	while (i >= 0) {


		cout << "\n Please Enter Rows and Columns to Generate a field\n";

		cin >> rows >> columns;



		int total = (rows * columns);
		int k = 0;

		for (int j = 0; j != total; j++) {


			if (k == rows) {
				std::cout << "\n";
				k = 0;
			}

			k++;
			cout << " . ";
		}

		if (rows <= 0 || columns <= 0) {
			break;
		}

	}
} */

//Brandon Forsythe
//CS201 Redux HW01 A4
// 2/4/22
// mileskm.cpp


int main() {

	using namespace std;


	cout << "Please enter Miles to be converted into Kilometers\n";

	float miles;
	cin >> miles;

	cout << "\n There are " << setprecision(5) << (miles / 1.609) << " Kilometers in " << miles << " miles.";

}