/*Question No 6. Write a C++ program to find the largest of three numbers using nested if-
else statements. Explain why are nested if-else statements necessary in this case?*/
#include <iostream>
using namespace std;

int a, b, c;

int main() {
    cout << "enter number 1" << endl;
    cin >> a;
    cout << "enter number 2" << endl;
    cin >> b;
    cout << ";enter number 3" << endl;
    cin >> c;
    
    if (a >= b) {
        if (a >= c) {
        cout << "number 1 is largest" << endl;
        }
        else {
        cout << "number 3 is largest" << endl;
        }
    }
    else {
        if (b >= c) {
            cout << "number 2 is largest" << endl;
        }
        else {
            cout << "number 3 is largest" << endl;
        }
    }
    return 0;
}

/*if-else statements will have to be nested because several comparisons must be made to find out
which one of the three numbers is the largest. The outer if-else compares two numbers, and the
inner if-else compares the third number with the result of the first comparison. The logic would
then be somewhat cumbersome and less readable in the absence of the nested if-else statements.*/