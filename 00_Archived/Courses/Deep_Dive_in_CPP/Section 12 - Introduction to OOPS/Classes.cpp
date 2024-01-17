#include <iostream>
using namespace std;

class Rectangle {
    public :
        int length;
        int breadth;

        int area() {
            return length * breadth;
        }

        int parameter() {
            return 2 * (length + breadth);
        }
};


int main()
{
    Rectangle r1, r2, *ptr1, *ptr2;

    r1.length = 4;
    r1.breadth = 5;
    cout<<r1.area()<<endl;

    ptr1 = &r2;
    ptr1->length = 2;
    ptr1->breadth = 20;
    cout<<ptr1->area()<<endl;

    ptr2 = new Rectangle();
    ptr2->length = 10;
    ptr2->breadth = 20;

    cout<<ptr2->area()<<endl;


    return 0;
}
