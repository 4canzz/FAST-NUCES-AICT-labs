//9. Write a C++ program that checks if a number is a power of 2.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    float x = sqrt(number);

    if (pow(x,2) == number ){
        cout << "number is power of 2" << endl;
    }
    else{
        cout << "number is NOT power of 2" << endl;
    }
    return 0;
}