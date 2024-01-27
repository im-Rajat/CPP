#include <iostream>
using namespace std;

int sum (int a, int b) {
    return a + b;
}
int sum (int a, int b, int c) {
    return a + b + c;
}
float sum (float a, float b, float c) {
    return a + b + c;
}
int multiply(int a, int b, int c = 1) {
    return a * b * c;
}

int main() {
    int x = 10, y = 20, z = 30;
    cout << "Sum of x and y is: " << sum (x, y) << endl;        // 30
    cout << "Sum of x, y and z is: " << sum (x, y, z) << endl;      // 60 
    cout << "Sum of x, y and z is: " << sum (10.2f, 20.3f, 10.5f) << endl;  // 41
    cout << "x * y = " << multiply (x, y) << endl;  // 200 (c variable by-default is 1)
    cout << "x * y * z = " << multiply (x, y, z) << endl;   // 6000
}


/* Output:

Sum of x and y is: 30
Sum of x, y and z is: 60
Sum of x, y and z is: 41
x * y = 200
x * y * z = 6000

*/