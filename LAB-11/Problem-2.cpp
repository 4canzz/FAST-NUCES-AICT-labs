#include <iostream>
using namespace std;

int main(){
	int n, sum = 0, i = 1;
	double long fact = 1;
	cout << "enter a number: ";
	cin >> n;

	cout << "integer" << "\t" << "sum" <<"\t"<< "factorial"<< endl;
	
	while (i <= n){
		sum += i;
		fact *= i;
		cout << i << "\t" << sum << "\t" << fact << endl;
		i++;
	}

	return 0;
}

/*Write a C ++ program that calculates the sum and factorial of the integers for each integer from 1 to n. Where n is a positive integer that you enter.
integer	sum	factorial
1	    1	1
2	    3	2
3	    6	6
4	    10	24
5	    15	120

use while loop*/
