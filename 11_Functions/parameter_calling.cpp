#include <iostream>
using namespace std;

// Call by Value
void swap1(int a, int b) {   // a and b have their separate memory
    int temp = a;
    a = b;
    b = temp;
}

// Call by Address
void swap2(int *a, int *b) {
    int temp = *a;  // read the value of a from address pointed by 'a'
    *a = *b;       // assign the value of b to address pointed by 'a'
    *b = temp;     // assign the value of temporary variable 'temp' to address pointed by 'b'
}

// Call By Reference
void swap3(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap1(x, y);
    cout << "x: " << x << " y: " << y << endl;  // x: 10 y: 20 (main variables didn't swap)

    swap2(&x, &y);
    cout << "x: " << x << " y: " << y << endl;  // x: 20 y: 10

    swap3(x, y);
    cout << "x: " << x << " y: " << y << endl;  // x: 10 y: 20
}


/* Output;

x: 10 y: 20
x: 20 y: 10
x: 10 y: 20

*/