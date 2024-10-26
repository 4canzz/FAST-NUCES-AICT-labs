#include <iostream>

using namespace std;

int main(){
    char ch, ch1, ch2, ch3;
    cout << "enter value of character: " << endl;
    cin >> ch;
    ch1 = ch + 2;
    ch2 = ch + 5;
    ch3 = ch + 9;
    cout << endl << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
    return 0;
}   

/*Write a C++ code to make the following pattern (as given below). Input (starting character) will
be given by user through console which is to be stored in a char variable. You are required to
print next three characters according to the given pattern.
Starting Char Output
A        C F J
B        D G K
C        E H L*/