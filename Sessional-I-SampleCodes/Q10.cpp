//10. Write a program that takes an integer and checks if it’s a palindrome without using extra space.
#include <iostream>
using namespace std;

int main() {
    int num, original, left_divisor = 1;

    cout << "Enter a number: ";
    cin >> num;
    original = num;

    // Find the divisor to get the leftmost digit
    while (num / left_divisor >= 10) {
        left_divisor *= 10;
    }

    bool isPalindrome = true;
    while (num > 0) {
        int left_digit = num / left_divisor;  // Get the leftmost digit
        int right_digit = num % 10;           // Get the rightmost digit

        // Compare leftmost and rightmost digits
        if (left_digit != right_digit) {
            isPalindrome = false;
            break;
        }

        // Remove the leftmost and rightmost digits
        num = (num % left_divisor) / 10;
        left_divisor /= 100;  // Adjust divisor for next leftmost digit
    }

    if (isPalindrome) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is NOT a palindrome." << endl;
    }

    return 0;
}