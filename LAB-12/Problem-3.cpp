#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num, sum = 0;
    cout << "enter number: ";
    cin >> num;

    for (int i = 1; i <= num; i ++) {
        cout << pow(i, 2) << endl;
        sum += pow(i, 2);
    }
    cout << "sum = " << sum << endl;
    return 0;
}

/*Design and write a C++ program that takes as input an integer larger than 1 and calculates the sum
of the squares from 1 to that integer. The output should be the value of the squares and the sum,
properly labelled on the screen.
For example, if the integer equals “4”, your program would display:
1
4
9
16
Sum=30*/