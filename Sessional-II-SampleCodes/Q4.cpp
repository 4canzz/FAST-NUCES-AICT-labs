/*4. Write a C++ code that verifies if a number is a perfect number.*/
#include <iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;

    cout << "Enter a number: ";
    cin >> n;

        while(i<n){
            if(n%i==0){
            sum=sum+i;

            }
        i++;
        }

    if(sum==n){
        cout << i << " is a perfect number\n";
    }
    else{
        cout << i << " is not a perfect number\n";
    }
    return 0;
}