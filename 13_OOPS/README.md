# Introduction to OOPS

- OOP stands for Object-Oriented Programming.
- Object-oriented programming (OOP) is a programming paradigm that uses objects and classes for organizing code. 
- Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.
- Object-oriented programming has several advantages over procedural programming:
    - OOP provides a clear structure for the programs
    - OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
    - OOP makes it possible to create full reusable applications with less code and shorter development time.
    - It allows developers to work on large projects by breaking them down into smaller, manageable parts

### Principles of Object Orientation

- Abstraction
- Encapsulation/Data Hiding
- Inheritance
- Polymorphism

### Classes and Objects

- Classes and objects are the two main aspects of object-oriented programming.
- **Class:** A class is a user-defined data type that encapsulates data and functions into a single unit. It serves as a blueprint for creating objects.
- **Object:** An object is an instance of a class. It represents a real-world entity and encapsulates data and functions.
- **Class** is a template for objects, and an **object** is an instance of a class.
- Example:
    - A Fruit is a class and Apple, Banana, Mango are objects.
    - A Car is a class and Volvo, Audi, Tata are objects.
- When the individual objects are created, they inherit all the variables and functions from the class.
- Our class will contain data and functions. So data is called as property and function is called as behavior.
- Functions will not occupy any memory space, only data members occupy.
- Whatever we write inside the class by default it becomes private.
- Dot operators is used for accessing members of an object, we can access data members as well our member functions.

#### Create a Class:
- The `class` keyword is used to create a class.
- The `public, private or protected` keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible or not from outside the class.
- Inside the class, we define attributes (data members) and methods (functions) which represent actions that can be performed by objects belonging to this class.
- At last, end the class definition with a semicolon `;`.
  
#### Class Methods:
- Methods are functions that belongs to the class.
-  We access methods just like you access attributes; by creating an object of the class and using the dot syntax (`.`):
- There are two ways to define functions that belongs to a class:
    - **Inside class definition**
    - **Outside class definition:** We have to declare it inside the class and then define it outside of the class. This is done by specifying the name of the class, followed the scope resolution `::` operator, followed by the name of the function:
        - example: float Rectangle::perimeter() 

```cpp
class Rectangle {       // Class Name is Rectangle
public:                 // Access specifier
    float length;       // Attribute (float variable)
    float breadth;

    float area() {      // Method/function defined inside the class
        return length * breadth;
    };

    float perimeter();
};

float Rectangle::perimeter() {      // Method/function definition outside the class
    return 2 * (length + breadth);
}

int main() {
    Rectangle r1;       // Create an object of Rectangle
    r1.length = 5;      // Access attributes and set values
    r1.breadth = 10;

    // Calling Class functions upon object
    cout << "Area: " << r1.area() << endl;              // 50
    cout <<"Perimeter: " << r1.perimeter() << endl;     // 30

    return 0;
}
```

### Pointer to an Object in Heap

- Example:
    ```cpp
    // Pointer to an Object in Heap
    Rectangle r2;
    Rectangle *ptr;
    ptr = &r1;
    ptr->length = 2;
    ptr->breadth = 5;
    cout << "Area: " << ptr->area() << endl;            // 10
    cout <<"Perimeter: " << ptr->perimeter() << endl;   // 14
    ```
- We are using pointer in above example but memory is still in stack not in heap.
- The dot operator `.` is used to access members (attributes or methods) of an object directly when you have an object instance.
- The arrow operator `->` is used for accessing the members of an object using a pointer on an object. It is a shorthand notation for dereferencing the pointer and accessing the members.
- Example:
    ```cpp
    // Pointer to an Object (Memory is still in Stack)
    Rectangle r2;
    Rectangle *ptr;
    ptr = &r1;
    ptr->length = 2;
    ptr->breadth = 5;
    cout << "Area: " << ptr->area() << endl;            // 10
    cout <<"Perimeter: " << ptr->perimeter() << endl;   // 14

    // Create object in Heap
    // Rectangle *ptr2;
    // ptr2 = new Rectangle;
    // Define in 1 line, both are same
    Rectangle *ptr2 = new Rectangle;    // Object created, but constructor not explicitly called 

    ptr2->length = 8;
    ptr2->breadth = 4;
    cout << "Area: " << ptr2->area() << endl;            // 32
    cout <<"Perimeter: " << ptr2->perimeter() << endl;   // 24

    Rectangle *ptr3 = new Rectangle();    // Object created, default constructor called explicitly
    ptr3->length = 9;
    ptr3->breadth = 11;
    cout << "Area: " << ptr3->area() << endl;            // 99
    cout <<"Perimeter: " << ptr3->perimeter() << endl;   // 40
    ```
- There is no name to the object but pointer is pointing onto that one.
- Create object in Stack : `Rectangle r`;
- Create object in Heap : `Rectangle *p = new Rectangle()`;
- `Rectangle *ptr2 = new Rectangle` vs `Rectangle *ptr3 = new Rectangle`:
    - If our class has a user-defined default constructor that initializes member variables or performs other necessary setup, using `new Rectangle();` ensures that the constructor is explicitly called during the object creation.
    - If our class has no user-defined default constructor, both forms are roughly equivalent.
    - It's a good practice to explicitly call the constructor for clarity and consistency.
- In Java we cannot create an object in stack, objects always are created in a heap only using new but C++ gives us an option whether we want it in stack or whether we want it in heap.