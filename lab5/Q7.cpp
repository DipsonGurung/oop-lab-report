// Program 7: Count the number of words in a line of text
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);

    stringstream ss(line);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << "Number of words: " << count << endl;
    return 0;
}

