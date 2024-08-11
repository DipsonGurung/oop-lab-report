// Program 3: Subtraction of two complex numbers using operator overloading
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload '-' operator for subtraction
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 4);
    Complex c3 = c1 - c2;
    cout << "Subtraction of complex numbers: ";
    c3.display();
    return 0;
}

