#include <iostream>
using namespace std;

int a, b;
float tempa, tempb;
char ch;

int main(){
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout << "Enter operator: +, -, *, /, %" << endl;
    cin >> ch;
    if(ch == '+'){
        cout << "a+b = " << a+b <<endl;
    }
    else if(ch == '-'){
        cout << "a-b = " << a-b <<endl;
    }
    else if(ch == '*'){
        cout << "a*b = " << a*b <<endl;
    }
    else if(ch == '/'){
        if(b != 0){
        tempa = a;
        tempb = b;
        cout << "a/b = " << tempa/tempb <<endl;
        }
        else{
            cout << "Error! Denominator cannot be 0" <<endl;
        }
    }
    else if(ch == '%'){
        cout << "a%b = " << a%b << endl;
    }
    else{
        cout << "Error! invalid operator!" << endl;
    }
    return 0;
}

/*Write a C++ program to design a calculator. The program should take2 integers ‘a’ and ‘b’ and
an operator ‘ch’ of your choice. For example,
if a=2 and b=3 and ch=+, then output would be a+b=5
if a=2 and b=3 and ch=*, then output would be a*b=6
Your calculator should be able to perform all the operations below:
1. If ch = ‘+’ then calculate add = a + b and display the additionresult.
2. If ch= ‘- ‘then calculate sub = a – b and display the subtractionresult.
3. If ch= ‘*’ then calculate mul = a * b and display the multiplicationresult.
4. If ch= ‘/’ then calculate div = a / b and display the divisionresult.
5. If ch=’%’ then calculate mod = a % b and display the modulusresult.
6. Otherwise display invalid operator
*/