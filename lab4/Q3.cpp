// Program 3: Check if an integer array is sorted from smallest to largest
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;

    for (int i = 1; i < len; i++) {
        if (arr[i - 1] > arr[i]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;

    return 0;
}

