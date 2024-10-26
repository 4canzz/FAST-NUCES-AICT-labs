#include <iostream>
#include <cmath>
using namespace std;

int hyp, perp, base, len1, len2 , len3;

int main(){
    cout << "enter value of length 1:" << endl;
    cin >> len1;
    cout << "enter value of length 2:" << endl;
    cin >> len2;
    cout << "enter value of length 3:" << endl;
    cin >> len3;

    if (len1 > len2 && len1 > len3){
        hyp = len1;
        base = len2;
        perp = len3;
    }
    else if (len2 > len1 && len2 > len3){
        hyp = len2;
        base = len1;
        perp = len3;
    }
    else if (len3 > len1 && len3 > len2){
        hyp = len3;
        base = len2;
        perp = len3;
    }

    if(pow(hyp, 2) == pow(base, 2) + pow(perp, 2)){
        cout << "it is a right angle triangle" << endl;
    }
    else{
        cout << "it is not a right angel triangle" << endl;
    }
    return 0;
}

/*Write a program that prompts the user to enter the lengths of three sides of a triangle
and then outputs a message indicating whether the triangle is a right triangle.*/