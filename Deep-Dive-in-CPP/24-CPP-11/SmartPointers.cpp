#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout<<ptr->area()<<endl;      // 50

    // unique_ptr<Rectangle> ptr2 = ptr;    // error
    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);

    cout<<ptr2->area()<<endl;      // 50
    // cout<<ptr->area()<<endl;    // program crash
    // because ptr is not pointing on any valid object.


    shared_ptr<Rectangle> ptr3(new Rectangle(100, 2));
    cout<<ptr3->area()<<endl;      // 200

    shared_ptr<Rectangle> ptr4;
    ptr4 = ptr3;

    cout<<ptr4->area()<<endl;      // 200
    cout<<ptr3->area()<<endl;    // 200
    cout<<ptr3.use_count()<<endl;    // 2 is reference count


    return 0;
}
