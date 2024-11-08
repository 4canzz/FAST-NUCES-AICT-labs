#include <iostream>
using namespace std;

int main(){
	int n, a = 0, b = 1, temp = 0; 
	cout << "enter a number: ";
	cin >> n;

	while (a < n) {
			temp = a + b;
			a = b;
			b = temp;
			cout << temp <<", ";
    }

	cout << endl;
	return 0;
} 

/*Determine the pattern followed by the series below:
1, 2, 3, 5, 8, 13, 21, 34, …
Write a program that takes a number ‘n’ and prints first ‘n’ numbers of this series. For example, if user enters 6, 
your program should display
1, 2, 3, 5, 8, 13*/