//Q10
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream evenFile("even.dat", ios::binary);
    ofstream oddFile("odd.dat", ios::binary);
    if (!evenFile || !oddFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int num;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        if (num % 2 == 0) {
            evenFile.write(reinterpret_cast<char*>(&num), sizeof(num));
        } else {
            oddFile.write(reinterpret_cast<char*>(&num), sizeof(num));
        }
    }

    cout << "Numbers have been written to even.dat and odd.dat files." << endl;

    evenFile.close();
    oddFile.close();
    return 0;
}

