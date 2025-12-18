#include <iostream>
#include <stdarg.h>
//#include <cstdarg>
using namespace std;

int sum(int n, ... ) {
    va_list list;
    va_start(list, n);

    int x;
    int s = 0;
    for (int i = 0; i < n; i++) {
        x = va_arg(list, int);
        s = s + x;
    }

    return s;
}

int main()
{
    int s = sum(4, 1, 2, 3, 4);
    cout<<s<<endl;

    s = sum(7, 10, 10, 20, 20, 30, 40, 50);
    cout<<s<<endl;

    return 0;
}
