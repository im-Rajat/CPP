# Type Conversion in C++

- Converting one data type into another.
- Can be implicitly (automatic conversion by the compiler) or explicitly (conversion specified by the programmer).

## Types of Type Conversions

### Implicit Type Conversion (Type Promotion)

- It is performed automatically by the compiler.
- Also called type coercion.
- Generally involves promoting smaller types to larger types to prevent data loss.

    ```cpp
    int a = 10;
    double b = a;  // 'a' (int) is implicitly converted to double
    std::cout << b;  // Output: 10.0
    ```

- All the data types of the variables are upgraded to the data type of the variable with largest data type.
- `bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double`

### Explicit Type Conversion (Type Casting)

- When the programmer explicitly specifies the type conversion.

#### Converting by assignment / C-Style Cast
- This is done by explicitly defining the required type in front of the expression in parenthesis.
- This can be also considered as forceful casting
- Syntax: `(type) expression`
    ```cpp
    double x = 1.2;
    int sum = (int)x + 1;  // `a` is explicitly converted to `float`
    ```

#### Conversion using Cast operator / C++ Cast Operators
- A Cast operator is an unary operator which forces one data type to be converted into another data type.

1) `static_cast`: For well-defined and non-polymorphic type conversions (without runtime checks).
    ```cpp
    int a = 10;
    float b = static_cast<float>(a);
    ```

2) `dynamic_cast`: For safe casting of pointers or references in polymorphic inheritance hierarchies. Only works with polymorphic classes (classes with virtual functions).

    ```cpp
    class Base { virtual void func() {} };
    class Derived : public Base {};
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Downcasting
    ```

3) `const_cast`: For adding or removing const or volatile qualifiers.
    ```cpp
    const int a = 10;
    int* b = const_cast<int*>(&a);
    ```

4) `reinterpret_cast`: For low-level, bitwise reinterpretation of data types.
    ```cpp
    int a = 65;
    char* b = reinterpret_cast<char*>(&a);  // Interpret `int` as `char*`
    ```