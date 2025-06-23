# Namespace in C++

- A namespace allows us to group related functions, classes, variables, and other declarations under a specific name.
- It is used to organize code and avoid name conflicts, especially in large projects or when integrating multiple libraries.

### Defining a Namespace

- Define a namespace using the `namespace` keyword.
    ```cpp
    namespace MyNamespace {
        int add(int a, int b) {
            return a + b;
        }

        class MyClass {
        public:
            void display() {
                std::cout << "Inside MyNamespace::MyClass" << std::endl;
            }
        };
    }
    ```
- The function add and class MyClass are part of MyNamespace.

### Using a Namespace

1) Fully Qualify Names: Use the namespace name as a prefix:
    ```cpp
    int result = MyNamespace::add(3, 4);
    MyNamespace::MyClass obj;
    obj.display();
    ```
2) using Keyword: Use the using keyword to avoid prefixing each identifier with the namespace:
    ```cpp
    using namespace MyNamespace;
    int result = add(3, 4);  // No need for MyNamespace::
    MyClass obj;
    obj.display();
    ```

3) Selective Use: We can bring specific members of a namespace into scope:
    ```cpp
    using MyNamespace::add;
    int result = add(3, 4);
    ```

### Anonymous Namespaces

- An anonymous namespace is a namespace without a name.
- It is used to limit the visibility of its contents to the file in which it is declared.
    ```cpp
    namespace {
        int secret() {
            return 42;
        }
    }
    ```
- The function `secret` is only accessible within the file where it's defined.
- This is same as making the function static.