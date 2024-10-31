#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    cout << "Multiples of 5 between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; ++i) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

/*Write a C++ program that prompts the user to enter a range and displays all multiples of 
5 within this range.*/