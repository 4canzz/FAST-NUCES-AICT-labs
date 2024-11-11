/*5. Create a code that takes an integer input and checks if it’s a prime number using a while loop.*/
#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    }
    else {
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = false;
            }
            i++;
        }
    }

    if (isPrime == true) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}