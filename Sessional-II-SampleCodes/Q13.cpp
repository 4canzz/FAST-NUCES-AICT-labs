//13. Create a C++ code that finds and displays all perfect squares within a given range.
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int start, end;
    cout << "enter start of range:" ;
    cin >> start;
    cout << "enter end of range: ";
    cin >> end;

    if (start <= 0){
         cout << "start of range must be greater than 0" << endl;
         return 1;
    }

    for (int i = start; i <= end; i++){
        int x = static_cast<int>(sqrt(i));
        if (pow(x,2) == i){
            cout << i << ", ";
        }
    }
    cout << endl;
    return 0;
}