//Q9
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("source.txt");
    if (!inFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    ofstream outFile("destination.txt");
    if (!outFile) {
        cout << "Error opening destination file!" << endl;
        inFile.close();
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        outFile << line << endl;
    }

    cout << "File contents copied successfully." << endl;

    inFile.close();
    outFile.close();
    return 0;
}

