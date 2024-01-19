# Operators

- Operators are used to perform operations on variables and values.
- We use `+` operator to add together two values : `int x = 100 + 50;`
- C++ divides the operators into the 5 groups :

### Arithmetic operators

- Used to perform common mathematical operations.
- `+, -, *, /, %, ++, --`
- Addition, Subtraction, Multiplication, Division, Modulus, Increment, Decrement
  
    #### Increment/Decrement Operator :
    - The increment operator adds 1 to the current value of the variable.
    - The decrement operator subtract 1 to the current value of the variable.
    - It can be used in both postfix and prefix forms.
    
    #### Postfix (variable++) & Prefix (++variable) increment :
    ```cpp
    int x = 2;
    int resultX = x++;  // Postfix increment
    cout << x << ", " << resultX << endl;    // Now, x is 3, and resultX is 2

    int y = 5;
    int resultY = ++y;  // Prefix increment
    cout << y << ", " << resultY << endl;    // Now, x is 6, and resultY is 6
    ```

### Assignment operators

- Used to assign values to variables.
- `=, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=`

### Comparison operators

- Used to compare variables.
- The return value of a comparison is either 1 or 0, which means true (1) or false (0).
- These values are known as Boolean values.
- `==, !=, >, <, >=, <=`
- Equal to, Not equal, Greater than, Less than, Greater than or equal to, Less than or equal to

### Logical operators

-  Used to perform logical operations on boolean values.
-  The result of a logical operation is a boolean value, which can be either true or false. 
-  `&&` is Logical and. Returns true if both statements are true.
    -  `x < 5 &&  x < 10`
- `||` is Logical or. Returns true if one of the statements is true.
    - `x < 5 || x < 4`
- ! is Logical not. Reverse the result, returns false if the result is true.
    - `!(x < 5 && x < 10)`
- These logical operators can be combined to create more complex logical expressions.

### Bitwise operators



### Operator Precedence

