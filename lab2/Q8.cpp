// Program 8: Convert temperature from Celsius to Fahrenheit
#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}

