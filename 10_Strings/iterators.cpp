#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Part 1: Convert each character to uppercase using iterators
    string str1 = "today";
    string::iterator it1;
    for (it1 = str1.begin(); it1 != str1.end(); it1++) {
        *it1 = *it1 - 32; // Convert to uppercase
    }
    cout << str1 << endl;  // Output: TODAY

    // Part 2: Print the reversed string
    string str2 = "today";
    string::reverse_iterator it2;
    for (it2 = str2.rbegin(); it2 != str2.rend(); it2++) {
        cout << *it2;
    }
    cout << endl;  // Output: yadot

    // Part 3: Convert each character to uppercase using array indexing
    string str3 = "today";
    for (int i = 0; str3[i] != '\0'; i++) {
        cout << str3[i];  // Output: today
        str3[i] = str3[i] - 32; // Convert to uppercase
    }
    cout << endl << str3;  // Output: TODAY

    return 0;
}


/* Output;

TODAY
yadot
today
TODAY

*/