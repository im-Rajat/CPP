#include <iostream>
#include <list>
using namespace std;


int main()
{
    list<int> v = {2, 4, 5, 6, 8};
    v.push_back(10);
    v.push_back(30);

    cout<<"Using Iterator: ";
    list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++) {
        cout<<++*itr<<" ";
    }

    v.pop_back();

    cout<<"\nUsing For Each Loop: ";
    for (int i : v) {
        cout<<i<<" ";
    }

    return 0;
}
