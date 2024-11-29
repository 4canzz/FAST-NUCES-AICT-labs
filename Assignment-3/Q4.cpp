#include <iostream>
using namespace std;

void pattern(int startingnumber, int endingnumber);

int main() {
	int startingnumber, endingnumber;
	cout << "Enter starting and ending numbers: ";
	cin >> startingnumber >> endingnumber;

	pattern(startingnumber, endingnumber);
	
}

void pattern(int startingnumber, int endingnumber) {
	for (int i = startingnumber; i <= endingnumber; i++) {
		for (int j = i; j <= endingnumber; j++) {
			cout << "(" << i << ", " << j << ")";
		}
		cout << endl;
	}
}

/*Question No. 4 Marks: 10
Construct a function, which takes starting and ending integer and print the ordered pairs on the screen. Also
write main function to check its functionality.
Sample output:
Enter Starting number: 1
Enter Ending number: 5
(1,1) (1,2) (1,3) (1,4) (1,5)
(2,2) (2,3) (2,4) (2,5)
(3,3) (3,4) (3,5)
(4,4) (4,5)
(5,5)*/