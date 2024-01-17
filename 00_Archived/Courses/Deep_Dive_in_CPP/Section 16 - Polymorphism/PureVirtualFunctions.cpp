#include <iostream>
using namespace std;


class Car {
    public :
        void start() { cout<<"Car started\n"; }
        virtual void stop() { cout<<"Car stopped\n"; }
};

class Innova : public Car {
    public :
        void start() { cout<<"Innova started\n"; }
        void stop() { cout<<"Innova stopped\n"; }
};

class Swift : public Car {
    public :
        void start() { cout<<"Swift started\n"; }
        void stop() { cout<<"Swift stopped\n"; }
};

int main()
{
    Car *ptr;

    ptr = new Car();
    ptr->start();           // output : Car started

    ptr = new Innova();
    ptr->start();           // output : Car started
    ptr->stop();           // output : Innova started

    ptr = new Swift();
    ptr->start();           // output : Car started
    ptr->stop();            // output : Swift stopped

    return 0;
}
