/*6. Write a C++ program to check if a number is divisible by both 3 and 5.*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 15 == 0){
        cout << "Y" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}