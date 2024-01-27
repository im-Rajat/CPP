# Strings

- We have char array which is available in c & c++.
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
- This will also work:
    ```cpp
    char *s;
    cout<<"Enter a String";
    cin>>s;
    cin.getline(s, 100);
    ```

### Char Array/String built-in functions

- Need to include `#include <ctring>` or `#include <string.h>`
    - `'<cstring>'` is the C++ version of the C header `'<string.h>'`. It is part of the C++ Standard Library and contains the same functions as <string.h>, but they are encapsulated within the std namespace. So, when you use <cstring>, you should use the std namespace or include it explicitly:
        ```cpp
        #include <cstring>

        // Or use std::function
        std::size_t length = std::strlen("Hello");
        ```
    - `'<string.h>'` is the C version of the header and is typically used in C programs. If you are writing C++ code, it is generally recommended to use `'<cstring>'` for better compatibility with C++ and to take advantage of the std namespace.
        ```cpp
        #include <string.h>

        const char *source = "Hello, World!";
        char destination[20];

        strcpy(destination, source);
        printf("Copied string: %s\n", destination);
        ```
        
- `strlen(s)`   // for string length
    ```cpp
    // strlen: String Length

    char str[] = "Hello";
    int length = strlen(str);
    cout << "Length of string: " << length << endl;     // 5
    ```
- `strcat(destination, source)` // for concatenate strings, source string will added in destination string, destination will become destination + source.
    ```cpp
    // strcat: Concatenate strings

    char source[] = " World";
    char destination[20] = "Hello";
    strcat(destination, source);
    cout << "Concatenated string: " << destination << endl;     // Hello World
    ```
- `strncat(destination, source, number of letter of second string to concatenate with first)`   // Concatenate with limited characters
    ```cpp
    // strncat: Concatenate with limited characters

    char source2[] = " Universe";
    strncat(destination, source2, 4); // Concatenate only the first 4 characters of source2
    cout << "Partially concatenated string: " << destination << endl;   // Hello World Uni
    ```
- `strcpy(destination, source)` // copy source string to destination
    ```cpp
    // strcpy: Copy string

    char source3[] = "Copy";
    char destination2[20];
    strcpy(destination2, source3);
    cout << "Copied string: " << destination2 << endl;      // Copy
    ```
- `strncpy(destination,source, length)` // Copy string with limited characters
    ```cpp
    // strncpy: Copy string with limited characters
    char source4[] = "Partial Copy";
    char destination3[20];
    strncpy(destination3, source4, 7); // Copy only the first 7 characters of source4
    cout << "Partially copied string: " << destination3 << endl;    // Partial
    ```
- `strstr(main, sub)`   // to find substring, will crash if not found. Use if(strstr(s1,s2)!=NULL) {…}
    ```cpp
    // strstr: Find substring

    char mainStr[] = "Hello World";
    char subStr[] = "World";
    if (strstr(mainStr, subStr) != NULL) {
        cout << "Substring found!" << endl;     // Substring found!
    } else {
        cout << "Substring not found." << endl;
    }
    ```
- `strchr(main, char)`; // find occurrence of a character in string
    ```cpp
    // strchr: Find character occurrence

    char searchChar = 'o';
    char* charPtr = strchr(mainStr, searchChar);
    if (charPtr != NULL) {
        cout << "Character found at position: " << (charPtr - mainStr) << endl;     // 4
    } else {
        cout << "Character not found." << endl;
    }
    ```
- `strcmp(str1, str2)` ;    // compare 2 string, return -ve, 0 (when strings are same), +ve
    ```cpp
    // strcmp: Compare strings

    char str1[] = "Hello";
    char str2[] = "World";
    int comparisonResult = strcmp(str1, str2);
    cout << "Comparison result: " << comparisonResult << endl;      // -1
    ```
- `strtol(str1, NULL, 10)`  // string to long int, where 10 (decimal) is base
    ```cpp
    // strtol: String to long int

    char str3[] = "123";
    long intResult = strtol(str3, NULL, 10);
    cout << "String to long int: " << intResult << endl;    // 123
    ```
- `strtof(str1, NULL)`  // string to float
    ```cpp
    // strtof: String to float

    char str4[] = "3.14";
    float floatResult = strtof(str4, NULL);
    cout << "String to float: " << floatResult << endl;     // 3.14
    ```
- `strtok(str1, "=;")`  // to tokenize a string, where =; is token/delimiter.
    ```cpp
    // Example for strtok

    char str5[] = "key1=value1;key2=value2";
    char* token = strtok(str5, "=;");
    while (token != NULL) {
        cout << "Token: " << token << endl;     // Token: key1 
        token = strtok(NULL, "=;");             // Token: value1 .....
    }
    ```
