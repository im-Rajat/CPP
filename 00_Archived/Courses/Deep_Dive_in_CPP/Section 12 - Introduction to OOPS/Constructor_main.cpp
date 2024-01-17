#include <iostream>
using namespace std;

class Rectangle {

    private :
        int length;
        int breadth;

    public :
        /*Rectangle() {
            length = 1;
            breadth = 1;
        }

        Rectangle(int l, int b) {
            setLength(l);
            setBreadth(b);
        }*/

        Rectangle(int l = 1, int b = 1) {
            setLength(l);
            setBreadth(b);
        }

        Rectangle(Rectangle &r) {
            length = r.length;
            breadth = r.breadth;
        }

        void setLength(int l) {
            if (l > 0) {
                length = l;
            }
            else {
                l = 1;
            }
        }

        void setBreadth(int b) {
            if (b > 0) {
                breadth = b;
            }
            else {
                b = 1;
            }
        }

        int getLength() {
            return length;
        }

        int getBreadth() {
            return breadth;
        }

        int area() {
            return length * breadth;
        }

        int parameter();
        ~Rectangle();
};


int Rectangle::parameter() {
    return 2 * (length + breadth);
}

Rectangle::~Rectangle() {
    cout<<"Rectangle Destroyed\n";
}



int main()
{
    Rectangle r1;
    cout<<r1.area()<<endl;

    Rectangle r2(5, 4);
    cout<<r2.area()<<endl;

    Rectangle r3;
    cout<<r3.area()<<endl;

    Rectangle r4(r2);
    cout<<r2.area()<<endl;
    cout<<r2.parameter()<<endl;

    return 0;
}
