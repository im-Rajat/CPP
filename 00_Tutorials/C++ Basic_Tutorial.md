# C++ Basic Tutorial


## Simple Program

```cpp
#include <iostream>    // #include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

  - **Line 1:** `#include <iostream>` is a header file library that lets us work with input and output objects, such as `cout`. Header files add functionality to C++ programs.
  - **Line 2:** `using namespace std` means that we can use names for objects and variables from the standard library.

### Omitting Namespace

You can omit the `using namespace std` line, but then you must prefix standard library objects with `std::`.

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

**Note:** Both `\n` and `endl` are used to create new lines. However, `\n` is generally preferred as it is slightly more performant.


## C++ Variables

Variables are containers for storing data values.

  - `int` - stores integers (whole numbers), e.g., `123` or `-123`.
  - `double` - stores floating-point numbers with decimals, e.g., `19.99`.
  - `char` - stores single characters, e.g., `'a'`. Char values are surrounded by single quotes.
  - `string` - stores text, e.g., `"Hello World"`. String values are surrounded by double quotes.
  - `bool` - stores values with two states: `true` or `false`.

<!-- end list -->

```cpp
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

// Displaying variables
int myAge = 35;
cout << "I am " << myAge << " years old.";

// Declaring multiple variables
int x = 5, y = 6, z = 50;
cout << x + y + z;
```


## C++ Identifiers

All C++ variables must be identified with unique names. These unique names are called **identifiers**.


## C++ Constants

To prevent a variable's value from being changed, use the `const` keyword. This declares the variable as a constant, making it unchangeable and read-only.

```cpp
const int myNum = 15;  // myNum will always be 15
myNum = 10;            // ERROR: assignment of read-only variable 'myNum'
```


## C++ User Input

The `cin` object is used to get user input from the keyboard.

```cpp
int x;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value
```


## C++ Data Types

| Data Type | Size    | Description                                                               |
| :-------- | :------ | :------------------------------------------------------------------------ |
| `int`     | 4 bytes | Stores whole numbers, without decimals                                    |
| `float`   | 4 bytes | Stores fractional numbers. Sufficient for storing 7 decimal digits.       |
| `double`  | 8 bytes | Stores fractional numbers. Sufficient for storing 15 decimal digits.      |
| `boolean` | 1 byte  | Stores `true` or `false` values                                           |
| `char`    | 1 byte  | Stores a single character/letter/number, or ASCII values                  |

### Scientific Numbers

A floating-point number can also be a scientific number with an "e" to indicate the power of 10.

```cpp
float f1 = 35e3;    // 35 * 10^3 = 35000
double d1 = 12E4;   // 12 * 10^4 = 120000
```


## C++ Operators

C++ divides operators into the following groups:

  - Arithmetic operators
  - Assignment operators
  - Comparison operators
  - Logical operators
  - Bitwise operators


## C++ Strings

You must include the `<string>` library to work with strings.

```cpp
// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello";
```

### String Operations

```cpp
string firstName = "John ";
string lastName = "Doe";

// String Concatenation
string fullName = firstName + lastName;

// Append
string fullName = firstName.append(lastName);

// String Length
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

// txt.length() is the same as txt.size();
```

### `cin` and Strings

`cin` considers whitespace (space, tab, etc.) as a terminating character, so it can only read a single word.

```cpp
string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;
// Input: John Doe
// Output: Your name is: John
```

To read a full line of text, use the `getline()` function.

```cpp
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
// Input: John Doe
// Output: Your name is: John Doe
```


## Math Functions

The `<cmath>` library contains several useful math functions.

  - `max(x,y)`: finds the highest value between `x` and `y`.
  - `min(x,y)`: finds the lowest value between `x` and `y`.

<!-- end list -->

```cpp
// Include the cmath library
#include <cmath>

cout << sqrt(64);    // Square root
cout << round(2.6);  // Rounds to the nearest integer
cout << log(2);      // Natural logarithm
```


## C++ Conditionals

### If ... Else

```cpp
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
```

### Short Hand If...Else (Ternary Operator)

```cpp
// variable = (condition) ? expressionTrue : expressionFalse;
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```


## C++ Switch Statements

Use the `switch` statement to select one of many code blocks to be executed.

```cpp
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
```

  - **The `break` Keyword**: When C++ reaches a `break` keyword, it breaks out of the switch block. This stops the execution of more code and case testing.
  - **The `default` Keyword**: The `default` keyword specifies some code to run if there is no case match. It must be the last statement and does not need a `break`.


## C++ Loops

### While Loop

```cpp
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
```

### Do/While Loop

This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

```cpp
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
```

### For Loop

```cpp
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}

// Loop with a step of 2
for (int i = 0; i <= 10; i = i + 2) {
  cout << i << "\n";
}
```


## `break` and `continue` in Loops

### C++ Break

The `break` statement can also be used to jump out of a loop.

```cpp
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}
// Outputs 0, 1, 2, 3
```

### C++ Continue

The `continue` statement breaks one iteration (in the loop) and continues with the next iteration.

```cpp
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}
// Outputs 0, 1, 2, 3, 5, 6, 7, 8, 9
```


## C++ Arrays

Arrays are used to store multiple values in a single variable.

```cpp
// Declaration
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};

// Access an element
cout << cars[0]; // Outputs Volvo

// Change an element
cars[0] = "Opel";

// Loop through an array
for(int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}
```

### Omit Array Size

If you omit the size of the array, it will automatically be sized to the number of elements you insert.

```cpp
string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is 3
```


## References and Pointers

### C++ References

A reference variable is an alias for an existing variable. It's created with the `&` operator.

```cpp
string food = "Pizza";  // food variable
string &meal = food;    // reference to food

cout << food << "\n";   // Outputs Pizza
cout << meal << "\n";   // Outputs Pizza
```

