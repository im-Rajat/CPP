#include <iostream>
using namespace std;


class Car {
    public :
        virtual void start() = 0;
};

class Innova : public Car {
    public :
        void start() { cout<<"Innova started\n"; }
};

class Swift : public Car {
    public :
        void start() { cout<<"Swift started\n"; }
};

int main()
{
    //Car c;      // error : cannot create abstract class object
    Car *ptr;

    ptr = new Innova();     // output : Innova started
    ptr->start();

    ptr = new Swift();      // output : Swift started
    ptr->start();

    return 0;
}
