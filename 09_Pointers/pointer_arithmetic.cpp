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

    // another example:
    
    int arr2[] = {0, 10, 20, 30, 40, 50, 60};

    int *ptrArr2 = &arr2[3];  // ptrArr2 will be pointing on 30 at index 3
    cout << "ptr[-2] = " << ptrArr2[-2] << endl; //  10 (p[-2] means 2 index backward)

    return 0;
}


/* Output :

*ptr = 0
*ptr2 = 3
*ptr = 1
*ptr2 = 1
*ptr2 = 2

*/