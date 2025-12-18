#include <iostream>
using namespace std;


int main()
{
    int x = 10, y = 0, z;

    try {
        if (y == 0) {
            throw y;
            // without throw it will execute
            // complete try block
        }
        z= x/y;
        cout<<z<<endl;
    }
    catch(int e) {
        cout<<"Division by "<<e<<" not possible\n";
    }

    cout<<"Bye"<<endl;

    return 0;
}
