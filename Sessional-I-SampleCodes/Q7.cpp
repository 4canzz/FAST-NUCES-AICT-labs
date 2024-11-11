/*7. Write a C++ program that checks whether a number is part of the Fibonacci sequence.*/
#include <iostream>
using namespace std;

int main() {
    int input, a = 0, b = 1, fib_seq_val = 0;
    bool isFib = false;

    cout << "Enter a number: ";
    cin >> input;

    // Loop until `fib_seq_val` exceeds or matches `input`
    while (fib_seq_val <= input) {
        if (fib_seq_val == input) { // Check if we have a match
            isFib = true;
            break;
        }
        fib_seq_val = a + b; // Generate the next Fibonacci number
        a = b;
        b = fib_seq_val;
    }

    if (isFib) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}