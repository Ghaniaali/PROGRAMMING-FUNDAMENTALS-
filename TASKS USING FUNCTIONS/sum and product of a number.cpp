#include <iostream>
using namespace std;

int main() {
    int number, digit, sum = 0, product = 1;

    // Input a five-digit number
    cout << "Enter a five-digit number: ";
    cin >> number;
    
        // Extract digits and calculate sum and product
        int temp = number;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }

        // Display sum and product of digits
        cout << "Sum of digits: " << sum << endl;
        cout << "Product of digits: " << product << endl;


    return 0;
}
