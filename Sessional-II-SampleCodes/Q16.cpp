//16. Write a program that calculates and displays the average of even numbers within a given range.
#include <iostream>
using namespace std;

int main(){
    double long start, end, n = 0, sum = 0;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int i = start; i <= end; i++){
        if(i % 2 == 0){
            n++;
            sum +=i;
        }
    }

    cout << sum/n << endl;
    return 0;
}