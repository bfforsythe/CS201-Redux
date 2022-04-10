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


// ************************************* HW06 A2 Hangman

#include "std_lib_facilites.h"
#include <algorithm>

int main() {

	std::map<int, string> words;

	words.insert(std::pair<int, string>(0, "Sweater"));
	words.insert(std::pair<int,string>(1,"Notebook"));
	words.insert(std::pair<int, string>(2, "River"));
	words.insert(std::pair<int, string>(3, "Ocean"));
	words.insert(std::pair<int, string>(4, "Hydrant"));
	words.insert(std::pair<int, string>(5, "Streetlight"));

	// Pulls a random word out of the map above

	srand(time(0));
	
	int wordPicker = rand() % 5;
	string guessed = words.at(wordPicker);

	// Creates a vector that splits string into chars

	vector<char> guessChar(guessed.begin(), guessed.end());

	// Guesser Handling

	char letterGuess = 'a';
	vector<char>guessVec;
	

	while (letterGuess != '0') {
		cin >> letterGuess;
		guessVec.push_back(letterGuess);
	}
	guessVec.pop_back();

	// Checking

	bool isSame = guessVec == guessChar;

	std::for_each(guessChar.begin(), guessChar.end(), isSame);

}
