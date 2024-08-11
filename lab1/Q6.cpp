#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform and display arithmetic operations
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    // Check if the second number is not zero before division
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}

