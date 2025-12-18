#include <iostream>
using namespace std;

class Complex {
    public :
        int real;
        int img;

        Complex(int real = 0, int img = 0) {
            this->real = real;
            this->img = img;
        }

        Complex add(Complex c) {
            Complex temp;

            temp.real = this->real + c.real;
            temp.img = this->img + c.img;

            return temp;
        }

        Complex operator+(Complex c) {
            Complex temp;

            temp.real = this->real + c.real;
            temp.img = this->img + c.img;

            return temp;
        }
};


int main()
{
    Complex c1(2, 4);
    Complex c2(8, 6);

    Complex c3;
    c3 = c1.add(c2);

    cout<<c3.real<<" + i"<<c3.img<<endl;

    Complex c4;
    c4 = c1.operator+(c2);

    cout<<c4.real<<" + i"<<c4.img<<endl;

    Complex c5;
    c5 = c1 + c2;

    cout<<c5.real<<" + i"<<c5.img<<endl;

    return 0;
}
