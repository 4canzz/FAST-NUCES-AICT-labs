#include <iostream>
using namespace std;

int main () {
    int number, digit, temp, position = -1;
    cout << "Enter an integer (maximum 4 digits): ";
    cin >> number;
    cout << "Enter the digit to find its place value: ";
    cin >> digit;
    temp = number;
    int place = 0;
    while (temp > 0) {
        int currentDigit = temp % 10;
        if (currentDigit == digit) {
            position = place;
        }
        temp /= 10;
        place++
    }
    if (position != -1) {
        if (position == 0) {
            cout << "Units" << endl;
        }
        if (position == 1) {
            cout << "Tens" << endl;
        }
        if (position == 2) {
            cout << "Hundreds" << endl;
        }
        if (position == 3) {
            cout << "Thousands" << endl;
        }
    }
    else {
        cout << "The digit is not present in this number" >> endl;
    }

    return 0;
}

/*Write a program to calculate the place value of digit in an integer.
For example, if the user inputs an integer “6918” and you want to determine the place value of 6,
the output would be “Thousands”. You can include a check for whether that specific digit is
present or not. Your program should work for a maximum place value of “thousands”.
*Units; tens; hundreds; thousands.*/