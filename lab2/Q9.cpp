// Program 9: Calculate simple interest and amount
#include <iostream>
using namespace std;

int main() {
    double P, T, R;
    cout << "Enter principal (P), time (T) in years, and rate (R): ";
    cin >> P >> T >> R;
    double interest = (P * T * R) / 100;
    double amount = P + interest;
    cout << "Simple Interest: " << interest << endl;
    cout << "Amount: " << amount << endl;
    return 0;
}

