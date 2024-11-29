/*Question No 10. Write a C++ program to determine the type of a character (vowel,
consonant, or special character) using a switch-case statement. Explain why is this an
efficient way to categorize characters?*/
#include <iostream>
using namespace std;

char char1;
char smallchar;

int main() {
    cout << "enter a character/letter" << endl;
    cin >> char1;

    if (char1 >= 'A' && char1 <= 'Z') {
        smallchar = char1 + 32;
    }
    else {
        smallchar = char1;
    }
    switch (smallchar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "it is a vowel" << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            cout << "it is a consonant" << endl;
            break;
        default:
            cout << "it a special character" << endl;
         break;
    }
    return 0;
}
/*Using a switch-case statement for character categorization enhances readability and efficiency. It
provides a clear structure for handling specific cases, making the code easier to follow.
Additionally, it operates in constant time for a fixed number of cases, improving performance
compared to multiple if-else statements, and simplifies maintenance by isolating each case.*/
