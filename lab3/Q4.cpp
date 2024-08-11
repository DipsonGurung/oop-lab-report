// Program 4: Display the series: ½, 2/3, ¾, 4/5, 5/6 … n-1/n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout << i << "/" << i + 1 << " ";
    }
    cout << endl;
    return 0;
}

