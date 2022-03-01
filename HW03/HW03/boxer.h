#pragma once

#include <iostream>
#include <string>

using namespace std;


#ifndef boxer.h

void boxDefine() {
	
	int layers;
	int positiveLayer;
	string inside;
	
	int i;

	cout << "Please enter the amount of layers you'd like inside of your box ";
	cin >> layers;

	cout << "Please enter a string to go inside of your box ";
	cin >> inside;

	

	// Top Row Handling

	while (inside != "Quit") {
		if (layers < 0) {
			cout << "The number you've entered is negative, try again\n";
			cin >> layers;
			
		}
		else {

			positiveLayer = layers;
			int length = inside.size() + 2 * (layers)+1;

			for (int layerTot = 0; layerTot < positiveLayer; layerTot++) {

				for (i = 0; i <= length; i++) {
					cout << "*";

				}
				cout << "\n";
			}

			// Middle Rows, and String output

			for (int midloop = 0; midloop < 3; midloop++) {

				if (midloop == 1) {

					for (int k = 0; k < layers; k++) {
						cout << "*";
					}
					cout << " " << inside << " ";

					for (int k = 0; k < layers; k++) {
						cout << "*";
					}
					midloop++;
					cout << "\n";

				}

				for (int k = 0; k < layers; k++) {
					cout << "*";
				}
				for (int j = 0; j < inside.size() + 2; j++) {
					cout << " ";
				}
				for (int k = 0; k < layers; k++) {
					cout << "*";
				}
				cout << "\n";


			}
			//Bottom Handling

			for (int layerTot = 0; layerTot < layers; layerTot++) {

				for (i = 0; i <= length; i++) {
					cout << "*";

				}
				cout << "\n";
			}
		}

		cout << "Please enter another number / string set to compute again: ";
		cin >> layers;
		cin >> inside;
	}
	
}

#endif // !boxer.h
