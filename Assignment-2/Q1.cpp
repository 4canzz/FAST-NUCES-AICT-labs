/*Question No 1. Write a C++ program to print the Fibonacci sequence up to a given
number using a while loop. Explain why is a while loop suitable in this scenario?*/
#include <iostream>
using namespace std;

int fib_seq_val = 0, num1 = 0, num2 = 1, steps = 0;

int main() {  
  while (steps <= 10) {
    cout << fib_seq_val << " ";
    num1 = fib_seq_val + num2;
    fib_seq_val = num2;
    num2 = num1;
    steps++;
  }
  return 0;
}
/*Using a while loop is necessary because the looping is indeterminate, no one knows in advance
how many iterations the loop will contain. This construct also enhances readability, because
from this structure it is simple to understand that you are generating the nth Fibonacci number
continuously up to the point n.*/
