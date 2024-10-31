#include <iostream>

using namespace std;

int marks;

int main()
{
    cout << "Please enter marks: ";
    cin >> marks;

    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade A" << endl;
            break;
        
        case 8:
        case 7:
            switch (marks >= 75) {
                case true:
                    cout << "Grade B" << endl;
                    break;
                case false:
                    cout << "Grade C" << endl;
                    break;
            }
            break;

        case 6:
            cout << "Grade C" << endl;
            break;

        case 5:
        case 4:
            switch (marks >= 45) {
                case true:
                    cout << "Grade D" << endl;
                    break;
                case false:
                    cout << "Grade F" << endl;
                    break;
            }
            break;

        default:
            cout << "Grade F" << endl;
            break;
    }

    return 0;
}
n 0;
}
/*Exercise - 3
Write a program in C++ using SWITCH CASE operator to find the grade of a student.
The details are as follow
marks >= 90 Grade A
marks >= 75 Grade B
marks >= 60 Grade C
marks >= 45 Grade D
else Grade F*/