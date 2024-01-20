// Program to understand arrays

#include <iostream>
using namespace std;

int main() {

    // Declaration and initialization of an integer array
    int myArray[5]; // Declares an array of 5 integers

    // Initializing elements individually
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Declaration and initialization in one line
    int anotherArray[] = {1, 2, 3, 4, 5}; // Compiler determines the size

    // Getting the size of an array
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

    // Output array
    for (int i = 0; i < sizeOfArray; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    // Output anotherArray using for-each
    for (int i : anotherArray) {
        cout << i << " ";
    }

    return 0;
}


/* Output :

10 20 30 40 50 
1 2 3 4 5

*/