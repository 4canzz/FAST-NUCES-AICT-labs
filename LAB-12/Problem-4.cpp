#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int original, remainder;

    for (int i = 1; i < 1000; i++){

        int sum = 0, digits = 0;
        original = i;

        while (original != 0) {
            original /= 10;
            ++digits;
        }
        original = i;

        while (original != 0) {
            remainder = original % 10;
            sum += pow(remainder, digits);
            original /= 10;
        if (sum == i) {
            cout << i << endl;
        }
        }
    }
    return 0;
}

/*An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is
equal to the number itself. For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 =
371.Write a program to find all Armstrong number in the range of 0 and 999.*/