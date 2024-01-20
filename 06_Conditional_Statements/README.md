# Conditional Statements

- C++ has the following conditional statements:
    - `if, else, else if, switch`
- We use **Relational operators** for conditions :
    - `<, <=, >, >=, ==, !=`
- We can have multiple conditions using **Logical operators** :
    - `&&, ||` AND, OR

### if Statement

- The `if` statement is used to execute a block of code only if the specified condition is true.
    ```cpp
    if (condition ) {
        // Code to be executed if the condition is true
    }
    ```

### if-else Statement

- The `if-else` statement allows you to specify two blocks of code.
- One to be executed if the condition is true and another to be executed if the condition is false.
    ```cpp
    if (condition) {
        // Code to be executed if the condition is true
    } else {
        // Code to be executed if the condition is false
    }
    ```

### if-else if-else Statement

- The `if-else if-else`` statement allows you to check multiple conditions.
- And execute the corresponding block of code for the first true condition.
    ```cpp
    if (condition1 && condition2) {
        // Code to be executed if both condition1 and condition2 are true
    } else if (condition1 || condition2) {
        // Code to be executed if either condition1 or condition1 is true
    } else {
        // Code to be executed if none of the conditions is true
    }
    ```

### Simple Example of Conditional Statement
```cpp
// conditional_statements.cpp

int num;
cout << "Enter a Number : ";
cin >> num;

if (num > 0) {
    cout << "Number is positive." << endl;
} else if (num < 0) {
    cout << "Number is negative." << endl;
} else {
    cout << "Number is zero." << endl;
}
```

### Short Hand If...Else (Ternary Operator)

- Used to replace multiple lines of code with a single line.
- It is often used to replace simple if else statements
- Syntax : `variable = (condition) ? expressionTrue : expressionFalse;`
    ```cpp
    int marks = 45;
    string result = (marks >= 33) ? "passed" : "failed";
    ```

### Dynamic Declaration

- If a variable is declared in a block, it's memory will be deleted after the program come out from the block.
- It's memory limited to that block only.
    ```cpp
    if (condition) {
        int m;
    }

    if (int c = a + b; c > 10) {
        // execution
    }
    ```

### Switch Statements

- Switch statement is another way to handle multiple cases or conditions.
- Useful when we have a variable that can take on different values, and we want to perform different actions based on the value of that variable.
    ```cpp
    switch (expression) {
        case value1:
            // Code to be executed if expression is equal to value1
            break;
        case value2:
            // Code to be executed if expression is equal to value2
            break;
        // ... more cases ...
        default:
            // Code to be executed if none of the cases match
    }
    ```
- The `break` statement is used to exit the switch statement after a case is matched.
- If no match is found, the code under the `default` label (if present) is executed.
- Only **integral type data** is allowed in case statement. `char` and `int` are integral type data.
- **Fall-thru** means executing next case also. (Happens when there is no `break` after case).

    ```cpp
    // switch_statement.cpp

    char grade;

    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!\n";
            break;
        case 'B':
            cout << "Good job!\n";
            break;
        case 'C':
            cout << "Satisfactory.\n";
            break;
        case 'D':
            cout << "Needs improvement.\n";
            break;
        case 'F':
            cout << "Fail.\n";
            break;
        default:
            cout << "Invalid grade entered.\n";
    }
    ```

### Short-Circuiting

- Behavior of logical operators (like `&&` and `||`) where the evaluation of the second operand is skipped if the result can be determined by the value of the first operand alone.
- This can be especially useful in conditional statements.

    #### Logical AND (&&) :
    - If the left operand of `&&` is **false**, the right operand is not evaluated because the overall result will be false regardless of the value of the right operand.
        ```cpp
        if (num > 0 && num < 10) {
            // In the first if statement, if num is not greater than 0, the right operand (num < 10) will not be evaluated due to short-circuiting.
        }
        ```

    #### Logical OR (||) :
    - If the left operand of `||` is **true**, the right operand is not evaluated because the overall result will be true regardless of the value of the right operand.
        ```cpp
        if (num > 0 || num < 10) {
            // In the second if statement, if num is greater than 0, the right operand (num > 10) will not be evaluated due to short-circuiting.
        }
        ```