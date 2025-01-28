#include <iostream>
#include <cmath>
using namespace std;

void four_digit_number(int number);

int main () {
    int number;
    cout << "Enter number: ";
    cin >> number;

    four_digit_number(number);
    return 0;
}

void four_digit_number(int number) {
    int sum = 0
    for (int i = 0; i < 4; i++) {
        sum += number % 10;
        number /= 10;
    }
    cout << sum << endl;
}

/*Write a function that takes a four-digit number as input in a single variable from user and
returns the sum of its four digits. If user enters 2345, then output of program should be:14
o The input from user should be taken in main and then passed to the function as
its parameter. The output from function should be displayed on console in main.
o Prototype should be void four_digit_number(int number)*/