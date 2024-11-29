/*Question No 8. Write a C++ program to implement a simple calculator using a switch-
case statement. Explain why is a switch-case statement a good choice for this type of
program?*/
#include <iostream>
using namespace std;
int num1, num2;
char operator;
int main() {
    cout << "enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "chose operator" endl;
    cout << "+, -, *, /" << endl;
    cin >> operator;
    
    switch (operator) {
        case '+':
            cout < num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
    case '/':
        if (num2 != 0) {
            cout << num1 / num2 << endl;
        }

        else {
            cout << "division by zero not possible!!" << endl;
    }
        break;
    default:
        cout << "error, chose valid operator" << endl;
    }
    return 0;
}
/*A switch-case statement is best utilized for a simple calculator since it increases the readability
of the code, making operations easy to read and understand. In comparison, several if-else
statements may not be efficient in particular for many cases, and maintenance is simpler using
additions or modifications of operations without much affecting the general structure.*/