#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, digit, sum_of_squares = 0;

    // Input a 3-digit number
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Check if the number is a 3-digit number
    if (number >= 100 && number <= 999) {
        // Calculate the sum of squares of digits
        int temp = number;
        while (temp > 0) {
            digit = temp % 10;
            sum_of_squares += pow(digit, 2);
            temp /= 10;
        }

        // Display the sum of squares of digits
        cout << "Sum of squares of digits: " << sum_of_squares << endl;
    } else {
        cout << "Please enter a valid 3-digit number." << endl;
    }

    return 0;
}
