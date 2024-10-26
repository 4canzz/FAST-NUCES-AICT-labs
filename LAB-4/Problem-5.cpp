#include <iostream>
using namespace std;

int a, b, c;
int main(){
    cout << "input the value of a (the coefficient of ), b (the coefficient of ), and c (the constant term) and outputs the type of roots of the equation." << endl;
    cin >> a >> b >> c;
    if((pow(b, 2)-4*a*c) == 0){
        cout << "the equation has 1 repeated real root" << endl;
    }
    else if((pow(b, 2)-4*a*c) > 0){
        cout << "the equation has 1 distinct real roots" << endl;
    }
     else{
        cout << "the equation has NO real roots" << endl;
    }
    return 0;
}

/*The roots of the quadratic equation , are given by the following formula:

Write a program that prompts the user to input the value of ‘a’ (the coefficient of ), ‘b’ (the
coefficient of ), and ‘c’ (the constant term) and outputs the type of roots of the equation. using IfElse only.

Case 1: Single repeated roots
Case 2: Two real roots
Case 3: No real roots
*/