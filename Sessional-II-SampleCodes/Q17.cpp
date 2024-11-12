//17. Write a C++ code that displays all numbers divisible by 4 in the range and calculates their sum.
#include <iostream>
using namespace std;

int main(){
    double long start, end, sum = 0;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        if (i % 4 == 0){
            sum += i;
            cout << i << ", ";
        }
    }
    cout << endl << "sum: " << sum << endl;
    return 0;
}