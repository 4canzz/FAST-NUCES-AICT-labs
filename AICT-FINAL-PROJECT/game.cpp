//Copyright (c) 2024 24L6116, 24L6065
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

// Function protypes
void IntInputValidation(int& x, int upval, int lowval);		// Validates integer input within specified bounds
string hint();											    // Generates a hint based on the secret number
void giveFeedbackandHint(int difference, bool& UsedHint);	// Provides feedback on the player's guess and optionally offers a hint
void dynamicdiff(int maxrange, int attempts);				// Implements the main guessing game logic based on difficulty
void game(int difficulty);									// Handles game setup and looping logic

int secret, attempts, score = 0, difference, difficulty, guess, maxrange;
string name, diffname;

int main() {
	srand(time(0));
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "|\t\t\t\t\tWelcome to the Number Guessing Game!						|" << endl;
	cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Difficulties:                                                                                                         |" << endl;
	cout << "|Easy (1): Range 1-50, 12 attempts                                                                                     |" << endl;
	cout << "|Medium (2): Range 1-100, 10 attempts                                                                                  |" << endl;
	cout << "|Hard (3): Range 1-200, 8 attempts                                                                                     |" << endl;
	cout << "|You can take a hint anytime by entering 'y' after your attempt, however Each hint request deducts 5 points from the	|" << endl;
	cout << "|total score, along with an additional attempt.										|" << endl;
	cout << "_______________________________________________________________________________________________________________________" << endl;
	cout << "Enter your name for scorekeeping: ";
	getline(cin, name);
	cout << "welcome, " << name << ", choose a difficulty : ";

	IntInputValidation(difficulty, 3, 1);

	game(difficulty);

	return 0;
}

void IntInputValidation(int& x, int upval, int lowval) {
	while (!(cin >> x) || x < lowval || x > upval) {
		cout << "Invalid input. Please enter an integer between " << lowval << " and " << upval << " : ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

string hint() {
	string hintstring;
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
	case 1:
		if (secret > maxrange / 2) {
			hintstring = "HINT: secret number lies in the upper half of the range";
			return hintstring;
		}
		else {
			hintstring = "HINT: secret number lies in the lower half of the range";
			return hintstring;
		}
	default:
		return "";
	}
}

void giveFeedbackandHint(int difference, bool& UsedHint) {
	if (difference == 0) {
		cout << "Correct! You’ve guessed the number." << endl;
		return;
	}
	else if (difference < 10) {
		cout << "Almost there!" << endl;
	}
	else if (difference >= 10 && difference < 20) {
		cout << "You're getting close!" << endl;
	}
	else if (difference >= 20 && difference < 40) {
		cout << "Still quite far." << endl;
	}
	else {
		cout << "Way off." << endl;
	}
	if (difference > 0) {
		char ch;
		cout << "Would you like a hint? (y/n)" << endl;
		cin >> ch;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while (ch != 'y' && ch != 'n') {
			cout << "please enter valid input: ";
			cin >> ch;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		if (ch == 'y') {
			cout << hint() << endl;
			cout << "Hint used! 5 points and 1 attempt deducted." << endl;
			UsedHint = true;
		}
	}
}

void dynamicdiff(int maxrange, int attempts) {
	score = 0;
	secret = (rand() % maxrange) + 1;
	cout << "A random number has been set, guess the number!" << endl;
	cout << "Game Started!" << endl;

	while (attempts != 0) {
		bool UsedHint = false;
		cout << "guesses left: " << attempts << endl;
		cout << "take a guess: ";

		IntInputValidation(guess, maxrange, 1);

		difference = abs(secret - guess);

		if (difference != 0) {
			if (secret > guess) {
				cout << "Try a higher number!" << endl;
			}
			else if (secret < guess){
				cout << "Guess lower!" << endl;
			}
		}

		if (difference == 0) {
			score += attempts * 10;
			cout << "Correct! You’ve guessed the number." << endl;
			cout << "your score is :" << score << endl;
			return;
		}

		if (attempts > 1) {
			giveFeedbackandHint(difference, UsedHint);
			if (UsedHint) {
				score -= 5;
				attempts--;
			}
		}
		else {
			cout << "Hints are not available on the last attempt!" << endl;
		}
		attempts--;
	}

	if (attempts == 0) {
		cout << "Bad Luck! You lost! The Secret Number was: " << secret << " your score is: " << score << endl;
	}
}

void game(int difficulty) {
	ofstream out;
	out.open("score.txt", ios::app);

	while (true) {
		if (difficulty == 1) {
			diffname = "easy";
			dynamicdiff(50, 12);
		}
		else if (difficulty == 2) {
			diffname = "medium";
			dynamicdiff(100, 10);
		}
		else if (difficulty == 3) {
			diffname = "hard";
			dynamicdiff(200, 8);
		}

		out << "Player: " << name << endl;
		out << "Difficulty: " << diffname << endl;
		out << "Final Score: " << score << endl;
		out << "---------------------------------" << endl;

		char cont;
		cout << "do you want to continue? (y/n)" << endl;
		cin >> cont;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while ((cont != 'y' && cont != 'n')) {
			cout << "please enter 'y' or 'n': ";
			cin >> cont;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		if (cont == 'n') {
			break;
		}

		cout << "Choose difficulty: ";
		IntInputValidation(difficulty, 3, 1);
	}
	out.close();
}
