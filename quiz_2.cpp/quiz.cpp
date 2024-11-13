#include <iostream>
#include <fstream>
using namespace std;

int hours, overtime, salary;

int main(){
	cout << "Enter hours: ";
	cin >> hours;

	if (hours <= 40){
		salary = hours*10;
		cout << "your salary is $" << salary << endl;
	}
	else if (hours > 40){
		overtime = hours-40;
		salary = (40*10) + (overtime*15);
		cout << "your salary is $" << salary <<endl;
	}

	ofstream out;
	out.open("salary.txt");
	out << "$" << salary;
	out.close();

	system("pause");
	return 0;
}
