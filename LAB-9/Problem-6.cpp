#include <iostream>
using namespace std;

int calls, callsabove100, callsabove150, callsabove200, bill;

int main(){
    cout << "Enter number of calls: " << endl;
    cin >> calls;

    if(calls <= 100){
        bill = 200;
        cout << "bill = Rs" << bill << endl;
    }
    else if (calls > 100 && calls <=150){
        callsabove100 = calls - 100;
        bill = 200 + (callsabove100*0.6);
        cout << "bill = Rs" << bill << endl;
    }
    else if (calls > 150 && calls <= 200){
        callsabove100 = calls - 100;
        callsabove150  = calls -callsabove100; 
        bill = 200 + (0.6*callsabove100) + (0.5*callsabove200);
        cout << "bill = Rs" << bill << endl;
    }
    else if (calls > 200){
        callsabove100 = calls - 100;
        callsabove150  = calls -callsabove100; 
        callsabove200 = calls - callsabove150;
        bill = 200 + (0.6*callsabove100) + (0.5*callsabove200) + (0.4*callsabove200);
        cout << "bill = Rs" << bill << endl;
    }
    
    return 0;
}
/*Write a program to calculate the monthly telephone bills as per the following rule: 
>Minimum Rs. 200 for upto 100 calls. 
> Plus Rs. 0.60 per call for next 50 calls. 
> Plus Rs. 0.50 per call for next 50 calls. 
> Plus Rs. 0.40 per call for any call beyond 200 calls.*/