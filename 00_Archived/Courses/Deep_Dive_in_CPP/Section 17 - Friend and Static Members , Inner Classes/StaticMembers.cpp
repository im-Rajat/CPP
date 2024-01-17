#include <iostream>
using namespace std;


class Test {
    public:
        int a;
        static int count;

        Test() {
            a = 10;
            count++;
        }

        static int getCount() {
            return count;
        }
};

int Test::count = 0;

int main()
{
    cout<<Test::count<<endl;
    Test t1;
    cout<<t1.count<<endl;
    Test t2;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;

    cout<<Test::getCount()<<endl;
    Test t3;
    cout<<t3.getCount()<<endl;
    Test t4;
    cout<<t4.getCount()<<endl;
    cout<<Test::getCount()<<endl;

    return 0;
}
