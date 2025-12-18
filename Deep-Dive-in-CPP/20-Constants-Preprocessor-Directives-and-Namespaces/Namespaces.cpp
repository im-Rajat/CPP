#include <iostream>
using namespace std;


namespace First {
    void fun() {
        cout<<"First\n";
    }
}

namespace Second {
    void fun() {
        cout<<"Second\n";
    }
}

using namespace First;
int main()
{
    fun();
    Second::fun();
    std::cout<<"Bye\n";
    return 0;
}
