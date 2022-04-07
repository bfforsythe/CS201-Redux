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


/* #include<stdlib.h>

int main() {
	vector<int> answer;
	int indAns;
	int guess1 = 0, guess2 = 0, guess3 = 0, guess4 = 0;
	vector<int> guessVec{ guess1, guess2, guess3, guess4 };


	// RNG 

	srand((unsigned int)time(0));

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


		// Negative Answer Handling

		if (guess1 < 0 || guess2 < 0 || guess3 < 0 || guess4 < 0) {
			cout << "Answer: ";
			for (int ans = 0; ans < answer.size(); ans++) {
				cout << answer.at(ans) << " ";
			}
			return(0);
		}

		// Bull Handling

		for (int i = 0; i < answer.size(); i++) {
			if (guessVec.at(i) == answer.at(i)) {
				bulls++;
			}
		}
		cout << "Bulls: " << bulls << "\n";

		if (bulls == 4) {
			cout << "You Win!";
			return(0);
		}
		else {
			bulls = 0;
		}

		// Cow Handling


		for (int i = 0; i < answer.size(); i++) {
			if (guessVec.at(i) == answer[0] ||
				guessVec.at(i) == answer[1] ||
				guessVec.at(i) == answer[2] ||
				guessVec.at(i) == answer[3]) {
				
				cows++;
			}
		}
		cout << "Cows: " << cows << "\n";
		cows = 0;





	}
} */


// ************************************************************************** HW04 A2


// FIFO


void FifoPush(vector<string>& container, string item) {

	container.push_back(item);
	}

void FifoPop(vector<string>& container) {

	string item;
	FifoPush(container, item);
	cout << "FIFO >> ";
	for (int i = 0; i < container.size(); i++) {
		cout << container.at(i) << " ";
	}


}

// LIFO

void LifoPush(vector<string>& lcontainer, string item) {

	lcontainer.push_back(item);
}

void LifoPop(vector<string>& lcontainer) {

	string item;
	LifoPush(lcontainer, item);
	cout << "LIFO >> ";
	for (int i = lcontainer.size() - 1; i >= 0; i--) {
		cout << lcontainer[i] << " ";
	}
}


int main() {
	cout << "|| Welcome to the marginally entertaining display of vectors being funky || \n";

	vector<string> container;
	vector<string> lcontainer;


	FifoPush(container, "a");
	FifoPush(container, "b");
	FifoPush(container, "c");
	FifoPush(container, "d");
	FifoPush(container, "e");
	FifoPush(container, "f");
	FifoPush(container, "g");

	FifoPop(container);
	cout << std::endl;

	LifoPush(lcontainer, "a");
	LifoPush(lcontainer, "b");
	LifoPush(lcontainer, "c");
	LifoPush(lcontainer, "d");
	LifoPush(lcontainer, "e");
	LifoPush(lcontainer, "f");
	LifoPush(lcontainer, "g");

	LifoPop(lcontainer);

}

