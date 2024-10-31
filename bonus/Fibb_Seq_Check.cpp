#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, temp;
    bool isFibonacci = false;
    
    while (a <= num) {
        if (a == num) {
            isFibonacci = true;
            break;
        }
        temp = a + b;
        a = b;
        b = temp;
    }
    if (isFibonacci) {
        cout << "The number is in the Fibonacci sequence." << endl;
    } else {
        cout << "The number is not in the Fibonacci sequence." << endl;
    } 
    return 0;
}
/*Write a C++ program that checks whether a number is part of the Fibonacci sequence.*/