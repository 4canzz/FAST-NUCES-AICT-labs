#include <iostream>

using namespace std;

int main(){
    int number = 12345;
    int tt = (number % 10)*10000;
    int thousands = (number / 10 % 10)*1000;
    int huns = (number / 100 % 10 )*100;
    int tens = (number / 1000 % 10)*10;
    int ones = number /10;
    cout << tt + thousands + huns + tens + ones << endl;
    return 0;
}

/*Write a program, which takes an integer as a parameter and display the number in a reverse
order. For example, if the user enters the value 12345, your program must display 54321 on the
console window.
*/