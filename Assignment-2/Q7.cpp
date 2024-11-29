/*Question No 7. Write a C++ program to determine if a year is a leap year using an if-
else statement. Explain why are the specific conditions for leap years important to include
in the code?*/
#include <iostream>
using namespace std;

int year;
int main() {
    cout << "enter year: " << endl;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "it is a leap year" << endl;
    }
    else {
        cout << "it is not a leap year" << endl;
    }
    return 0;
}
/*The years that are leap years ensure the conditions that make the calendar accurately align with
Earth&#39;s orbit. A year is a leap year if it is divisible by 4 except for years divisible by 100, unless
these years are also divisible by 400. This removes drift over time from the calendar and
maintains consistency and accuracy in date calculations.*/