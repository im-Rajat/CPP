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

