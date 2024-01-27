#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string str1;
    cout << "Enter str1: ";

    // Input Functions:
    getline(cin, str1);     // Taking string input
    cout << "str1 = " << str1 << endl;

    str1.push_back('r');    // Inserting a character
    cout << "str1.push_back('r') = " << str1 << endl;

    str1.pop_back();        // Deleting a character
    cout << "str1.pop_back() = " << str1 << endl;

    // String Length:
    cout << "str1.size() = " << str1.size() << endl;
    cout << "str1.length() = " << str1.length() << endl;
    cout << "str1.capacity() = " << str1.capacity() << endl;
    str1.resize(100);
    cout << "str1.capacity() after str1.resize(100); = " << str1.capacity() << endl;
    str1.shrink_to_fit();
    cout << "str1.capacity() after str1.shrink_to_fit() = " << str1.capacity() << endl;

    return 0;
}

/* Output:

Enter str1: Hello Everyone
str1 = Hello Everyone
str1.push_back('r') = Hello Everyoner
str1.pop_back() = Hello Everyone
str1.size() = 14
str1.length() = 14
str1.capacity() = 15
str1.capacity() after str1.resize(100); = 100
str1.capacity() after str1.shrink_to_fit() = 100

*/