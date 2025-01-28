#include <iostream>
#include <cmath>
using namespace std;

int main () {
    for (int i =1; i<=10; i++) {
        cout << "--------------table of " << i << " -----------------" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << j << " x " << i << " = " << i * j << endl;
        }
        cout << "-------------------------------------------" << endl;
    }
    return 0;
}

/*Write a C++ program that uses nested for – loops to print first 10 entries of tables of 1 to 10.*/