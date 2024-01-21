// Program to use Reference in 1D and 2D Array

#include <iostream>
using namespace std;

int main() {

    int array[5] = {1, 2, 3, 4, 5};

    for (int i : array) {
        ++i;    // will not change original value of array
    }
    for (int i : array) {
        cout << i << " ";   // output : 1 2 3 4 5
    }

    cout << endl;

    for (int &i : array) {  // using Reference : Giving another name to same value
        ++i;    // array value will also get modify
    }
    for (int i : array) {
        cout << i << " ";   // output : 2 3 4 5 6
    }

    cout << endl;

    string array2D[2][3] = { {"00", "01", "02"}, {"10", "11", "12"} };

    for (auto &i : array2D) {
        for (auto &j : i) {
            cout << j << " ";   // output : 00 01 02, 10 11 12
        }
        cout << endl;
    }

    return 0;
}

/* Output :

1 2 3 4 5 
2 3 4 5 6
00 01 02
10 11 12

*/