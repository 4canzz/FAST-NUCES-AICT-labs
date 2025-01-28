#include <iostream>
#include <cmath>
using namespace std;

void calculateRoots(double a, double b, double c);

int main () {
    double a, b, c;
    cout << "Enter values of a, b and, c: ";
    cin >> a >> b >> c;

    if (pow(b, 2) - 4 * a * c) {
        calculateRoots(a, b, c);
    }
    else {
        cout << "this equation has no real roots" << endl;
    }
    
    return 0;
}

void calculateRoots(double a, double b, double c) {
    double bsquaredminus4ac = b * b -(4 * a *c);
    double root1 = (-b + sqrt(bsquaredminus4ac) / 2 * a);
    double root2 = (-b - sqrt(bsquaredminus4ac) / 2 * a);

    cout << "root 1 is: " << root1 << " and root 2 is " << root2 << endl;
}

/*Write a void function calculateRoots( ) that takes three input parameters ‘a’, ‘b’, ‘c’; computes
two roots and display them on console. You may use pre-defined functions for taking square
and square root.

Write a main() to test your function. Take values of ‘a’, ‘b’, ‘c’ from
user. This program solve quadratic equation only for this condition.*/