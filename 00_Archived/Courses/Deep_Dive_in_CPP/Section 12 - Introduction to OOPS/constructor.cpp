#include <iostream>
using namespace std;

class Rectangle {

    private :
        int length;
        int breadth;

    public :
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

        int parameter() {
            return 2 * (length + breadth);
        }
};


int main()
{
    Rectangle r1;
    cout<<r1.area();

    return 0;
}
