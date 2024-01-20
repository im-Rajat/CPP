#include <iostream>
using namespace std;

int main() {
    unsigned int a = 5;  // Binary: 0101
    unsigned int b = 3;  // Binary: 0011

    // Bitwise AND
    cout << (a & b) << endl;  // Output: 1 (Binary: 0001)

    // Bitwise OR
    cout << (a | b) << endl;  // Output: 7 (Binary: 0111)

    // Bitwise XOR
    cout << (a ^ b) << endl;  // Output: 6 (Binary: 0110)

    // Bitwise NOT
    cout << (~a) << endl;  // Output: 4294967290 (Binary: 11111111111111111111111111111010)

    // Left Shift
    cout << (a << 1) << endl;  // Output: 10 (Binary: 1010)

    // Right Shift (a is unsigned so it's Logical Shift)
    cout << (a >> 1) << endl;  // Output: 2 (Binary: 0010)

    // Right Shift (num is signed so it's Arithmetic Shift)
    int num = -8;  // Binary: ...1111111111111000`
    cout << (num >> 1) << endl;  // Output: ...1111111111111100 (sign bit replicated)

    return 0;
}

/* Output :

1
7
6
4294967290
10
2
-4

*/