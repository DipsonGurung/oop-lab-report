// Program 4: Sum, average, largest, smallest of three numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int sum = a + b + c;
    double avg = sum / 3.0;
    int largest = max(max(a, b), c);
    int smallest = min(min(a, b), c);
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    return 0;
}

