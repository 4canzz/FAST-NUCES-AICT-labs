#include <iostream>
#include <cmath>

double radius(double areaofbase, double height);
double circumference(double areaofbase, double height);
double surfacearea(double areaofbase, double height);
double volume(double areaofbase, double height);
using namespace std;

double pi = acos(-1);
int main() {
	double areaofbase, height;
	cout << "enter area of base and height of cylinder : " << endl;
	cin >> areaofbase >> height;

	cout << "radius = " << radius(areaofbase, height) << endl;
	cout << "circumference = " << circumference(areaofbase, height) << endl;
	cout << "surface area = " << surfacearea(areaofbase, height) << endl;
	cout << "volume = " << volume(areaofbase, height) << endl;
	return 0;
}

double radius(double areaofbase, double height) {
	double radius = sqrt(areaofbase / pi);
	return radius;
}

double circumference(double areaofbase, double height) {
	double circumference = 2.0 * pi * radius(areaofbase, height);
	return circumference;
}
double surfacearea(double areaofbase, double height) {
	double surfacearea = (2.0 * pi * pow(radius(areaofbase, height), 2.0)) + (2.0 * pi * radius(areaofbase, height) * height);
	return surfacearea;
}
double volume(double areaofbase, double height) {
	double volume = areaofbase * height;
	return volume;
}
/*Question No. 1 Marks: 10
Suppose that a solid closed cylinder is given to you, and the only known information is the area of its base
and the height. You are required to find out this cylinder’s radius, circumference, surface area, and volume
using four interrelated functions.
Construct a function to calculate radius which takes the given area as a parameter, and returns the radius
based on some calculations. Construct a function to calculate circumference of the base which takes the
radius as the parameter and returns the circumference. In a similar fashion, construct a function to calculate
the surface area of the cylinder which takes the circumference, the height, and the area of the base, and
returns the surface area of the cylinder. Lastly, construct a function to calculate the volume of the cylinder
which takes radius and height as parameters, and returns the volume.
You are required to write C++ code that implements the above functions. You may take the area and the
height as inputs from the user.
For example, if a user enters area of the base as 50, and height as 10. Then you program should yield the
following output.
radius = 3.99
circumference = 25.07
surface area = 350.73
volume = 500.14
Note that the above given values are approximated to 2 decimal places.
You maybe include ‘cmath’ library in your program to use the built-in ‘sqrt()’ function to calculate the
square root of a number. Do not use any built-in C++ functions to calculate the radius, circumference,
surface area, or the volume.*/