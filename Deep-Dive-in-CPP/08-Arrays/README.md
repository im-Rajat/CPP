# Section 8: Arrays

## Basic Array Declaration & Initialization
Arrays are collections of items stored at contiguous memory locations.

```cpp
// 1. Standard Declaration
int A[5] = {1, 2, 3, 4, 5};

// 2. Float and Char Arrays
float B[5] = {1.2f, 2.2f, 3.3f, 4.4f};
char C[5] = {'A', 66, 'C', 68}; // 66 is ASCII for 'B', 68 for 'D'

// 3. Partial Initialization
// Remaining elements are automatically set to 0
int d[5] = {2, 4}; // Result: [2, 4, 0, 0, 0]

// 4. Automatic Size Deduction
int e[] = {1, 2, 3, 4}; // Compiler sets size = 4 automatically

// 5. Invalid Declaration
// int a[]; // Error: Size must be known or initialized
```

---

## Iterating Arrays

### 1. Traditional For Loop
```cpp
for (int i = 0; i < 5; i++) {
    cout << A[i] << endl;
}
```

### 2. Range-based For Loop (For Each)
*Syntax introduced in C++11. Reads as "for every element x in collection A".*

```cpp
for (int x : A) {
    cout << x << endl; 
}
```

### 3. Using References (`&`)
By default, the range-based loop creates a **copy** of the element. Use `&` to modify the original array.

```cpp
for (int &x : A) {
    ++x; // This modifies the actual values inside array A
}
```

**Note on `auto`:**
* We can use `auto` instead of `int` if we don't want to specify the type manually.
* Example: `for (auto x : A)`
* Note: `auto` works on collections (vectors, lists, arrays) but does not work on raw pointers in this context.

---

## Nested Loops
Used to iterate over dimensions or create patterns.

```cpp
for(int i = 1; i <= 5; i++)
{
    for(int j = 1; j <= 5; j++)
    {
         cout << "(" << i << ", " << j << ") ";
    }
    cout << endl;
}
```

**Output:**
```text
(1, 1) (1, 2) (1, 3) (1, 4) (1, 5)
(2, 1) (2, 2) (2, 3) (2, 4) (2, 5)
(3, 1) (3, 2) (3, 3) (3, 4) (3, 5)
(4, 1) (4, 2) (4, 3) (4, 4) (4, 5)
(5, 1) (5, 2) (5, 3) (5, 4) (5, 5)
```

---

## Multidimensional Arrays (2D Arrays)

### Conceptual View vs. Reality
Visually, we think of a 2D array as a grid (Rows x Columns).
**Declaration:** `int A[3][4];` (3 Rows, 4 Columns)

| Row/Col | 0 | 1 | 2 | 3 |
| :--- | :--- | :--- | :--- | :--- |
| **0** | `[0][0]` | `[0][1]` | `[0][2]` | `[0][3]` |
| **1** | `[1][0]` | `15` | ... | ... |
| **2** | ... | ... | ... | ... |

**Reality (Memory):**
In memory, it is a **Single Dimension Array** (Row-Major Order). All rows are stored sequentially.
`[Row 0] [Row 1] [Row 2]`

### Initialization
```cpp
// Nested braces (Readable)
int A[2][3] = {
    {2, 5, 9}, 
    {6, 9, 15}
};

// Flat list (Works same as above)
int B[2][3] = {2, 4, 6, 3, 5, 7}; 
```

### Iterating 2D Arrays

**1. Using Nested For Loops**
```cpp
for(int i = 0; i < 2; i++) // Iterate Rows
{
    for(int j = 0; j < 3; j++) // Iterate Columns
    {
         cout << A[i][j] << " ";
    }
    cout << endl;
}
```

**2. Using For-Each (Range-Based)**
*Crucial Note:* When iterating a 2D array with `for-each`, you **must** use a reference (`&`) for the outer loop.
* **Why?** A 2D array is an "array of arrays". Without `&`, the inner array decays into a pointer, and you cannot run a range-based loop on a pointer.

```cpp
// Correct way to iterate 2D array
for (auto &row : A) {      // Access each row by reference
    for (auto col : row) { // Access each element in that row
        cout << col << " ";
    }
    cout << endl;
}
```
