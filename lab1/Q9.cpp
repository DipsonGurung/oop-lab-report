#include <iostream>
#include <cmath> // For sqrt() function

using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Prompt the user to enter coefficients a, b, and c
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if a is zero (not a quadratic equation)
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation." << endl;
        return 1;
    }

    // Check the nature of the discriminant and find roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root
        root1 = -b / (2 * a);
        cout << "The root is real and the same." << endl;
        cout << "Root = " << root1 << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

