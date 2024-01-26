// Different ways of declaring and initializing string using char array

#include <iostream>
using namespace std;

int main() {

    char arr1 = 'a';
    char arr2[10] = "Hello";
    char arr3[] = "Hello";
    char arr4[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char arr5[] = {65, 66, 67, 68, 69, '\0'};
    char *arr6 = "Hello";   // warning: ISO C++ forbids converting a string constant to 'char*'
    const char *arr7 = "Hello"; // to fix arr6 warning, add const

    cout << "arr1 = " << arr1 << endl;      // a
    cout << "arr2 = " << arr2 << endl;      // Hello
    cout << "arr3 = " << arr3 << endl;      // Hello
    cout << "arr4 = " << arr4 << endl;      // Hello
    cout << "arr5 = " << arr5 << endl;      // ABCDE
    cout << "arr6 = " << arr6 << endl;      // Hello
    cout << "arr7 = " << arr7 << endl;      // Hello

    char name[20];
    cout << "Enter name: "; 
    cin >> name;    // Reads until the first whitespace character, read only first word not whole sentence
    cout << "name = " << name << endl;  // Rajat
    cin.ignore();   // to handle any leftover newline characters or other unwanted characters in the input buffer

    // cin.get() is used for accessing character array
    char data[20];
    cout << "Enter Something for cin.get(): ";
    cin.get(data, 20);   //  get will not read enter key, second string will take that enter as '\n' string
    cout << "data = " << data << endl;      // How are you?
    cin.ignore();   // to handle any leftover newline characters or other unwanted characters in the input buffer

    // `cin.getline()` reads input up to `'\n'` and stops (no need to use cin.ignore())
    char data2[20];
    cout << "Enter Something for cin.getline(): ";
    cin.getline(data2, 20);
    cout << "data2 = " << data2 << endl;    // I am fine

    return 0;
}


/* Output:

arr1 = a
arr2 = Hello
arr3 = Hello
arr4 = Hello
arr5 = ABCDE
arr6 = Hello
arr7 = Hello
Enter name: Rajat
name = Rajat
Enter Something for cin.get(): how are you?
data2 = How are you?
Enter Something for cin.getline(): I am fine
data = I am fine

*/