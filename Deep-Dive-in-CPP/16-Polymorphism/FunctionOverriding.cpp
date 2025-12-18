#include <iostream>
using namespace std;


class Base {
    public:
        void display() {
            cout<<"Display of Base Class\n";
        }

        void print() {
            cout<<"Print of Base Class\n";
        }
};

class Derived : public Base {
    public:
        void display() {
            cout<<"Display of Derived Class\n";
        }

        void print(int x) {
            cout<<"Print of Derived Class\n";
        }
};


int main()
{
    Base b;
    b.display();
    b.print();

    Derived d;
    d.display();
    //d.print();
    d.print(5);
    d.Base::print();
    d.Derived::print(5);


    return 0;
}
