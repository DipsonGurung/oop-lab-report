#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is a multiple of 5
    if (number % 5 == 0) {
        std::cout << number << " is a multiple of 5." << std::endl;
    } else {
        std::cout << number << " is not a multiple of 5." << std::endl;
    }

    return 0;
}

