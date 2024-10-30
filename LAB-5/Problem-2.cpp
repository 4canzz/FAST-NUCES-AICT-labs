#include <iostream>
using namespace std;

int num1, num2;
char ch;

int main() {
        cout << "enter two number" << endl;
        cin >> num1 >> num2;
        cout << "choose operator" << endl;
        cout << "+, -, *, /, %" << endl;
        cin >> ch;

    switch (ch) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            switch (num2 != 0) {
                case true:
                cout << num1 / num2 << endl;
                break;
            default:
            cout << "division by zero not possible" << endl;    
            }
            break;
        case '%':
            switch (num2 != 0) {
                case true:
                    cout << num1 % num2 << endl;
                    break;
                default:
                    cout << "mod by zero not possible" << endl;
            }
        default:
            cout << "error, choose valid operator" << endl;
    }
    return 0;
}

/*Exercise - 2
Write a C++ to perform arithmetic Operations using switch case.
1. Read two numbers ‘a’ and ‘b’ and &#39;Read your choice of operator ch.
2. If ch = ‘+’ then calculate add = a + b and display the addition result.
3. If ch= ‘- ‘then calculate sub = a – b and display the subtraction result.
4. If ch= ‘*’ then calculate mul = a * b and display the multiplication result.
5. If ch= ‘/’ then calculate div = a / b and display the division result.
6. If ch=’%’ then calculate mod = a % b and display the modulus result.
7. Otherwise display invalid operator.*/