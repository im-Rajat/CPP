// C++ Program to Demonstrate the size of various data types.

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << " byte" << endl;
	cout << "Size of bool : " << sizeof(bool) << " byte" << endl;
	cout << "Size of int : " << sizeof(int) << " bytes" << endl;
	cout << "Size of float : " << sizeof(float) << " bytes" << endl;
	cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long : " << sizeof(long) << " bytes" << endl;
    
    cout << "char minimum value: " << CHAR_MIN << endl;
    cout << "char maximum value: " << CHAR_MAX << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

	return 0;
}


/* Output :

Size of char : 1 byte
Size of bool : 1 byte
Size of int : 4 bytes
Size of float : 4 bytes
Size of double : 8 bytes
Size of long : 4 bytes
char minimum value: -128
char maximum value: 127
Size of short int : 2 bytes
Size of long int : 4 bytes
Size of signed long int : 4 bytes
Size of unsigned long int : 4 bytes
Size of wchar_t : 2 bytes

*/