# Structures (struct)

- Structures (also called structs) are a way to group several related variables into one place.
- Each variable in the structure is known as a member of the structure.
- Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
- In C language we can only have data members in structures, we cannot have functions inside a structure.
- In c++, structure can have data members as well functions inside the structure.
- In c++, structure is much similar to a class (which will we study later).
- To create a structure, use the `struct` keyword and declare each of its members inside curly braces
- To access members of a structure, use the dot syntax (`.`):
    ```cpp
    // structures.cpp

    // Define a structure named Rectangle (Named Structures)
    struct Rectangle {

        // Data members
        int length;
        int width;

        // Member function to calculate the area of the rectangle
        int calculateArea() {
            return length * width;
        }
    };

    int main() {

        // Create an instance of the Rectangle structure
        Rectangle r1;

        // Assign values to the members of the structure
        r1.length = 5;
        r1.width = 10;

        // Access and print the area using the member function
        std::cout << "Rectangle area: " << r1.calculateArea() << endl;  // 50

        return 0;
    }
    ```
- In modern C++, you might also consider using classes instead of structures for more complex scenarios. Classes allow you to encapsulate data and behavior in a more object-oriented way.
- Create a **anonymous structure**. In this way it makes hard to reuse the struct definition elsewhere in the code because it doesn't have a name.
    ```cpp
    struct {
        int myNum;
        string myString;
    } myStructure;  // myStructure is instance not name of structure

    // One Structure in Multiple Variables
    struct {
    int myNum;
    string myString;
    } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
    ```
- In structure, by default all data members and functions are public, they are accessible from outside
- In class, by default all data members and functions are private. To make anything public, we have to write public.
