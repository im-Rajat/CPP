#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<sizeof(c)<<endl;  // 1
    cout<<CHAR_MIN<<" "<<CHAR_MAX<<endl; // -127 -> 128

    unsigned char uc;
    cout<<sizeof(uc)<<endl;  // 1
    cout<<UCHAR_MAX<<endl; // 0 -> 255
    // UCHAR_MIN not available but it's 0

    int i;
    cout<<sizeof(i)<<endl;  // 4
    cout<<INT_MIN<<" "<<INT_MAX<<endl;

    float f;
    cout<<sizeof(f)<<endl;  // 4

    long l;
    cout<<sizeof(l)<<endl;  // 4

    double d;
    cout<<sizeof(d)<<endl;  // 8

    long double ld;
    cout<<sizeof(ld)<<endl; // 16

    return 0;
}
