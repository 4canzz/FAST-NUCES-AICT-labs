#include <iostream>

using namespace std;

int main(){
    float celsius;
    float F;
    cout << "enter value of temprature in celsius" << endl;
    cin >> celsius;

    F = (celsius * 9/5)+32;
    cout << "the value in Farenheit is: " << F << endl;

    return 0;
}


/*You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5
and adding 32. Write a C++ program that allows the user to enter a floating-point number
representing degrees Celsius, and then displays the corresponding degrees Fahrenheit.*/