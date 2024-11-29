/*Question No 5. Write a C++ program to check if a number is even or odd using an if-
else statement. Explain why is an if-else statement suitable for this task?*/

#include <iostream>
using namespace std;

int n;
int main() {
    cout << "enter a number " << endl;
    cin >> n;
    if (n % 2 == 0) {
        cout << "the number is even" << endl;
    }
    else {
        cout << "the number is odd" << endl;
    }
    return 0;
}
/*An if-else statement fits here because it directly states one of two possible kinds of conditions.
Here, we&#39;re supposed to decide whether a number is even or odd-two possible results, naturally.
The if clause tests whether some number is even, that is, evenly divisible by 2, while the else
clause covers the case of the number being odd.*/