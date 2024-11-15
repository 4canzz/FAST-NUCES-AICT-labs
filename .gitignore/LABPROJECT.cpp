#include <iostream>
#include <fstream>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

int secret, attempts, score = 0, diff, guess, maxrange;
char ch;
string hintstring, name, diffname;

string hint() {
	int randhint = rand() % 2;
	switch (randhint) {
	case 0:
		if (secret % 2 == 0) {
			hintstring = "HINT: the secret number is even";
			return hintstring;
		}
		else {
			hintstring = "HINT: the secret number is odd";
			return hintstring;
		}
		break;
	case 1:
		if (secret > maxrange / 2) {
			hintstring = "HINT: secret number lies in the upper half of the range";
			return hintstring;
		}
		else {
			hintstring = "HINT: secret number lies in the lower half of the range";
			return hintstring;
		}
		break;
	}
}

void giveFeedbackandHint(int diff, bool& UsedHint) {
	if (diff == 0) {
		cout << "Correct! You’ve guessed the number." << endl;
	}
	else if (diff < 10) {
		cout << "Almost there!" << endl;
	}
	else if (diff >= 10 && diff < 20) {
		cout << "You're getting close!" << endl;
	}
	else if (diff >= 20 && diff < 40) {
		cout << "Still quite far." << endl;
	}
	else {
		cout << "Way off." << endl;
	}
	cout << "Would you like a hint? (y/n)" << endl;
	cin >> ch;
	while (ch != 'y' && ch != 'n') {
		cout << "please enter valid input: ";
		cin >> ch;
	}
	if (ch == 'y') {
		cout << hint() << endl;
		UsedHint = true;
	}
}

int easydiff() {
	secret = (rand() % 50) + 1;
	attempts = 12;
	maxrange = 50;
	cout << "A random number has been set, guess the number!" << endl;
	cout << endl << "Game Started!" << endl;
	while (attempts != 0) {
		bool UsedHint = false;
		cout << "guesses left: " << attempts << endl;
		cout << "take a guess: ";
		cin >> guess;

		while (guess < 1 || guess > 50) {
			cout << "make a valid guess (1-50): ";
			cin >> guess;
		}

		diff = abs(secret - guess);

		if (secret > guess) {
			cout << "Try a higher number!" << endl;
		}
		else {
			cout << "Guess lower!" << endl;
		}

		if (diff == 0) {
			cout << "Correct! You’ve guessed the number." << endl;
			break;
		}
		giveFeedbackandHint(diff, UsedHint);

		if (UsedHint == true) {
			score -= 5;
		}
		attempts--;
	}

	if (attempts == 0) {
		cout << "Bad Luck! You lost! The Secret Number was: " << secret;
	}

	else {
		score += attempts * 10;
		cout << "your score is :" << score << endl;
		return 0;
	}
}

int stddiff() {
	secret = (rand() % 100) + 1;
	attempts = 10;
	maxrange = 100;
	cout << "A random number has been set, guess the number!." << endl;
	cout << "Game Started!" << endl;

	while (attempts != 0) {
		bool UsedHint = false;
		cout << "guesses left: " << attempts << endl;
		cout << "take a guess: ";
		cin >> guess;
		while (guess < 1 || guess > 100) {
			cout << "make a valid guess (1-100): ";
			cin >> guess;
		}

		diff = abs(secret - guess);

		if (secret > guess) {
			cout << "Guess Higher!" << endl << endl;
		}
		else {
			cout << "try a lower number!" << endl << endl;
		}

		if (diff == 0) {
			cout << "Correct! You’ve guessed the number." << endl;
			break;
		}

		giveFeedbackandHint(diff, UsedHint);

		if (UsedHint == true) {
			score -= 5;
		}
		attempts--;
	}

	if (attempts == 0) {
		cout << "Bad Luck! You lost! The Secret Number was: " << secret;
		return 0;
	}

	else {
		score += attempts * 10;
		cout << "your score is :" << score << endl;
		return 0;
	}
}

int harddiff() {
	secret = (rand() % 200) + 1;
	attempts = 8;
	maxrange = 200;
	cout << "A random number has been set, guess the number!" << endl;
	cout << "Game Started!" << endl;

	while (attempts != 0) {
		bool UsedHint = false;
		cout << "guesses left: " << attempts << endl;
		cout << "take a guess: ";
		cin >> guess;
		while (guess < 1 || guess > 200) {
			cout << "make a valid guess (1-200): ";
			cin >> guess;
		}

		if (secret > guess) {
			cout << "Guess higher number!" << endl << endl;
		}
		else {
			cout << "try a lower number!" << endl << endl;
		}

		if (diff == 0) {
			cout << "Correct! You’ve guessed the number." << endl;
			break;
		}

		giveFeedbackandHint(diff, UsedHint);

		
		if (UsedHint == true) {
			score -= 5;
		}
		attempts--;
	}

	if (attempts == 0) {
		cout << "Bad Luck! You lost! The Secret Number was: " << secret;
	}

	else {
		score += attempts * 10;
		cout << "your score is :" << score << endl;
		return 0;
	}
	return score;
}

void game(int a) {
	ofstream out;
	out.open("score.txt", ios::app);

	if (a == 1) {
		diffname = "easy";
		easydiff();
	}
	else if (a == 2) {
		diffname = "medium";
		stddiff();
	}
	else if (a == 3) {
		diffname = "hard";
		harddiff();
	}

	char cont;
	cout << "do you want to continue? (y/n)" << endl;
	cin >> cont;

	while ((cont != 'y' && cont != 'n')) {
		cout << "please enter valid difficulty: ";
		cin >> diff;
	}

	if (cont == 'y') {
		out << name << "\t" << diffname << "\t" << score << endl;
		out.close();
		cout << "choose difficulty: ";
		cin >> diff;
		while ((diff <= 0 || diff > 3)) {
			cout << "please enter valid difficulty: ";
			cin >> diff;
		}
		game(diff);
	}
	else {
		cout << "thank you for playing! you can check your score in score.txt" << endl;
		out << name << "\t" << diffname << "\t" << score << endl;
		out.close();
	}
}

int main() {
	cout << "************************************************************************************************************************" << endl;
	cout << "\t\t\t\t\tWelcome to the Number Guessing Game!" << endl << "Difficulties:" << endl;
	cout << "Easy (1): Range 1-50, 12 attempts" << endl << "Medium (2): Range 1-100, 10 attempts" << endl << "Hard (3): Range 1-200, 8 attempts" << endl;
	cout << "You can take a hint anytime by entering 'y' after your attempt. but it will cost you one ADDITIONAL attempt."  << endl;
	cout << "************************************************************************************************************************" << endl;
	cout << "Enter your name for scorekeeping: ";
	cin >> name;
	cout << "Easy (1): Range 1-50, 12 attempts" << endl << "Medium (2): Range 1-100, 10 attempts" << endl << "Hard (3): Range 1-200, 8 attempts" << endl;
	cout << "choose difficulty: ";
	cin >> diff;

	while ((diff <= 0 || diff > 3)) {
		cout << "please enter valid difficulty: ";
		cin >> diff;
	}

	game(diff);

	return 0;
}