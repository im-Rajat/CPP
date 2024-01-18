# Introduction

- C++ is a popular programming language.
- C++ is extension to C language.
- The language has major updates like: C++11, C++14, C++17, C++20
- C++ is an object oriented language

### Main Difference between C and C++

- C++ is an extension of C, both language have similar syntax.
- The main difference is C++ supports OOPS i.e. classes & objects, while C doesn't.


#### Simple C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

- **Line 1: `#include <iostream>`** is a header file library that lets us work with input and output objects, such as cout (used in line 5).
    -   Header files add functionality to C++ programs.
- **Line 2: `using namespace std;`** means that we can use names for objects and variables from the standard library.
- **Line 4: `int main() {`** This is a function. Any code inside its curly brackets `{}` will be executed.
- **Line 6: `return 0;`** A return value of 0 usually indicates that the program terminated successfully. A non-zero value typically signifies an error or an abnormal termination. 
    - Not mandatory just a good practice.
    - Every C++ statement ends with a semicolon `;`

#### Program Omitting Namespace
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World";
    return 0;
}
```