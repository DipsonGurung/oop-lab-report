// Program 1: Find the second largest number among three numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int secondLargest = (a > b) ? ((b > c) ? b : ((a > c) ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
    cout << "Second largest number: " << secondLargest << endl;
    return 0;
}

