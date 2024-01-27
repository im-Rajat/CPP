// Program to demonstrate recursive function

#include <iostream>
using namespace std;

void recursiveFunc1(int num) {
    if (num >= 0) {
        cout << num << " ";
        recursiveFunc1(num - 1);
    }
}

void recursiveFunc2(int num) {
    if (num >= 0) {
        recursiveFunc2(num - 1);
        cout << num << " ";
    }
}

int main() {
    recursiveFunc1(5);      // 5 4 3 2 1 0
    cout << endl;
    recursiveFunc2(5);      // 0 1 2 3 4 5

    return 0;
}


/* Output :

5 4 3 2 1 0 
0 1 2 3 4 5

*/