- Working code with all above example is in `char_functions.cpp`

### Class String

- How to define a string:
    - `string str`
- Declaration and Initialization of String:
    - `std::string newStr = "You are learning C++";`
- How to input a string:
    - `cin >> std`  // take only one word
    - `getline(cin, str)`   // can take sentence

### String Class Functions / Operations on Strings

#### Input Functions:
- `getline(cin, str)` : store a stream of characters as entered by the user
- `push_back('c')` : input a character at the end of the string
- `pop_back()` : delete the last character from the string.
    ```cpp
    string str1;
    cout << "Enter str1: ";
    getline(cin, str1);     // Taking string input
    cout << "str1 = " << str1 << endl;

    str1.push_back('r');    // Inserting a character
    cout << "str1.push_back('r') = " << str1 << endl;

    str1.pop_back();        // Deleting a character
    cout << "str1.pop_back() = " << str1 << endl;
    ```

#### String Length:
- `str.size()` : Returns the size of the string
- `str.length()` : Alias of size, returns the size of the string
- `str.capacity()` : Returns the capacity allocated to a string by the compiler
- `str.reserve(100)` : Changes the capacity of the string
- `shrink_to_fit()` : reduces the capacity of the string object to fit its actual length

    ```cpp
    cout << "str1.size() = " << str1.size() << endl;
    cout << "str1.length() = " << str1.length() << endl;
    cout << "str1.capacity() = " << str1.capacity() << endl;
    str1.resize(100);
    cout << "str1.capacity() after str1.resize(100); = " << str1.capacity() << endl;
    str1.shrink_to_fit();
    cout << "str1.capacity() after str1.shrink_to_fit() = " << str1.capacity() << endl;
    ```

#### String class provides a variety of member functions:

- **Constructor:**
    ```cpp
    std::string str1;                   // Default constructor
    std::string str2("Hello, World!");  // Constructor with a C-string
    std::string str3(5, 'A');           // Constructor with repetition 
    ```
- **Assignment:**
    ```cpp
    std::string str4 = "C++";
    std::string str5;
    str5 = str4;  // Assignment
    ```
- **Concatenation:**
    ```cpp
    std::string str6 = "Hello, ";
    std::string str7 = "World!";
    std::string result = str6 + str7;  // Concatenation
    ```
- **Accessing Characters:**
    ```cpp
    std::string str9 = "Example";
    char firstChar = str9[0];    // Accessing first character
    char lastChar = str9.back();  // Accessing last character
    ```
- **Substring:**
    ```cpp
    std::string str10 = "Programming";
    std::string subStr = str10.substr(3, 5);  // Get substring from position 3 with length 5
    ```
- **Find:**
    ```cpp
    std::string str11 = "C++ is powerful";
    size_t pos = str11.find("power");  // Find the position of the substring "power"
    ```
- **Replace:**
    ```cpp
    std::string str12 = "C++ is great";
    str12.replace(7, 5, "awesome");  // Replace "great" with "awesome"
    ```
- **Erase:**
    ```cpp
    std::string str13 = "Remove this";
    str13.erase(7, 5);  // Erase 5 characters starting from position 7
    ```
- **Compare:**
    - similar to strcmp, compare string in dictionary order and return result as -ve, 0, +ve.
    ```cpp
    std::string str14 = "apple";
    std::string str15 = "orange";
    int result = str14.compare(str15);  // Compare strings lexicographically
    ```
- **There are more functions in string class:**
    - `s.max_size()`
    - `s.clear()`
    - `s.empty()`
    - `s.append( “Bye")`
    - `s.insert(3,"kk" )`
    - `s.insert(3, "Apple", 2)`
    - `s.replace(3,5,"aa" )`    // 3 is starting index, 4 is length from starting index to replace with aa
    - `s1.swap(s2)` // swap 2 strings
    - `s.copy(char des[])`  // copy string char array des[]
    - `s.find(str) or char` // to find occurrence of string or char and return index
    - `s.rfind(str`)        // to find occurrence of string or char from end/right hand side and return index. If return index is greater than length of string it means it didn't find the string or char
    - `s.find_first_of('a', 3)` // a character to find from last side and start finding from index 3 onwards
    - `s.find_last_of('le')`    // search from right hand side, will return index of any of character found first


#### Some operators defined upon string class:
- `str.at(5)`   // similar to `str[5]`
- `str.front()` // return first character of string
- `str.back()`  // return last character of string

#### Iterators
- `string::iterator`  // iterator object will work like a pointer to a character in a string (can read and modify)
- `begin()`
- `end()`
- `reverse_iterator`
- `rbegin()`
- `rend()`
- Example:
    ```cpp
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
    ```