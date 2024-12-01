#include <iostream>
using namespace std;

double calculateRetail(double wholesaleprice, double markuppercentage);

int main() {
	double wholesaleprice = 0, markuppercentage = 0;
	cout << "enter retail price and mark up percentage: ";
	cin >> wholesaleprice >> markuppercentage;

	while (wholesaleprice < 0 || markuppercentage < 0) {
		cout << "please enter positive value of enter retail price and mark up percentage: ";
		cin >> wholesaleprice >> markuppercentage;
	}
	cout << "Retail price is : $" << calculateRetail(wholesaleprice, markuppercentage) << endl;
	return 0;
}

double calculateRetail(double wholesaleprice, double markuppercentage) {
	double retailprice = wholesaleprice + (wholesaleprice * (markuppercentage * 0.01));
	return retailprice;
}

/*Question No. 3 Marks: 10
Construct a C++ program that asks the user to enter an items wholesale cost and its markup percentage. It
should then display the items retail price.
For example:
If an item s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
If an item s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s retail price is 7.50.
The program should have a function named calculateRetail that receives the wholesale cost and the markup
percentage as arguments, and returns the retail price of the item. Input Validation: Do not accept negative
values for either the wholesale cost of the item or the markup percentage.*/