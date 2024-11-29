#include <iostream>
#include <cmath>
using namespace std;

bool inputvalidation( int bin);
int bintodec(int bin);

int main(){
	int bin;
	bool isValid = true;
	cout << "Enter Binary Number: ";
	cin >> bin;

	inputvalidation(bin);

	if (inputvalidation(bin)) {
		cout << bin << " in decimal is: " << bintodec(bin) << endl;
	}
	else {
		cout << "Conversion not possible: it is not a binary number" << endl;
	}
	return 0;
}

bool inputvalidation(int bin) {
	for (int i = bin; i > 0; i /= 10) {
		int digit = i % 10; 
		if (digit != 1 && digit != 0) {
			return false;
		}
	}
	return true;
}

int bintodec(int bin) {
	int place = 0, dec = 0;
	for (int i = bin; i > 0; i /= 10) {
		int digit = i % 10;
		dec += digit * static_cast<int>(pow(2, place));
		place++;
	}
	return dec;
}
/*Question No. 2 Marks: 10
Construct a C++ program, which displays the decimal equivalent of, given binary number. Input a binary
number in main function then pass this binary number to the function named decimalConverter which
converts that number into decimal and print the decimal equivalent. Input Validation: The input must only
contain 1 or 0 as its digits. In case of invalid input display on console “Conversion not possible: it is not a
binary number”.*/