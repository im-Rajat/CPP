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

Pass by can be called as call by, both are same

**Call by Value:**
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
**Call by Address:**
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
**Call by Reference:**
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

### Global, Local and Static Variables

**Global Variables:**
- Declaration: Declared outside of any function or block, typically at the beginning of a C++ file or in a header file.
- Scope: Global variables have global scope, meaning they can be accessed from any part of the program, including functions and code blocks.
- Lifetime: Global variables exist for the entire duration of the program's execution.
- Initialization: They are automatically initialized to zero if no explicit initialization is provided.
- Storage: Stored in a different section of memory, typically in the data section or initialized data section.
    - Small piece of memory as belonging to the data section only, which is meant for keeping global variables. So we should look at this and the initial size zero.
- We can use scope resolution `::` to access global variable if we have same name of local and global variable.

**Local Variables:**
- Declaration: Local variables are declared within a specific function, block, or scope.
- Scope: They are limited to the block or function in which they are declared and can't be accessed from outside that scope.
- Lifetime: Local variables exist only during the execution of the block or function where they are defined.
- Initialization: Local variables are not automatically initialized, and their initial values are undefined unless explicitly set.
- Storage: They are stored on the stack memory.
- Variables defined in `int main()` are also local.

**Scoping Rule:**
- C++ have block level scope.
- If we define a variable with a same name that's already present inside a block using `{}` it will have it's separate memory and scope inside that block

**Static Variables**
- There are two points about **Global Variable**. It can be accessible everywhere, and it will remain always in the memory.
- Static Variable will remain always in the memory but not accessible everywhere.
- Static variables are the variables which remains always in the memory. Always in the memory. They are just like a global Variable. Only the difference between global and static variable is global variable can be access in any function, but static variable are accessible only inside the function in which they are declared.
- Think of a static variable imagine that they are global. But their scope visibility is limited to a function.
- Static variables are not available in Java.

**Example of Global, Local & Static Variables:** 
- `global_local_static_variables.cpp`
    ```cpp
    int globalVariable = 25;    // Goes to the Initialized Data Section
    int variable;        // Goes to the Uninitialized Data Section/BSS Section

    void staticFunc() {
        static int num = 10;     // value of num will set to 10 only on first function call
        num++;
        cout << "num: " << num << endl;
    }

    int main() {

        int localVariable = 25;
        {
            int localVariable = 50;
            cout << "localVariable inside block: " << localVariable << endl;    // 50
        }
        cout << "localVariable outside block: " << localVariable << endl;       // 25

        int variable = 5;
        cout << "variable inside main(): " << variable << endl;                 // 5
        cout << "variable outside main(): " << ::variable << endl;              // 0

        // Static variable example
        staticFunc();       // num: 11
        staticFunc();       // num: 12
        staticFunc();       // num: 13
        staticFunc();       // num: 14
        return 0;
    }
    ```

### Recursive Function

- A function calling itself is called as recursion.
- Have a base condition to terminate the recursive calls.
    ```cpp
    // recursive_functions.cpp

    void recursiveFunc1(int num) {
        if (num >= 0) {
            cout << num << " ";
            recursiveFunc1(num - 1);
        }
    }

    void recursiveFunc2(int num) {
        if (num >= 0) {
            recursiveFunc2(num - 1);
            cout << num << " ";
        }
    }

    int main() {
        recursiveFunc1(5);      // 5 4 3 2 1 0
        cout << endl;
        recursiveFunc2(5);      // 0 1 2 3 4 5

        return 0;
    }
    ```

### Function Pointer / Pointer to a Function

- When we declared a pointer to a function it must be inside the brackets otherwise it will not be a pointer to a function. It must be enclosed in a bracket
- Declaration of pointer: `void (*fp)();`
- Initialization of pointer: `fp = functionName`
- Function call: `(*fp)();`
- Example:
    ```cpp
    // function_pointer.cpp

    void display() {
        cout << "Hello" << endl;
    }

    int max(int a, int b) {
        return a > b ? a : b;
    }

    int min(int a, int b) {
        return a < b ? a : b;
    }

    int main() {
        void (*displayPtr)();       // Declaration of pointer
        displayPtr = display;       // Initialization of pointer
        (*displayPtr)();            // Function call

        int (*functionPointer)(int, int);
        functionPointer = max;      // Assigning address of 'max' to the pointer
        cout << "Maximum of 5 and 8 is: " << functionPointer(5, 8) << endl;   // Calling through the pointer

        functionPointer = min;      // Assigning address of 'min' to the pointer
        cout << "Maximum of 5 and 8 is: " << functionPointer(5, 8) << endl;   // Calling through the pointer

        return 0;
    }
    ```
> If a function is not returning any value then its return type should be void.
> 
> Call by value will pass just values of actual parameters, they cannot be modified.
> 
> Which type of functions can take datatype as parameters? - Template