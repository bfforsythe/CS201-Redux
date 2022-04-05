//Brandon Forsythe
//CS201-Redux HW04
//3/7/22




#include "std_lib_facilites.h"


// ************************************************************ HW04 

/* #include "HW04.h"

int main() {

	AnalyzeTokens();

} */


//*****************************************************************HW04 A1


#include<stdlib.h>

int main() {
	vector<int> answer;
	int indAns;
	int guess1 = 0, guess2 = 0, guess3 = 0, guess4 = 0;
	vector<int> guessVec{ guess1, guess2, guess3, guess4 };


	// RNG 

	srand(time(0));

	for (int i = 0; i < 4; i++) {
		indAns = rand() % 10;
		answer.push_back(indAns);

		for (int j = 0; j < i; j++) {
			if (answer[j] == answer[i]) {
				i--;
			}
		}
	}

	// Gameplay

	int bulls = 0;
	int cows = 0;

	cout << "Please Guess the Bull/Cow combination: ";



	while (guessVec != answer) {

		cin >> guess1 >> guess2 >> guess3 >> guess4;
		vector<int> guessVec{ guess1, guess2, guess3, guess4 };


		if (guess1 < 0 || guess2 < 0 || guess3 < 0 || guess4 < 0) {
			cout << "Answer: ";
			for (int ans = 0; ans < answer.size(); ans++) {
				cout << answer.at(ans) << " ";
			}
			return(0);
		}

		// Bull Handling

		for (int i = 0; i < guessVec.size(); i++) {
			if (guessVec.at(i) == answer.at(i)) {
				bulls++;
			}
			else {
				bulls = 0;
			}
		}
		cout << "Bulls: " << bulls << "\n";

		if (bulls == 4) {
			cout << "You Win!";
			return(0);
		}

		// Negative Answer Handling




	}
}