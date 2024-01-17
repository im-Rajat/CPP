#include <iostream>
using namespace std;

template<class T>

class Stack {
    private:
        T *s;
        int top;
        int size;

    public:
        Stack(int sz) {
            size = sz;
            top = -1;
            s = new T[size];
        }

        void push(T x);
        T pop();
};

template<class T>
void Stack<T>::push(T x) {
    if (top == size - 1) {
        cout<<"Stack is Full\n";
    }
    else {
        top++;
        s[top] = x;
    }
}

template<class T>
T Stack<T>::pop() {
    T x;
    if (top == -1) {
        cout<<"Stack is Empty\n";
    }
    else {
        x = s[top];
        top--;
    }

    return x;
}

int main()
{
    //Stack s(10);
    //s.push(10);
    //s.push(5);
    //s.pop();

    Stack<int> s(10);
    s.push(5);
    s.push(8);
    s.pop();
    s.pop();
    s.pop();

    Stack<float> s2(2);
    s2.push(5.0f);
    s2.push(8.1f);
    s2.push(100.8f);

    return 0;
}
