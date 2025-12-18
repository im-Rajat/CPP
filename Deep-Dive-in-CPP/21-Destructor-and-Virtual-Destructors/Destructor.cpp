#include <iostream>
using namespace std;


class Demo {
    public:
        Demo() {
            cout<<"Constructor is called\n";
        }
        ~Demo() {
            cout<<"Destructor is called\n";
        }
};

void fun() {
    Demo d;
}

int main()
{
    fun();

    Demo *p = new Demo();
    cout<<"Destructor still not called\n";
    cout<<"Need to delete the memory\n";

    delete p;
    cout<<"Now destructor was called\n";

    return 0;
}
