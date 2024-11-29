#include <iostream>
using namespace std;

void tutorial();
void sellcoffee(float smallcup, float mediumcup, float largecup, int smallcupoz, int mediumcupoz, int largecupoz, int& smallcupsold, int& mediumcupsold, int& largecupsold, int& fluidounces, double& revenue);
void cupssoldfunction(int smallcupsold, int mediumcupsold, int largecupsold);
void fluidouncessold(int fluidounces);
void totalmoneymade(double revenue);

int main() {
	const float smallcup = 1.75, mediumcup = 1.90, largecup = 2.00; // cup prices
	const int smallcupoz = 9, mediumcupoz = 12, largecupoz = 15; // cup size in ounces
	int smallcupsold = 0, mediumcupsold = 0, largecupsold = 0, fluidounces = 0;
	double revenue = 0;
	int option;
	do {
		tutorial();

		cin >> option;
	
		while (option < 0 || option > 4) {
			cout << "please enter valid option : ";
			cin >> option;
		}

		if (option == 1) {
			sellcoffee(smallcup, mediumcup, largecup, smallcupoz, mediumcupoz, largecupoz, smallcupsold, mediumcupsold, largecupsold, fluidounces, revenue);
		}
		else if (option == 2) {
			cupssoldfunction(smallcupsold, mediumcupsold, largecupsold);
		}
		else if (option == 3) {
			fluidouncessold(fluidounces);
		}
		else if (option == 4) {
			totalmoneymade(revenue);
		}
	} while (option != 0);

	cout << "Thank you for visiting Jason's Coffee Shop!" << endl;
	return 0;
}

void tutorial() {
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "                                           Welcome to Jason's Coffee Shop!                                              " << endl;
	cout << "press 1 to buy coffee                                                                                                   " << endl;
	cout << "press 2 view amount of cups sold today                                                                                  " << endl;
	cout << "press 3 to view amount of fluid ounces sold today                                                                       " << endl;
	cout << "press 4 to view amount of revenue today                                                                                 " << endl;
	cout << "press 0 to exit                                                                                                         " << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "Enter choice: " << endl;
}

void sellcoffee(float smallcup, float mediumcup, float largecup, int smallcupoz, int mediumcupoz, int largecupoz, int& smallcupsold, int& mediumcupsold, int& largecupsold, int& fluidounces, double& revenue) {
	float bill = 0;
	int option;
	char cont;
	bool continew = true;
	cout << "small cup (9 oz) = $1.75, medium cup (12 oz) = $1.90, large cup (15 oz) = $2.00" << endl;
	cout << "enter 1 for 9 oz, 2 for 12 oz, 3 for 15 oz: ";
	while (continew) {
		cin >> option;
		while (option < 0 || option > 3) {
			cout << "please enter valid option : ";
			cin >> option;
		}

		if (option == 1) {
			bill = bill + smallcup;
			fluidounces += smallcupoz;
			smallcupsold++;
		}
		if (option == 2) {
			bill = bill + mediumcup;
			fluidounces += mediumcupoz;
			mediumcupsold++;
		}
		if (option == 3) {
			bill = bill + largecup;
			fluidounces += largecupoz;
			largecupsold++;
		}

		cout << "add more to this order ? " << endl;
		cin >> cont;
		while (cont != 'y' && cont != 'n') {
			cout << "please enter only 'y' or 'n': ";
			cin >> cont;
		}

		if (cont == 'n') {
			continew = false;
		}
	}
	revenue += bill;
	cout << "your bill is : " << bill << endl;
	return;
}

void cupssoldfunction(int smallcupsold, int mediumcupsold, int largecupsold) {
	cout << "Cups sold today:" << endl;
	cout << "Small cups: " << smallcupsold << " cups" << endl;
	cout << "Medium cups: " << mediumcupsold << " cups" << endl;
	cout << "Large cups: " << largecupsold << " cups" << endl;
}

void fluidouncessold(int fluidounces) {
	cout << "fluidounces sold today: " << fluidounces << " oz" << endl;
	return;
}

void totalmoneymade(double revenue) {
	cout << "total revenue today: $ " << revenue << endl;
	return;
}
/*Question No. 5 Marks: 10
Jason opened a coffee shop at the beach and sells coffee in three sizes: small (9 oz), medium (12 oz), and
large (15 oz). The cost of one small cup is $1.75, one medium cup is $1.90, and one large cup is $2.00.
Construct a menu-driven C++ program that will make the coffee shop operational.
Your program should allow the user to do the following:
a. Buy coffee in any size and in any number of cups.
b. At any time show the total number of cups of each size sold.
c. At any time show the total amount of coffee sold.
d. At any time show the total money made.
Your program should consist of at least the following functions: a function to show the user how to use the
program, a function to sell coffee, a function to show the number of cups of each size sold, a function to
show the total amount of coffee sold, and a function to show the total money made. Your program should not
use any global variables and special values such as coffee cup sizes and cost of a coffee cup must be declared
as named constants.*/