// Program 7: Swap two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

