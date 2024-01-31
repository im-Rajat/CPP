// Program to understand Classes and Objects

#include <iostream>
using namespace std;

class Rectangle {       // Class Name is Rectangle
public:                 // Access specifier
    float length;       // Attribute (float variable)
    float breadth;

    float area() {      // Method/function defined inside the class
        return length * breadth;
    };

    float perimeter();
};

float Rectangle::perimeter() {      // Method/function definition outside the class
    return 2 * (length + breadth);
}

int main() {
    Rectangle r1;       // Create an object of Rectangle
    r1.length = 5;      // Access attributes and set values
    r1.breadth = 10;

    // Calling Class functions upon object
    cout << "Area: " << r1.area() << endl;              // 50
    cout <<"Perimeter: " << r1.perimeter() << endl;     // 30

    // Pointer to an Object (Memory is still in Stack)
    Rectangle r2;
    Rectangle *ptr;
    ptr = &r1;
    ptr->length = 2;
    ptr->breadth = 5;
    cout << "Area: " << ptr->area() << endl;            // 10
    cout <<"Perimeter: " << ptr->perimeter() << endl;   // 14

    // Create object in Heap
    // Rectangle *ptr2;
    // ptr2 = new Rectangle;
    // Define in 1 line, both are same
    Rectangle *ptr2 = new Rectangle;    // Object created, but constructor not explicitly called 

    ptr2->length = 8;
    ptr2->breadth = 4;
    cout << "Area: " << ptr2->area() << endl;            // 32
    cout <<"Perimeter: " << ptr2->perimeter() << endl;   // 24

    Rectangle *ptr3 = new Rectangle();    // Object created, default constructor called explicitly
    ptr3->length = 9;
    ptr3->breadth = 11;
    cout << "Area: " << ptr3->area() << endl;            // 99
    cout <<"Perimeter: " << ptr3->perimeter() << endl;   // 40

    return 0;
}


/* Output:

Area: 50
Perimeter: 30
Area: 10
Perimeter: 14
Area: 32
Perimeter: 24
Area: 99
Perimeter: 40

*/