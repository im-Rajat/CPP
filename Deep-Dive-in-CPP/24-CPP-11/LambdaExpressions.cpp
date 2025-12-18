#include <iostream>
using namespace std;

template<typename T>
void fun(T x) {
    x();
}

int main()
{
    [] () { cout<<"Hello"<<endl; } ();      // Hello
    [] (int x, int y) { cout<<"Sum is: "<<x+y<<endl; } (10, 30); // Sum is: 40
    cout << ( [] (int x, int y) { return x + y; } (20, 80) ) <<endl;;   // 100

    int a = [] (int x, int y) -> int { return x + y; } (20, 80);
    cout<<a<<endl;      // 100;

    int b = 10;
    [b] () { cout<<b<<endl; } ();   // 10
    auto f = [b] () { cout<<b<<endl; };
    f();        // 10

    int c = 55;
    auto g = [&c] () { cout<<c<<endl; };
    g();        // 55
    c++;
    g();        // 56

    int d = 20;
    auto h = [&d] () { cout<<++d<<endl; };
    h();        // 21

    fun(h);
    fun(h);

    return 0;
}
