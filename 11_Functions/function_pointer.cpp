// Program to demonstrate Function Pointer / Pointer to a Function

#include <iostream>
using namespace std;

void display() {
    cout << "Hello" << endl;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    void (*displayPtr)();       // Declaration of pointer
    displayPtr = display;       // Initialization of pointer
    (*displayPtr)();            // Function call

    int (*functionPointer)(int, int);
    functionPointer = max;      // Assigning address of 'max' to the pointer
    cout << "Maximum of 5 and 8 is: " << functionPointer(5, 8) << endl;   // Calling through the pointer

    functionPointer = min;      // Assigning address of 'min' to the pointer
    cout << "Maximum of 5 and 8 is: " << functionPointer(5, 8) << endl;   // Calling through the pointer

    return 0;
}


/* Output:

Hello
Maximum of 5 and 8 is: 8
Maximum of 5 and 8 is: 5

*/