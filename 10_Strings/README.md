# Strings

- We can char array which is available in c & c++.
- We have class String which is only available in c++.
- Let's first understand char array:

### Char Array

- Different ways of declaring and initializing string using char array:
    ```cpp
    // char_array.cpp

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
    ```
- Use Single Quotes for char `''`
- use Double Quotes for string `""`
- Declaring & Initializing String:  
    <img src="images/char_array.jpg" alt="Char Array" width="500">
- Literals are created in code section.
    -  a literal is a notation for representing a fixed value in source code.
    -  literals can be used to represent constants of various types, such as integers, floating-point numbers, characters, and more
- If we want a string in heap, go for character pointer.
- If you want in stack, then go for character array.
- Null character = `'\0'` (or 0 numeric)
- just `cin` only takes characters to the first white space.
- `cin.getline()` reads input up to `'\n'` and stops
- `cin.get()` reads input up to `'\n'` and keeps `'\n'` in the stream
- `cin.getline()` reads a whole line, up to, but not including the Enter key.
- `cin.get()` is the same, except it keeps the newline character. 
- Example:
    ```cpp
    // char_array.cpp

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
    ```

