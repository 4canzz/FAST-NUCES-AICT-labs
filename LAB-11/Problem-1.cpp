#include <iostream>
using namespace std;

int main(){
	int n, sum= 0;
	cout << "enter a number: ";
	cin >> n;

	for (int i = n; i > 0; i--){
		if(i % 2 == 0)
			sum +=i;
	}

	cout << "the sum is:" << sum << endl;
	return 0;
}

/*Lab 6 consisted of 1 dry run and 3 problems, dryrun problems will not be included in this repository
Write a C++ program to compute the sum of first n even numbers. “n” should be taken as an input  from the user. Display the
result of the program on console.*/
