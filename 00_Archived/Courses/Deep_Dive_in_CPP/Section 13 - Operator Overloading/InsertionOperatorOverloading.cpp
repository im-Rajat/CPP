#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int img;

    public:
        Complex(int real = 0, int img = 0) {
            this->real = real;
            this->img = img;
        }

        void display() {
            cout<<real<<" + i"<<img<<endl;
        }

        friend ostream & operator<<(ostream &out, Complex &c);

};

ostream & operator<<(ostream &out, Complex &c) {
    out<<c.real<<" + i"<<c.img<<endl;
    return out;
}


int main()
{
    Complex c1(5, 9);
    c1.display();
    operator<<(cout, c1);
    cout<<c1;


    return 0;
}
