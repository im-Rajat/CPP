// Program to demonstrate Switch Statement

#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!\n";
            break;
        case 'B':
            cout << "Good job!\n";
            break;
        case 'C':
            cout << "Satisfactory.\n";
            break;
        case 'D':
            cout << "Needs improvement.\n";
            break;
        case 'F':
            cout << "Fail.\n";
            break;
        default:
            cout << "Invalid grade entered.\n";
    }

    return 0;
}

/* Output :

Enter your grade (A, B, C, D, or F): A
Excellent!

*/