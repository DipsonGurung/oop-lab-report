// Program 2: Convert character to uppercase if lowercase and vice versa
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (islower(ch)) 
        ch = toupper(ch);
    else 
        ch = tolower(ch);
    cout << "Converted character: " << ch << endl;
    return 0;
}

