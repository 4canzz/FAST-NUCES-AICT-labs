#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder, original;
    
    cout << "Enter an integer: ";
    cin >> num;
    original = num;
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    // Check if the original and reversed numbers are the same
    if (original == reverse) {
        cout << "The number is a palindrome." << endl;
    } 
    else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}

/*Write a C++ code that takes an integer input and checks if it’s a palindrome.
A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) 
that remains the same when its digits are reversed. In other words, it has reflectional symmetry across a vertical axis.*/