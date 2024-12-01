/*Question No. 11 Marks: 10
Write a recursive function to solve the Tower of Hanoi problem for n disks, displaying the steps to move all
disks from source to destination using an auxiliary rod.*/
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

int main() {
    int N = 3;

    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod
        << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
