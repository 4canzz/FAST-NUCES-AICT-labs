/*Question No 9. Write a C++ program to display the day of the week based on a user-
entered number (1-7) using a switch-case statement. Explain why is a switch-
case statement well-suited for this task?*/
#include <iostream>
using namespace std;
int day;
int main() {
    cout << "enter number of day of week" << endl;
    cin >> day;
    switch (day) {
        case '1'
            cout << "monday" << endl;
            break;
        case '2'
            cout << "tuesday" << endl;
            break;
        case '3'
            cout << "wednesday" << endl;
            break;
        case '4':
            cout << "thursday" endl;
            break;
        case '5':
            cout << "friday" << endl;
            break;
        case '6':
            cout << "saturday" << endl;
            break;
        case '7':
            cout << "sunday" << endl;
            break;
        default:
        cout << "error, enter valid number (1-7)" << endl;
    }
    return 0;
}
/*It encompasses the clear and organized handling of multiple discrete values. It corresponds to
each case with a specific day of the week and thus makes it very readable and easy to
comprehend. The proper directing of the program flow based on user input without the clutter of
multiple if-else statements simplifies both logic and maintenance. Adding more days or adjusting
cases also does not pose a problem, giving more flexibility to the codes.*/