#include <iostream>
#include <cmath>
using namespace std;

double volumefunction (double r);
double surfaceareafunction (double r);

double r, surfacearea, volume;
const double constant = 1.333333333333333333;
const double pi = acos(-1);

int main () {
    cout << "Enter Radius: ";
    cin >> r;

    cout << "volume : " << volumefunction(r) << endl;
    cout << "area : " << surfaceareafunction(r) << endl;

    return 0;
}

double volumefunction(double r) {
    volume = 4 * pi * pow(r, 2);
    return volume;
}

double surfaceareafunction(double r) {
    surfacearea = pi * constant * pow(r, 3);
    return surfacearea;
}

/*Write a program that will find the area and volume of sphere.Data type for all variable should be double
double area (double radius): function that will take radius as input and return the area. double
volume (double radius): takes radius as input argument and return the volume of sphere.

Area = 4*pi*r^2

Volume = (4/3)*pi*r^3

Write a main function that will take radius from the user and display the area and volume,
don’t display the area and volume in the function.*/