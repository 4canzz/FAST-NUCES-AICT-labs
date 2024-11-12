//12. Write a program to display all prime numbers within a given range.
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        if (i < 2) continue; // 0 and 1 are not prime

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; // Found a divisor, not prime
                break; // No need to check further
            }
        }

        if (isPrime) {
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}
