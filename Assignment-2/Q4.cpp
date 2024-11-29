/*Question No 4. Write a C++ program to read data from a text file and display it on the
output file along with its square, cube, and factorial. Explain why is it necessary to open
the file before reading from it?*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void main() {
    ifstream in;
    in.open("numbers.txt");
    ofstream out;
    out.open("cubes_squares_factorial");
    int x;
    while (!in.eof()) {
        double long factorial = 1;
        in >> x;
        for (int i = 1; i <= x; i++) {
            factorial *= i;

        }
        out << x << "\t" << pow(x, 2) << "\t" << pow(x, 3) << "\t" << factorial << endl;
    }
    in.close();
    out.close();
}

/*Before reading from it, the file has to be opened to make a connection between the program and
the file system. It forces the allocation of resources at the moment when the file is being opened

and makes the program ready to get access to the file&#39;s contents. Otherwise, attempts to read data
would fail with errors or even undefined behavior.*/