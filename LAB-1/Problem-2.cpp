#include <iostream>

using namespace std;

int a = 2, b = 3, c = 4;

int main() {
    cout << "A" << "\t" << "B" << "\t" << "C" <<endl;
    cout << a << "\t" << b << "\t" << c <<endl;
    cout << a * a << "\t" << b * b <<"\t" << c * c <<endl;
    cout << a + 3 << "\t" << b + 2 << "\t" << c + 2 <<endl;
    return 0;
}

/*Declare three variables (A,B,C) of type int in C++. Take input from console in each
variable. Now write code such that following is displayed on screen:
A B C
[A]*2 [B]*2 [C]*2
[A]+3 [B]+2 [C]+2*/