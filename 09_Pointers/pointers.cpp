// Program to understand pointers

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* ptr;   // Declaration of an integer pointer
    ptr = &x;   // Initialization with the address of 'x'

    // We can also initialize as int* ptr = &x;

    cout << "x = " << x << endl;        // 10
    cout << "&x = " << &x << endl;      // Address of x
    cout << "ptr = " << ptr << endl;    // Address of x
    cout << "&ptr = " << &ptr << endl;  // Address of ptr
    cout << "*ptr = " << *ptr << endl;  // 10

    int y = *ptr;   // Dereferencing
    cout << "y = " << y << endl;        // 10

    string food = "Pizza";
    string* ptrFood = &food;

    *ptrFood = "Burger";    // Change the value of the pointer
    cout << "food = " << food << endl;   // Burger

    return 0;
}


/* Output :

x = 10
&x = 0x62ff00
ptr = 0x62ff00
&ptr = 0x62fefc
*ptr = 10
y = 10
food = Burger

*/