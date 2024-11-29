/*Question No. 9 Marks: 10
Write a recursive function to calculate a^b, where a is the base and b is the exponent.*/

#include <iostream>
using namespace std;

int power(int a, int b);

int main() {
    int a, b, answer;
    cout << "Enter value for 'a': ";
    cin >> a;
    cout << "Enter power 'b': ";
    cin >> b;
    while (b < 0) {
        cout << "please enter positive number: ";
        cin >> b;
    }

    answer = power(a, b);
    cout << a << " ^ " << b << " = " << answer;
    return 0;
}

int power(int a, int b) {
    if (b != 0)
        return (a * power(a, b - 1));
    else
        return 1;
}