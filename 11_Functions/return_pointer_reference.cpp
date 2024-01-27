#include <iostream>
using namespace std;

// Return by Pointer
int* arrPtr(int size) {
    int *ptr = new int[size];

    for (int i = 0; i < size; i++) {
        ptr[i] = i * 10;
    }

    return ptr;
}

// Return by Reference
int& ref(int &a) {
    cout << "a: " << a << endl;     // a: 10
    return a;
}

int main() {
    int *ptr = arrPtr(10);

    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << " ";      // 0 10 20 30 40 50 60 70 80 90
    }
    cout <<endl;

    int x = 10;
    ref(x) = 25;
    cout << "x: " << x << endl;     // x: 25

    return 0;
}