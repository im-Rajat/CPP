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

### Variables

- Variables are containers for storing data values.
- Syntax : `type variableName = value;`
- `int number = 8` here number is a variable.
- `int x = 5, y = 6, z = 50;`

### Identifiers

- All variables must be identified with unique names.
- These unique names are called identifiers.
- Names are case sensitive (`myVar` and `myvar` are different variables)
  
### Constants

- When we do not want to change existing variable values, we use the const keyword.
- This will declare the variable as "constant", which means unchangeable and read-only.
    - `const int myNum = 15;  // myNum will always be 15`
    - `myNum = 10;  // error: assignment of read-only variable 'myNum'`
- When we declare a constant variable, it must be assigned with a value, not like this :
    - `const int minutesPerHour;`
    - `minutesPerHour = 60; // error`

### Comments

- Comments can be used to explain C++ code, and to make it more readable.
- Comments can be singled-lined or multi-lined.

#### Single-line Comments :
- Single-line comments start with two forward slashes (//).
- Any text between // and the end of the line is ignored by the compiler (will not be executed).
- `// This is a comment`

#### Multi-line Comments :
- Multi-line comments start with /* and ends with */.
- Any text between /* and */ will be ignored by the compiler:
- For example :
    ```cpp
    /* The code below will print the words Hello World!
    to the screen, and it is amazing */
    cout << "Hello World!";
    ```

### User Input

- We can use `cin` to get user input.
- `cin` is a predefined variable that reads data. `cin` is pronounced "see-in". Used for input, and uses the extraction operator `(>>)`
- For example :
    ```cpp
    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value
    ```
- `cout` is pronounced "see-out". Used for output, and uses the insertion operator `(<<)`

### Operators

- Operators are used to perform operations on variables and values.
- We use `+` operator to add together two values : `int x = 100 + 50;`
- C++ divides the operators into the 5 groups :

#### Arithmetic operators :
#### Assignment operators :
#### Comparison operators :
#### Logical operators :
#### Bitwise operators :