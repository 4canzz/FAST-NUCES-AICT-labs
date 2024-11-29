/*Question No. 7 Marks: 10
Write a recursive function to compute the n-th Fibonacci number.*/

#include <iostream>
using namespace std; 

int fibonacci(int n);

int main() {
	int n;
	cout << "Enter n to get nth term of fibonacci series: ";
	cin >> n;
	while (n <= 0) {
		cout << "please enter a number greater than 0: ";
		cin >> n;
	}

	cout << "the nth term of fibonacci series is : " << fibonacci(n) << endl;
}

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}