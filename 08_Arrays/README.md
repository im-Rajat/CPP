# Arrays

- An array is a collection of elements of the same data type, stored in contiguous memory locations.
- The elements in an array are accessed using an index, which starts from 0 for the first element.
- To declare an array :
    - define the variable type,
    - specify the name of the array followed by square brackets and
    - specify the number of elements it should store:
- `string cars[4];`
- `int myNum[3] = {10, 20, 30};`

### Omit Array Size 
- We don't have to specify the size of the array.
- The compiler is smart enough to determine the size of the array based on the number of inserted values:
- `string cars[] = {"Volvo", "BMW", "Ford"};`   // Size is 3 automatically
  
### Omit Elements on Declaration
- It is also possible to declare an array without specifying the elements on declaration, and add them later
- `string cars[5]; cars[0] = "Volvo"; cars[1] = "BMW"; ...`
- `int numbers[5] = {1, 2};`   // {1, 2, 0, 0, 0}
    - Other values will be 0 by-default.

### Get the Size of an Array
- To get the size of an array, you can use the `sizeof()` operator:
- `sizeof(myNumbers);`  // myNumbers is name of array

### Accessing Elements
- `int elementAtIndexTwo = myArray[2];` // Retrieves the element at index 2

### Simple Array Program

```cpp
// array.cpp

// Declaration and initialization of an integer array
int myArray[5]; // Declares an array of 5 integers

// Initializing elements individually
myArray[0] = 10;
myArray[1] = 20;
myArray[2] = 30;
myArray[3] = 40;
myArray[4] = 50;

// Declaration and initialization in one line
int anotherArray[] = {1, 2, 3, 4, 5}; // Compiler determines the size

// Getting the size of an array
int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

// Output array
for (int i = 0; i < sizeOfArray; i++) {
    cout << myArray[i] << " ";
}

cout << endl;

// Output anotherArray using for-each
for (int i : anotherArray) {
    cout << i << " ";
}
```

## Multidimensional Arrays:


## Standard Template Library (STL) Arrays:

- C++ also provides the `std::array` template class as part of the Standard Template Library:
- Using `std::array` provides additional benefits, such as bounds checking and compatibility with other STL algorithms.
- In C++ **Arrays have fixed sizes**, and modifying their size requires creating a new array. If we need a dynamic-size array, consider using `std::vector` from the STL.

    ```cpp
    #include <array>

    // Declaration and initialization of a std::array
    array<int, 5> stlArray = {10, 20, 30, 40, 50};

    // Accessing elements
    int value = stdArray[2];    // Retrieves the element at index 2
    int value2 = stlArray.at(0);    // Retrieves the element at index 0
    ```