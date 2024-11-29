/*Question No. 8 Marks: 10
Write a recursive function to find the sum of digits of a given positive integer.*/

#include <iostream>
using namespace std;

int sum(int n);

int main() {
    int n;
    cout << "enter a number to get a sum of its digits : ";
    cin >> n;
    while (n < 0) {
        cout << "please enter positive number: ";
        cin >> n;
    }
    cout << "the sum of this numbers digits is: " << sum(n) << endl;
}

int sum(int n) { 
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sum(n / 10));
}