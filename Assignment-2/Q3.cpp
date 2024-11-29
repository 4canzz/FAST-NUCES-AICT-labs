/*Question No 3. Write a C++ program to calculate the factorial of a number using
a for loop. Explain why is a loop necessary for this calculation?*/
#include <iostream>
using namespace std;

double long factorial = 1;
const int n = 5;
//n is the number which we will take the factorial of. n = 5 as an example
int main() {
    for (int i = 1; i <= n; i++) {
    factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}

/*There has to be a loop in the computation of the factorial of a number because the factorial is
defined as the “product of all positive integers up to that number”. This involves several
multiplications, and these should be performed within a loop. The for loop allows us to iterate
from 1 up to the given number and multiply the factorial value we have so far by every integer
within that range.*/