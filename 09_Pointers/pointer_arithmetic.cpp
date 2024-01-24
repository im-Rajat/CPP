#include <iostream>
using namespace std;

int main() {
    int arr[5] = {0, 1, 2, 3, 4};

    int *ptr = arr;
    int *ptr2 = &arr[3];

    cout << "*ptr = " << *ptr << endl;          // 0
    cout << "*ptr2 = " << *ptr2 << endl;        // 3

    ptr++;
    cout << "*ptr = " << *ptr << endl;          // 1
    cout << "*ptr2 = " << *(ptr2 - 2) << endl;  // 1    
    cout << "*ptr2 = " << *(--ptr2) << endl;    // 2

    return 0;
}


/* Output :

*ptr = 0
*ptr2 = 3
*ptr = 1
*ptr2 = 1
*ptr2 = 2

*/