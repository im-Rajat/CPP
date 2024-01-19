// Program to understand Postfix and Prefix increment

#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int resultX = x++;  // Postfix increment
    cout << x << ", " << resultX << endl;    // Now, x is 3, and resultX is 2

    int y = 5;
    int resultY = ++y;  // Prefix increment
    cout << y << ", " << resultY << endl;    // Now, x is 6, and resultY is 6

    return 0;
}


/* Output :

3, 2
6, 6

*/