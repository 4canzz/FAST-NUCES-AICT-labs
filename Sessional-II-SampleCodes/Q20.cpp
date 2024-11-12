/*20. Write a C++ code that displays all numbers that are multiples of both 
6 and 8 within a given range and calculates their difference in sum.*/
#include <iostream>
using namespace std;

int main (){
    int start, end, multiplesum = 0, totalsum = 0;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        totalsum += i;
        if(i % 6 == 0 && i % 8 == 0){
            cout << i << ", ";
            multiplesum += i;
        }
    }
    cout << endl << "difference of sums: " << totalsum - multiplesum << endl;
    return 0;
}