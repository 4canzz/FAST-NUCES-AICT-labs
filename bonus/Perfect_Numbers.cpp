#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    // Calculate the sum of divisors
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    // Check if the sum of divisors equals the original number
    if (sum == num && num != 0) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
/*Create a code that takes an integer input and checks if it’s a prime number using a while loop.
A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself. 
For example, 6 is a perfect number because  6=1+2+3.*/