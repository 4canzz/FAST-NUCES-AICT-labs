//14. Write a C++ program that displays all numbers divisible by both 3 and 7 within a specified range.
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for(int i= start; i <= end; i++)
        if (i % 21 == 0){
            cout << i << ", ";
        }
    cout << endl;
    return 0;
}
