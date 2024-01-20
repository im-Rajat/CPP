#include <iostream>
#include <array>
using namespace std;

int main() {

    // Declaration and initialization of a std::array
    array<int, 5> stlArray = {10, 20, 30, 40, 50};

    // Accessing elements
    int value = stlArray[2];    // Retrieves the element at index 2
    int value2 = stlArray.at(0);    // Retrieves the element at index 0

    cout << value << " " << value2 << endl;

    return 0;
}

/* Output :

30 10

*/