# Section 19: Template Functions and Classes

## Templates
* **Definition:** Templates are used for generic programming.
* **Concept:** Generalization is based on the data type. This allows writing a single function or class to work with different data types without rewriting code.

### 1. Function Templates
We can define a generic function using the `template` keyword.

```cpp
template <class T>
T maximum(T x, T y) {
    return x > y ? x : y;
}

// Usage examples:
// maximum(10, 15);      // T becomes int
// maximum(12.5, 9.5);   // T becomes double
```

---

### 2. Multiple Data Types

We are not limited to a single generic type; we can use multiple template parameters.

```cpp
template <class T, class R>
void add(T x, R y) {
    std::cout << x + y;
}

// Usage example:
// add(10, 12.9); // T is int, R is double
```

---

## Template Classes

Templates are highly effective for creating generic data structures (like Stacks, Queues, etc.).

### Class Definition Example: Stack

Below is a generic `Stack` class where the array type `T` is defined by the template parameter.

```cpp
template <class T>
class Stack {
private:
    T s[10];
    int top;
public:
    void push(T x);
    T pop();
};
```

### Implementing Class Functions Outside the Class

When defining member functions outside the class definition, specific syntax rules must be followed:

1. **Push Function:**
```cpp
template <class T>
void Stack<T>::push(T x) {
    // Implementation logic here
}
```


2. **Pop Function:**
```cpp
template <class T>
T Stack<T>::pop() {
    // Implementation logic here
}
```



---

## Key Rules and Implementation Details

* **Mandatory Template Declaration:** For generic classes, we must write the template prefix. When implementing functions outside the class using scope resolution (`::`), we must explicitly use the template syntax.
* **Object Creation:** When creating an object of a template class, the data type must be specified explicitly:
* `Stack<int> s;`
* `Stack<float> s2;`


* **Syntax for Function Bodies:** Whenever a new function body starts (outside the class), we must mention the template declaration again:
* `template <class T>`


* **Scope Resolution Syntax:** Whenever we use the class name to qualify a function, we must append `<T>`:
* `void Stack<T>::push(T x) { ... }`


* **Keywords:** Both `class` and `typename` keywords can be used interchangeably in the template declaration (e.g., `template <typename T>`).
* **Scope of Parameters:** The validity of template parameters (like `T`) is strictly inside that specific block (function or class) only.
* **Significance:** Templates are a very powerful feature, serving as the foundation for the **Collection Framework** (such as the Standard Template Library in C++).

> **Template Parameter:** It allows passing a "data type" as an argument to a function or class.
