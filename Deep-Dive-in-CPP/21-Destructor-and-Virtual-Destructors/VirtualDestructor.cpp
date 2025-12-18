#include <iostream>
using namespace std;


class Base {
    public:
        Base() {
            cout<<"Base Constructor is called\n";
        }
        virtual ~Base() {
            cout<<"Base Destructor is called\n";
        }
};

class Derived : public Base {
    public:
        Derived() {
            cout<<"Derived Constructor is called\n";
        }
        ~Derived() {
            cout<<"Derived Destructor is called\n";
        }
};

void fun() {
    Derived d;
}

int main()
{
    fun();
    cout<<endl;
    Base *p = new Derived();
    delete p;

    return 0;
}
