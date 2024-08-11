// Program 1: Sum of digits of a four-digit number
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a four-digit number: ";
    cin >> num;
    sum = num % 10 + (num / 10) % 10 + (num / 100) % 10 + num / 1000;
    cout << "Sum of digits: " << sum << endl;
    return 0;
}

