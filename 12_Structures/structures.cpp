// Program to understand Structures

#include <iostream>
using namespace std;

// Define a structure named Rectangle
struct Rectangle {

    // Data members
    int length;
    int width;

    // Member function to calculate the area of the rectangle
    int calculateArea() {
        return length * width;
    }
};

int main() {

    // Create an instance of the Rectangle structure
    Rectangle r1;

    // Assign values to the members of the structure
    r1.length = 5;
    r1.width = 10;

    // Access and print the area using the member function
    cout << "Rectangle area: " << r1.calculateArea() << endl;   // 50

    return 0;
}


/* Output;

Rectangle area: 50

*/