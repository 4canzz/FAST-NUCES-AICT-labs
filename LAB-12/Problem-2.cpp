#include <iostream>
using namespace std;

int main () {
    int StartNumber, NumOfElements;
    cout << "Starting Number: "; 
    cin >> StartNumber;
    cout << "Number of elements in last row";
    cin >> NumOfElements;

    for (int i = 1; i <= NumOfElements; i++) {
        for (int j = 1; j <= 1; j++) {
            cout << StartNumber << " ";
            StartNumber++;
        }
        cout << endl;
    }
    return 0;
}

/*Write a C++ program that takes 2 integers (i) a starting number and (ii) the number of elements in
last row. Then print the data in form of a lower triangular matrix. For example (shown in table 7-2), if:
Starting number=10
Elements in last row=3
10 
11 12
13 14 15

Starting number=1
Elements in last row=4
1
2 3
4 5 6
7 8 9 10

Starting number=20
Elements in last row=2

20
21 22*/