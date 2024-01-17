#include <iostream>
using namespace std;


class Base {
    public:
        void fun() {
            cout<<"Fun of Base\n";
        }
        virtual void dance() {
            cout<<"Dance of Base\n";
        }
};

class Derived : public Base {
    public:
        void fun() {
            cout<<"Fun of Derived\n";
        }
        void dance() {
            cout<<"Dance of Derived\n";
        }
};

int main()
{
    Base *p = new Derived();
    p->fun();       // print Fun of Base
    p->dance();     // print Dance of Derived

    return 0;
}