Changes made to `meal` will also affect `food`, and vice-versa, as they refer to the same memory location.

### C++ Memory Address

The `&` operator can also be used to get the memory address of a variable.

```cpp
string food = "Pizza";
cout << &food; // Outputs the memory address, e.g., 0x6dfed4
```

### C++ Pointers

A **pointer** is a variable that stores the memory address as its value.

```cpp
string food = "Pizza";    // A food variable of type string
string* ptr = &food;    // A pointer variable that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (e.g., 0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (e.g., 0x6dfed4)
cout << ptr << "\n";
```

### Dereferencing

To get the value of the variable the pointer points to, use the dereference operator `*`.

```cpp
string food = "Pizza";
string* ptr = &food;

// Reference: Output the memory address of food (e.g., 0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
```

> **Note:** The `*` sign has two different meanings here:
>
>   - When used in a declaration (`string* ptr`), it creates a pointer variable.
>   - When not used in a declaration (`*ptr`), it acts as a dereference operator.

### Modify Pointer Value

You can change the value of the original variable through the pointer.

```cpp
string food = "Pizza";
string* ptr = &food;

// Change the value of the variable the pointer points to
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
```


## C++ Functions

A function is a block of code that only runs when it is called.

```cpp
void myFunction(string country = "Norway") { // Default parameter
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction(); // Will use the default value "Norway"
  myFunction("USA");
  return 0;
}
```

### Pass By Reference

To allow a function to modify a variable's value, you can pass it by reference.

```cpp
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  // Call the function
  swapNums(firstNum, secondNum);

  cout << firstNum << secondNum << "\n"; // Outputs 2010
  return 0;
}
```

### Pass By Pointer

You can also achieve the same result by passing pointers.

```cpp
void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

int main() {
    int a = 45, b = 35;
    swap(&a, &b); // Pass the memory addresses of a and b
    cout << "a = " << a << " b = " << b << "\n"; // a = 35 b = 45
}
```

### Function Overloading

With function overloading, multiple functions can have the same name but with different parameters.

```cpp
int myFunction(int x);
float myFunction(float x);
double myFunction(double x, double y);
```


## C++ OOP

**OOP** stands for Object-Oriented Programming. It is about creating objects that contain both data and functions.

### Classes and Objects

  - **Class**: A template or blueprint for creating objects.
  - **Object**: An instance of a class.

An object inherits all the variables (attributes) and functions (methods) from its class.

### Creating a Class and Object

```cpp
class MyClass {        // The class
  public:              // Access specifier
    int myNum;         // Attribute (int variable)
    string myString;   // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```

### Class Methods

Methods are functions that belong to the class. They can be defined inside or outside the class definition.

**Inside Class Definition:**

```cpp
class MyClass {
  public:
    void myMethod() { // Method/function defined inside the class
      cout << "Hello World!";
    }
};
```

**Outside Class Definition:**

To define a function outside the class definition, you declare it inside the class and then define it outside using the scope resolution operator `::`.

```cpp
class MyClass {
  public:
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}
```

### Constructors

A constructor is a special method that is automatically called when an object of a class is created. It has the same name as the class and does not have a return type.

```cpp
class Car {
  public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  cout << carObj1.brand << " " << carObj1.model << "\n";
  cout << carObj2.brand << " " << carObj2.model << "\n";
  return 0;
}
```

### Access Specifiers

  - `public` - members are accessible from outside the class.
  - `private` - members cannot be accessed from outside the class.
  - `protected` - members cannot be accessed from outside the class, but can be accessed in inherited classes.

<!-- end list -->

```cpp
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
```


## OOP Principles

### Encapsulation

**Encapsulation** means ensuring that "sensitive" data is hidden from users. This is achieved by declaring class attributes as `private`. Public `get` and `set` methods are provided to access and modify the private members.

```cpp
class Employee {
  private:
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
```

### Inheritance

**Inheritance** allows a class to inherit attributes and methods from another class.

  - **`derived class`** (child) - the class that inherits from another class.
  - **`base class`** (parent) - the class being inherited from.

To inherit from a class, use the `:` symbol.

```cpp
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
```

#### Multilevel & Multiple Inheritance

  - **Multilevel Inheritance**: A class is derived from a class which is also derived from another class (e.g., Grandchild -\> Child -\> Parent).
  - **Multiple Inheritance**: A class is derived from more than one base class.

### Polymorphism

**Polymorphism** means "many forms". It occurs when we have many classes related by inheritance. It allows us to perform a single action in different ways.

```cpp
// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};
```


## C++ Files

The `<fstream>` library allows us to work with files.

| Class    | Description                                                        |
| :------- | :----------------------------------------------------------------- |
| `ofstream` | Creates and writes to files.                                       |
| `ifstream` | Reads from files.                                                  |
| `fstream`  | A combination of `ofstream` and `ifstream`: creates, reads, writes. |

### Create and Write to a File

```cpp
#include <iostream>
#include <fstream>

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}
```

### Read a File

```cpp
// Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
```


## C++ Exceptions

**Exception handling** is a mechanism to handle runtime errors.

  - `try`: A block of code to be tested for errors.
  - `throw`: Throws an exception when a problem is detected.
  - `catch`: A block of code to be executed if an error occurs in the `try` block.

### `try` and `catch` Example

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age); // Throw an exception
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
```

### Handle Any Type of Exception

To catch any type of exception, use `catch (...)`.

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - An unknown error occurred.\n";
}
```


## References:

- https://www.w3schools.com/cpp/
- C++ Core Guidelines: [GitHub - isocpp/CppCoreGuidelines: The C++ Core Guidelines are a set of tried-and-true guidelines, rules, and best practices about coding in C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)