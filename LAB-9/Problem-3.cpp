#include <iostream>
using namespace std;

int marks;
int main(){
    cout << "enter marks: " << endl;
    cin >> marks;
    
    if(marks <= 100 && marks){
        cout << "Grade A" << endl;
    }
    else if (marks < 90 & marks >=75){
        cout << "Grade B" << endl;
    }
    else if (marks < 75 && marks >=60){
        cout << "Grade C" << endl;
    }
    else if (marks < 60 && marks >= 45){
        cout << "Grade D" << endl;
    }
    else if (marks < 45 && marks >= 0){
        cout << "Grade F" << endl;
    }
    else{
        cout << "invalid input" << endl;
    }

    return 0;
}

/*Write a program in C++ using if else operator to find the grade of a student. The program
should prompt the user to enter marks.
The details are as follows:
marks &gt;= 90 Grade A
marks &gt;= 75 Grade B
marks &gt;= 60 Grade C
marks &gt;= 45 Grade D
else           Grade F */