#include <iostream>
#include <cmath>
using namespace std;

void median (double a, double b, double c);

int main () {
    double a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    median(a, b, c);

    return 0;
}

void median (double a, double b, double c) {
    int med = 0;
    if (b < a && a > c || a < b && c > a) {
        med = a;
    }
    else if (c < b && b > a || c < b && b > a) {
        med = b;
    }
    else {
        med = c;
    }

    cout << "median value is" << med << endl;
}

/*Write a function that determines the median of three input numbers. The median is the middle
number when the three numbers are arranged in order. However, the user can input the values
in any order, so your program must determine which value is between the other two. For
example, if the user enters:
41.52; 27.18; 96.03
Then the program would output:
The median of 41.52, 27.18 and 96.03 is 41.52*/