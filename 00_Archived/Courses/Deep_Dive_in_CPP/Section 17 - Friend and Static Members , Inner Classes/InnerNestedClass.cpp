#include <iostream>
using namespace std;


class Outer {
    public:
        void Display() {
            cout<<"Display of Outer\n";
        }
        void fun() {
            i.Display();
        }

        class Inner {
            public:
                void Display() {
                    cout<<"Display of Inner\n";
                }
        };

        Inner i;

};

int main()
{
    Outer o;
    o.Display();
    o.fun();

    Outer::Inner i;
    i.Display();
    return 0;
}
