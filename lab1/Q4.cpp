#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is a multiple of 5 but not 11
    if (number % 5 == 0 && number % 11 != 0) {
        std::cout << number << " is a multiple of 5 but not a multiple of 11." << std::endl;
    } else {
        std::cout << number << " is either not a multiple of 5 or it is a multiple of 11." << std::endl;
    }

    return 0;
}

