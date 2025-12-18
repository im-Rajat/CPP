#include <iostream>
#include <map>
using namespace std;


int main()
{
    map<int, string> m;

    m.insert(pair<int, string>(1, "Ravi"));
    m.insert(pair<int, string>(2, "John"));
    m.insert(pair<int, string>(3, "Rock"));

    map<int, string>::iterator itr;

    for (itr = m.begin(); itr != m.end(); itr++) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    map<int, string>::iterator itr2;
    itr2 = m.find(3);
    cout<<"Value found is: "<<itr2->first<<" "<<itr2->second<<endl;

    cout<<m[2]<<endl;



    return 0;
}
