#include <iostream>

using namespace std;

int main (){
    int x = 17;
    int y = 15;
    x = x + y / 4;
    int z = x % 3 + 4;
    double w = 17 / 3 + 6.5;
    double t = x / 4.0 + 15 % 4 - 3.5;
    cout << "x is: " << x << endl << "y is: " << y << endl << "z is:" << z << endl << "y is:" << w << endl << "it is:" << t << endl; 
    return 0;
}

/*Suppose ‘x’, ‘y’, and ‘z’ are int variables and ‘w’ and‘t’ are double variables. What value
is assigned to each of these variables after the last statement executes?
x = 17;
y = 15;
x = x + y / 4;
z = x % 3 + 4;
w = 17 / 3 + 6.5;
t = x / 4.0 + 15 % 4 - 3.5; 
First solve it on paper. Then write a C++ code to verify your answer
*/
