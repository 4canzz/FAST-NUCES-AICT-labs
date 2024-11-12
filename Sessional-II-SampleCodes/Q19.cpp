//19. Write a program that finds and displays the smallest and largest number in a given range of integers.
#include <iostream>
using namespace std;

int main() {
    int start, end;

    // Input range from the user
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Initialize smallest and largest to the first number in the range
    int smallest = start;
    int largest = start;

    // Loop through the range
    for (int number = start; number <= end; number++) {
        if (number < smallest) {
            smallest = number; // Update smallest
        }
        if (number > largest) {
            largest = number; // Update largest
        }
    }

    // Display results
    cout << "Smallest number in the range: " << smallest << endl;
    cout << "Largest number in the range: " << largest << endl;

    return 0;
}