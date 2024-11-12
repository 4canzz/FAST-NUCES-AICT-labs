//11. Write a C++ program that prompts the user to enter a range and displays all multiples of 5 within this range.
#include <iostream>
using namespace std;

int main (){
    int start, end;
    cout << "enter start of range:" ;
    cin >> start;
    cout << "enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        if (i % 5 == 0){
            cout << i << ", ";
        }
    }
    cout << endl;
    return 0;
}