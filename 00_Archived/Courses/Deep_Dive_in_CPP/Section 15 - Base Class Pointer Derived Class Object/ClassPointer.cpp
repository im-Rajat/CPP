#include <iostream>
using namespace std;


class Base {
    public:
        void func1() {
            cout<<"Base func1 called\n";
        }
};

class Derived : public Base {
    public:
     void func2() {
        cout<<"Derived func2 called\n";
     }
};


int main()
{
    Derived d;
    //d.func1();
    //d.func2();

    Base *ptr = &d;

    ptr->func1();
    //ptr->func2();

    Base b;
    //Derived *ptr2 = &b;

    Base *ptr3 = new Derived;

    Base *ptr4 = new Derived();


    return 0;
}
