#include <iostream>
using namespace std;

int main(){
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    
    for (int num = start; num <= end; ++num) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } 
        else {
            for (int i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}
/*Write a program to display all prime numbers within a given range in C++. */