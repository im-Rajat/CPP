#include <iostream>
using namespace std;

template <typename T>
T sum(T num1, T num2) {
    return num1 + num2;
}


int main() {

    cout << "sum of int and int: " << sum(10, 20) << endl;                  // 30
    cout << "sum of float and float: " << sum(10.2f, 20.4f) << endl;        // 30.6
    cout << "sum of double and double: " << sum(113.21, 205.41) << endl;    // 318.62

    return 0;
}


/* Output:

sum of int and int: 30
sum of float and float: 30.6
sum of double and double: 318.62

*/