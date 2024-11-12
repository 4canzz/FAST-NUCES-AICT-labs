//15. Write a code that calculates and displays the product of all odd numbers within a given range.
#include <iostream>
using namespace std;

int main() {
    double long start, end, prod = 1;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        if(i % 2 == 1){
            prod *= i;
        }
    }
    cout << prod << endl;

    return 0;
}