#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is a multiple of both 5 and 11
    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << number << " is a multiple of both 5 and 11." << std::endl;
    } else {
        std::cout << number << " is not a multiple of both 5 and 11." << std::endl;
    }

    return 0;
}

