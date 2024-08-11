// Program 5: Evaluate the series S = 1 + 2*1 + 3*2 + … + N*(N-1)
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i * (i - 1);
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}

