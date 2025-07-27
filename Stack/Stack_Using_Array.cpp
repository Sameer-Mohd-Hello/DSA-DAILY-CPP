#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int capacity;
    int top;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "stack overflow!" << endl;
            return;
        }
        cout << "Element pushed to stack..." << endl;
        top++;
        arr[top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow!" << endl;
            return;
        }
        cout << "Element poped : " << arr[top--] << endl;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack underflow!" << endl;
            return -1;
        }

        return arr[top];
    }

    bool isempty()
    {
        if (top == -1)
            return true;
        return false;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack is : " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack obj(3);
    obj.pop();
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    cout << boolalpha;
    cout << obj.isempty() << endl;
    obj.display();
}
