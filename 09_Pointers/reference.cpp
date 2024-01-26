#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string food2 = "Burger";
    string &meal = food;
    // &meal = food2;      // error

    cout << "&food = " << &food << endl;
    cout << "&meal = " << &meal << endl;    // &food and &meal is exactly same

    meal = "Cheese";    // this will also update food and both are pointing the same address

    cout << "meal = " << meal << endl;      // Cheese
    cout << "food = " << food << endl;      // Cheese


    // another example:

    int x = 10;
    int &y = x;     // y is a reference to x, it means x and y are 2 names of same variable
    y = x + y;      // y = 10 + 10 = 20. y becomes 20, it means x also becomes 20
    cout << "x = " << x << endl;    // 20

    // another example:

    int var = 50;     // var is a variable
    int* ptrVar = &var;    // ptrVar is a pointer variable, pointing to var
    int* &ref = ptrVar;    // ref is a reference to a pointer variable, means ref is another name of ptrVar
    // ptrVar & ref are 2 names of same pointer

    return 0;
}


/* Output :

&food = 0x61feec
&meal = 0x61feec
meal = Cheese
food = Cheese
x = 20

*/