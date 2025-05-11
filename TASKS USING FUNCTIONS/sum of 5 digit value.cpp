#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Input a 5-digit whole number
    cout << "Enter a 5-digit whole number: ";
    cin >> number;

    // Check if the number is a 5-digit number
    if (number >= 10000 && number <= 99999) {
        // Calculate the sum of digits
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        // Display the sum of digits
        cout << "Sum of digits: " << sum << endl;
    } else {
        cout << "Please enter a valid 5-digit whole number." << endl;
    }

    return 0;
}
