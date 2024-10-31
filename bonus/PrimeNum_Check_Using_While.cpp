#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;
    
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check divisibility using a while loop
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
/*Create a code that takes an integer input and checks if it’s a prime number using a whileloop.*/