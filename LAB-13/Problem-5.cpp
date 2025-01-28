#include <iostream>
#include <cmath>
using namespace std;

int sumofsquares();
int squaredsum();

int main() {
    cout << "The sum of the squares of the first ten natual numbers = " << sumofsquares() << endl;
    cout << "The sum of the first ten natual numbers, squared = " << squaredsum(;) << endl;
    cout << "The difference is " << squaredsum() - sumofsquares() << endl;
    return 0;
}

int sumofsquares () {
    int sumofsquarez = 0;
    for (int i = 1; i <= 10; i++) {
        sumofsquarez += pow(i, 2);
    }
    return sumofsquarez;
}

int squaredsum() {
    int sumtoten = 0;
    for (int i = 1; i <= 10; i++) {
        sumtoten += i;
    }
    return pow(sumtoten, 2);
}



/*The sum of the squares of the first ten natural numbers is, 1 2 + 2 2 + ... + 10 2 = 385.The square of
the sum of the first ten natural numbers is, (1 + 2 + ... + 10) 2 = 55 2 = 3025.Hence the difference
between the square of the sum of the first ten natural numbers and the sum of the squares of
first ten natural numbers is 3025 − 385 = 2640.
Find the difference between the square of the sum of the first ten natural numbers and the sum
of the squares of first ten natural numbers*/