#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder, original;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    original = num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original and reversed numbers are the same
    if (original == reversed) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    
    return 0;
}

/*Write a C++ code that takes an integer input and checks if it’s a palindrome.*/