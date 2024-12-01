/*Question No. 6 Marks: 10
Construct a recursive function to calculate the factorial of a given number n. Also write main function to
check its functionality.*/
#include <iostream>
using namespace std; 

int factorial (int n);

int main() {
    int n;
    cout << "enter positive integer: ";
    cin >> n;
    while ( n < 0) {
        cout << "please enter positive integer: " << endl;
        cin >> n;
    }
    cout << factorial(n) << endl;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}