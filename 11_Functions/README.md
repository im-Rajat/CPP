# Functions

- It is peace of program which performs a specific task.
- It may take some inputs as parameter/arguments and return a result as return value.
- Functions are useful for procedural programming or modular programming.
- It can reuse in the same program or other program as many times.
- It is got practice to don't have user interaction (cout and cin) inside the function. Do this only in main function if possible.
- Prototype: `return_type Funtion_name(parameter list) {function_body}`
    ```cpp
    int add (int num1, int num2) {
        return num1 + num2;
    }
    ```
- **Default Arguments:** Making default argument should start from right side to left only without skipping any.
    ```cpp
    int multiply(int a, int b, int c = 1) {
        return a * b * c;
    }
    cout << "x * y = " << multiply (x, y) << endl;  // 200 (c variable by-default is 1)
    cout << "x * y * z = " << multiply (x, y, z) << endl;   // 6000
    ```

### Function Overloading

- Functions with same name but different argument list.

- Compiler decides which function to call based on arguments passed.
- Example:
    ```cpp
    // function_overloading.cpp
    
    int sum (int a, int b) {
        return a + b;
    }
    int sum (int a, int b, int c) {
        return a + b + c;
    }
    float sum (float a, float b, float c) {
        return a + b + c;
    }

    int main() {
        int x = 10, y = 20, z = 30;
        cout << "Sum of x and y is: " << sum (x, y) << endl;        // 30
        cout << "Sum of x, y and z is: " << sum (x, y, z) << endl;      // 60 
        cout << "Sum of x, y and z is: " << sum (10.2f, 20.3f, 10.5f) << endl;  // 41
    }
- Return type is never consider in function overloading. Functions that differ only in their return type cannot be overloaded.
- If function name and parameters are exactly same but return type is different means they are not overloaded. It's a name conflict. We are redefining same function again.

### Function Template

- The functions which are generic. Generalized.
- `template <typename T>` same as `template <class T>`
    ```cpp
    // templates.cpp

    template <typename T>
    T sum(T num1, T num2) {
        return num1 + num2;
    }

    cout << "sum of int and int: " << sum(10, 20) << endl;                  // 30
    cout << "sum of float and float: " << sum(10.2f, 20.4f) << endl;        // 30.6
    cout << "sum of double and double: " << sum(113.21, 205.41) << endl;    // 318.62
    ```
- Instead of having different functions for different data type, we can use template T.

### Parameter Calling/Passing Methods
- Pass by can be called as call by, both are same
- **Call by Value** 
    - Value of variables are copied and different space is allocated to them
    ```cpp
    void swap1(int a, int b) {   // a and b have their separate memory
        int temp = a;
        a = b;
        b = temp;
    }

    int x = 10, y = 20;
    swap1(x, y);
    cout << "x: " << x << " y: " << y << endl;  // x: 10 y: 20 (main variables didn't swap)
    ```
- **Call by Address**
    - We pass the addresses of the variables.
    ```cpp
    void swap2(int *a, int *b) {
        int temp = *a;  // read the value of a from address pointed by 'a'
        *a = *b;       // assign the value of b to address pointed by 'a'
        *b = temp;     // assign the value of temporary variable 'temp' to address pointed by 'b'
    }

    int x = 10, y = 20;
    swap2(&x, &y);
    cout << "x: " << x << " y: " << y << endl;  // x: 20 y: 10
    ```
- **Call by Reference**
    - Only available in c++ not in c.
    - References are just a nickname/alias of a variable.
    - Syntax is very similar to call by value. It just we can `&` in variable in function definition. But it worked similar to call by address as it can modify the value of actual parameters.
    - Whenever we use call by reference mechanism it will not generate separate piece of machine code. It will copy the machine code at the place of function call. The function will not be a separate function, it will part of main function only.
    - When use call by reference avoid using loops (may get warnings).
    - **If the piece of machine code of a function is copied at the place of function call like below then such functions are called as inline functions in C++.**
    - **When we use a call by reference function automatically becomes inline function.**
    ```cpp
    void swap3(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int x = 20, y = 10;
    swap3(x, y);
    cout << "x: " << x << " y: " << y << endl;  // x: 10 y: 20
    ```
- If I write any complex code like loops or something this function will no longer be using call by reference. It may become call by address automatically compilers will change it. So therefore we should not write any complex code inside the functions which are using call by reference.

### Return by Pointer/Address

- We can also return a Pointer/Address
    ```cpp
    int* arrPtr(int size) {
        int *ptr = new int[size];

        for (int i = 0; i < size; i++) {
            ptr[i] = i * 10;
        }

        return ptr;
    }

    int *ptr = arrPtr(10);

    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << " ";      // 0 10 20 30 40 50 60 70 80 90
    }
    ```

### Return by Reference
- Mostly we make the functions as R values, but we can make it as L value using references.
    ```cpp
    int& ref(int &a) {
        cout << "a: " << a << endl;     // a: 10
        return a;
    }

    int x = 10;
    ref(x) = 25;
    cout << "x: " << x << endl;     // x: 25
    ```