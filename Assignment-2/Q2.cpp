/*Question No 2. Write a C++ program that uses nested loops to print a pattern of stars in
the shape of a triangle. Explain why are nested loops necessary for this task?*/

#include <iostream>
using namespace std;

const int rows = 5;
//here the number of rows is 5 as an example
int main() {
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
return 0;
}
/*Nested loops are needed because they allow multi-level iterations, which is needed to print the
shape of this triangle. The outer loop goes through each row and the inner loop prints the
required number of stars at a given row depending on the row number.*/