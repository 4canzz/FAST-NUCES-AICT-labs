/*1. Write a C++ code that takes an integer input and checks if it’s a palindrome.*/
#include <iostream>
using namespace std;

int main(){
    int num, temp, reverse = 0, original;

    cout << "enter number" << endl;
    cin >> num;

    original = num;
    while (num != 0){
        temp = num % 10;
        reverse = reverse * 10 + temp;
        num /= 10;
    }

    if(reverse == original){
        cout << "it is a palindrome" << endl;
    }
    else{
        cout << "it is NOT a palindrome" << endl;
    }

}
