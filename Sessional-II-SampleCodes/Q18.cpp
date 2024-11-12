//18. Write a program that displays all numbers in a range along with their cumulative sum.
#include <iostream>
using namespace std;

int main (){
    double long start, end, sum = 0;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        cout << i << ", ";
        sum +=i;
    }
    cout << endl << "sum: " << sum << endl;
    return 0;
}