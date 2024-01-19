# Basics

### A Very Basic C++ Program

```cpp basic_program.cpp
#include <iostream>
using namespace std;

int main() {
    string name;

    cout<<"Enter your name : ";
    getline(cin, name);

    cout<<"Hello "<<name;

    return 0;
}
```

### Data Types

- #### Primitive :
    - **int :** Range from -2147483648 to 2147483647 & size is 4 bytes. 
        - `int number = 42;`
    - **char :** Range from -128 to 127 or 0 to 255 & size is 1 byte.
        - `char grade = 'A';`
    - **bool :** Can store true or false & size is 1 byte.
        - `bool isPassed = true;`
    - **float :** Used for storing single-precision floating-point values & size is 4 bytes.
        - `float pi = 3.14;`
    - **double :** Used for storing double-precision floating-point values & size is 8 bytes.
        - `double salary = 250000.75;`
    - **void (valueless) :**  Represents a valueless entity & used for those function which does not return a value.
    - **Wide Character :**  A character data type but has a size greater than the normal 8-bit data type. Represented by `wchar_t`. It is generally 2 or 4 bytes long.

- #### Derived :
    - **Arrays :** Collections of elements of the same data type.
        - `int numbers[5] = {1, 2, 3, 4, 5};`
    - **Pointers :** Variables that store memory addresses. On 64-bit systems, a pointer usually takes 8 bytes.
        - `int* ptr = &number;`
    - **References :** Alias for an existing variable.
        - `int &ref = number;`
    - **Functions :** A function is a block of code that performs a specific task.
        ```cpp
        // Function declaration
        int addNumbers(int a, int b) {
            return a + b;
        }

        // Function call
        int result = addNumbers(5, 7);
        ``` 

- #### User Defined / Abstract :
    - **Class :** Blueprint for creating objects, encapsulating data and methods.
        ```cpp
        class Rectangle {
        public:
            int length;
            int width;
            void calculateArea();
        };
        Rectangle myRect;
        ``` 
    - **Structure :**  User-defined composite data type that groups variables under a single name.
        ```cpp
        struct Point {
            int x;
            int y;
        };
        Point p1;
        ```
    - **Union :**  Allows storing different data types in the same memory location. Only one member of the union can be accessed at a time.
        ```cpp
        union MyUnion {
            int intValue;
            float floatValue;
            char charValue;
        };
        MyUnion u;
        ```
    - **Enumerations (enums) :** User-defined data type with named constant values.
        ```cpp
        enum Color { RED, GREEN, BLUE };
        Color myColor = BLUE;
        ```
    - **Typedef defined :** A keyword used to create an alias for a data type. It allows you to define a new name for an existing type, making your code more readable and providing a level of abstraction
        ```cpp
        typedef int RajatInteger;
        RajatInteger myNumber = 26;

        // In modern C++ (C++11 and later), we can also use the `using` keyword to achieve the same result as typedef

        using RajatInteger = int;
        ``` 

- #### Modifiers :
    - **short :** Reduces the range of int (short int).
        - `short smallNumber = 10;`
    - **long :** Increases the range of int (long int, long double).
        - `long bigNumber = 1000000;`
    - **unsigned :** Represents only non-negative values (unsigned int).
        - `unsigned int positiveNumber = 100;`
    - **signed :** Represents both positive and negative values (default for int).
        - `signed int negativeNumber = -10;` 



#### References :

- https://www.geeksforgeeks.org/cpp-data-types/