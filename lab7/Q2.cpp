//Write a complete code in C++ programming language.
//"	Derive Triangle and Rectangle classes from Shape class adding necessary attributes.
//"	Use these classes in a main function and display the area of triangle and rectangle
#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    float width, height;
public:
    // Constructor for Shape class
    Shape(float w = 0, float h = 0) : width(w), height(h) {}

    // Virtual function to calculate area (to be overridden in derived classes)
    virtual float area() = 0;
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    // Constructor for Triangle class
    Triangle(float w, float h) : Shape(w, h) {}

    // Override area function for Triangle
    float area() override {
        return 0.5 * width * height;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    // Constructor for Rectangle class
    Rectangle(float w, float h) : Shape(w, h) {}

    // Override area function for Rectangle
    float area() override {
        return width * height;
    }
};

int main() {
    // Create Triangle and Rectangle objects
    Triangle tri(5, 10);  // base = 5, height = 10
    Rectangle rect(4, 8); // width = 4, height = 8

    // Display the area of Triangle and Rectangle
    cout << "Area of Triangle: " << tri.area() << endl;
    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}

