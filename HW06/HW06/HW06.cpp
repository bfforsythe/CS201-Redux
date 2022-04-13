/* #include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

void randomBetweenU() {

	std::random_device r;

	std::default_random_engine uni(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	int randNo = uniform_dist(uni);

	std::cout << "Using Uniform Distribution: " << randNo << "\n";


	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(randNo, 2);
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(uniform_dist(e2))];
	}

	std::cout << "Random Uniform around " << randNo << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}

	std::cout << "\n";
}

void randomBetweenN() {


	std::random_device r;
	int i = 0;
	int NrandNo;

		std::default_random_engine uni(r());
		std::normal_distribution<> norm_dist(3, 2);
		NrandNo = norm_dist(uni);
		

		std::cout << "Using Normal Distribution: " << NrandNo << "\n";

		// Generate a normal distribution around that mean

		std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
		std::mt19937 e2(seed2);
		std::normal_distribution<> normal_dist(NrandNo, 2);
		std::map<int, int> hist;
		for (int n = 0; n < 10000; ++n) {
			++hist[std::round(normal_dist(e2))];
		}

		std::cout << "Normal distribution around " << NrandNo << ":\n";
		for (auto p : hist) {
			std::cout << std::fixed << std::setprecision(1) << std::setw(2)
				<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
		}
}

void randomBetween() {

	srand(time(0));

	int rando = rand() % 6;

	std::cout << "Random Using sRand: " << rando << "\n";

	std::cout << "Using Normal Distribution: " << rando << "\n";

	// Generate a normal distribution around that mean
	std::normal_distribution<> normal_dist(rando, 2);
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		rando = rand() % 6;
		++hist[std::round(rando)];
	}

	std::cout << "Normal distribution around " << rando << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200 , '*') << '\n';
	}
}


int main()
{
	randomBetweenU();
	randomBetweenN();
	randomBetween();
} */


// ************************************* HW06 A1 Hangman

/*
#include "std_lib_facilites.h"


#include <algorithm>


int main() {

	std::map<int, string> words;

	words.insert(std::pair<int, string>(0, "sweaty"));
	words.insert(std::pair<int,string>(1,"crispy"));
	words.insert(std::pair<int, string>(2, "splint"));
	words.insert(std::pair<int, string>(3, "ocean"));
	words.insert(std::pair<int, string>(4, "hydrant"));
	words.insert(std::pair<int, string>(5, "hamburg"));

	// Pulls a random word out of the map above

	srand(time(0));
	
	int wordPicker = rand() % 5;
	string guessed = words.at(wordPicker);

	// Creates a vector that splits string into chars

	vector<char> ansVec(guessed.begin(), guessed.end());


	// Checking
	
	vector<char> savedVec;
	int gameOver = 0;

	for (int i = 0; i < ansVec.size(); i++) {
		savedVec.push_back('_');
	}

	cout << ansVec.size();

	while (savedVec != ansVec && gameOver != 10) {

		char letterGuess;
		cin >> letterGuess;

		for (int i = 0; i < ansVec.size(); i++) {
			if (letterGuess == ansVec.at(i)) {
				savedVec[i] = letterGuess;
				gameOver--;
			}
			cout << savedVec.at(i);
			cout << " ";
		}
		gameOver++;
	}

	cout << "\n The answer was: " << guessed;

	


} 
*/


// ****************************************************** HW06 A2

#include "std_lib_facilites.h"
#include <numeric>


struct Record {
	double unitPrice;
	int units;
};

Record records;


int main() {




	std::map <string, Record> Catalogue;

		Catalogue["Cheese"] = {3.00,1};
		Catalogue["Big Cheese"] = {9.00, 1};
		Catalogue["Shrimp"] = {6.99, 1};
		Catalogue["Lobster"] = { 18.75, 1};
		Catalogue["Greened Beans"] = { 5.20, 1};

		cout << "Welcome to the Market! ";
		cout << "\n\n Our Selection is:\n";
		
		for (auto& t : Catalogue) {
			cout << t.first << " " 
				<< std::fixed 
				<< std::showpoint 
				<< std::setprecision(2)
				<< t.second.unitPrice << " "
				<< t.second.units << "\n";
		}

		cout << "Please Choose your Ingredients, then type 'Check Out' to Total: ";
		
		string choice;
		vector<string> item;
		vector<float> prices;
		while (choice != "Check Out") {
			
			getline(cin, choice);
			item.push_back(choice);
		}

		for (int i = 0; i < item.size(); i++) {

			for (auto t : Catalogue) {
				if (item.at(i) == t.first) {
					prices.push_back(t.second.unitPrice);
				}
			}
		}

		float sum = std::accumulate(prices.begin(), prices.end(), 0.0);
		cout << sum;
}



// Catch2 Seems unavailable as of right now. Unable to grab Catch2.hpp.
