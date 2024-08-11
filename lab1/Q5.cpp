#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalNumber, digit, sumOfSquares = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Store the original number for potential future use
    originalNumber = number;

    // Process each digit of the number
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        sumOfSquares += pow(digit, 2); // Add the square of the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Output the result
    cout << "The sum of the squares of the digits of " << originalNumber << " is " << sumOfSquares << "." << endl;

    return 0;
}

