// Program 10: Check if a number is an Armstrong number
#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    cout << num << (result == num ? " is " : " is not ") << "an Armstrong number" << endl;
    return 0;
}

