// Program to create a 2D array

#include <iostream>
using namespace std;

int main()
{
    // We can define 2D array like this also :
    int a[][3] = { {1, 2, 3}, {2, 3, 5}, {5, 6, 7}};
    
    for (auto &i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/* Output :

1 2 3 
2 3 5
5 6 7

*/