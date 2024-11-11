/*2. Write a C++ code that checks if a number is an Armstrong number*/
/*An Armstrong number is a special kind of number in math. It's a number that equals the sum of its digits,
 each raised to a power. For example, if you have a number like 153, it's an Armstrong number because 1^3 + 5^3 + 3^3
 equals 153.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, sum = 0, digits = 0;

    cout << "Enter an integer: ";
    cin >> num;
    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        ++digits;
    }
    original = num;
    // Calculate the sum of each digit raised to the power of the number of digits
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    // Check if the sum equals the original number
    if (sum == num) {
        cout << "The number is an Armstrong number." << endl;
    }
    else {
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}