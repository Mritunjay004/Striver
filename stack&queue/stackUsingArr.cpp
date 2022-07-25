#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int size;
    int top;
    int *arr;

public:
    Stack()
    {
        size = 100;
        top = -1;
        arr = new int[size];
    }

    void push(int x)
    {
        arr[++top] = x;
    }
    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    cout << "The element deleted is " << s.pop() << endl;
    return 0;
}
