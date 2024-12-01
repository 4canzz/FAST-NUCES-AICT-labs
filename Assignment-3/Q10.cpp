/*Question No. 10 Marks: 10
Implement a recursive function to calculate the GCD of two numbers using the Euclidean algorithm.*/
#include <iostream>
using namespace std;

int gcd(int num1, int num2);

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    while(num1 < 0 || num2 < 0) {
        cout << "pleae enter valid input (positive integer): ";
        cin >> num1 >> num2;
    }
    cout << gcd(num1, num2);
    return 0;
}

int gcd(int num1, int num2) {
    if (num2 != 0)
        return gcd(num2, num1 % num2);
    else {
        return num1;
    }
}