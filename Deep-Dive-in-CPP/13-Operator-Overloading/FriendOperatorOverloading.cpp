#include <iostream>
using namespace std;

class Complex {
    private :
        int real;
        int img;

    public :

        Complex(int real = 0, int img = 0) {
            this->real = real;
            this->img = img;
        }

        void display() {
            cout<<real<<" + i"<<img<<endl;
        }

        Complex add(Complex c) {
            Complex temp;

            temp.real = this->real + c.real;
            temp.img = this->img + c.img;

            return temp;
        }

        friend Complex operator+(Complex c1, Complex c2);

};


Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}


int main()
{
    Complex c1(2, 4);
    Complex c2(8, 6);
    //c1.display();

    Complex c3;
    //c3=operator+(c1,c2);
    c3 = c1 + c2;

    c3.display();

    return 0;
}
