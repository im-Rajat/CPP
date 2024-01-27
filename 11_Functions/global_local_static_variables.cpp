// Program to understand scoping rule

#include <iostream>
using namespace std;

int globalVariable = 25;    // Goes to the Initialized Data Section
int variable;        // Goes to the Uninitialized Data Section/BSS Section

void staticFunc() {
    static int num = 10;     // value of num will set to 10 only on first function call
    num++;
    cout << "num: " << num << endl;
}

int main() {

    int localVariable = 25;
    {
        int localVariable = 50;
        cout << "localVariable inside block: " << localVariable << endl;    // 50
    }
    cout << "localVariable outside block: " << localVariable << endl;       // 25

    int variable = 5;
    cout << "variable inside main(): " << variable << endl;                 // 5
    cout << "variable outside main(): " << ::variable << endl;              // 0

    // Static variable example
    staticFunc();       // num: 11
    staticFunc();       // num: 12
    staticFunc();       // num: 13
    staticFunc();       // num: 14
    return 0;
}


/* Output:

localVariable inside block: 50
localVariable outside block: 25
variable inside main(): 5
variable outside main(): 0
num: 11
num: 12
num: 13
num: 14

*/