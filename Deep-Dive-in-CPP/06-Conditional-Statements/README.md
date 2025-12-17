# Section 6: Conditional Statements

## Relational Operators
Relational operators compare two values and return a boolean result: `true` (1) or `false` (0).

**Example Variables:**
* `a = 10`
* `b = 15`

| Operator | Symbol | Example Expression | Result (Boolean) | Result (Integer) |
| :--- | :---: | :--- | :---: | :---: |
| Less than | `<` | `a < b` | `true` | `1` |
| Less than or equal | `<=` | `a <= b` | `true` | `1` |
| Greater than | `>` | `a > b` | `false` | `0` |
| Greater than or equal | `>=` | `a >= b` | `false` | `0` |
| Equal to | `==` | `a == b` | `false` | `0` |
| Not equal to | `!=` | `a != b` | `true` | `1` |

---

## Logical Operators
Used to combine conditional statements.

| Operator Name | Symbol | Description |
| :--- | :---: | :--- |
| **AND** | `&&` | Returns true if **both** statements are true. |
| **OR** | `||` | Returns true if **one** of the statements is true. |
| **NOT** | `!` | Reverses the result; returns false if the result is true. |

---

## Conditional Structures

### 1. If-Else Condition
Checks a condition; executes the `if` block if true, otherwise executes the `else` block.

```cpp
// Check if age is NOT between 12 and 50
if(age < 12 || age > 50)
{
    cout << "Eligible";
}
else
{
    cout << "Not Eligible";
}
```

### 2. If, Else-If, Else
Used to check multiple conditions in sequence. Example: Finding the maximum of three numbers (a, b, c).

```cpp
if(a > b && a > c)
    cout << a << endl;
else if(b > c)
    cout << b << endl;
else
    cout << c << endl;
```

---

## Short Circuit Evaluation
In logical operations (`&&`, `||`), if the result is determined by the first operand, the second operand is **not evaluated** (skipped).

### Case 1: AND (`&&`) Logic
* **Rule:** If the first condition is **False**, the whole expression is False. The second condition is ignored.
* **Visual:** `if ( False && X )` $\rightarrow$ Result is False (X is not checked).

**Example:** `if ( a > b && a > c )`
* If `a=3, b=5`: `a > b` is **False**.
* The compiler **stops** here. `a > c` is never executed.

### Case 2: OR (`||`) Logic
* **Rule:** If the first condition is **True**, the whole expression is True. The second condition is ignored.
* **Visual:** `if ( True || X )` $\rightarrow$ Result is True (X is not checked).

**Example:** `if ( a > b || a > c )`
* If `a=5, b=2`: `a > b` is **True**.
* The compiler **stops** here. `a > c` is never executed.

---

## Dynamic Declaration
If a variable is declared inside a specific block (like an `if` statement), its memory is allocated only for that scope and is deleted once the program exits that block. The scope is limited to that block only.

**1. Scope within a block:**
```cpp
if (...)
{
    int m; // 'm' exists only inside these curly braces
}
// 'm' cannot be accessed here; memory is released.
```

**2. Declaration within condition (C++17 feature):**
```cpp
// Initialize 'c', then check the condition
if(int c = a + b; c > 10)
{
    // 'c' is valid here
}
```

---

## Switch Case
A control statement that allows a variable to be tested for equality against a list of values (cases).

```cpp
int x = 2;
switch(x)
{
    case 1: 
        cout << "One";
        break;
    case 2: 
        cout << "Two";
        break;
    case 3: 
        cout << "Three";
        break;
    default: 
        cout << "Invalid number";
}
```

### Important Notes on Switch:
* **Fall-thru:** If the `break` keyword is omitted, execution continues ("falls through") to the next case automatically.
* **Integral Types Only:** The `switch` expression must result in an integral type data.
    * Allowed: `int`, `char`, `long`, `enum`.
    * **Not** Allowed: `float`, `string`.
