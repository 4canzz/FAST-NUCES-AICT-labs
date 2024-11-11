/*3. Write a program that takes an integer and checks if it’s even or odd.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "number is even" << endl;
    }
    else {
        cout << "number is odd" << endl;
    }
    return 0;
}