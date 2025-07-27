#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = nullptr;

void push(int value)
{
    Node *newNode = new Node{value, top};
    top = newNode;
}

void pop()
{
    if (top == nullptr)
    {
        cout << "stack underflow!" << endl;
        return;
    }
    cout << "Element poped : " << top->data << endl;
    Node *temp = top;
    top = top->next;
    delete temp;
}

void peek()
{
    if (top == nullptr)
    {
        cout << "stack underflow!" << endl;
        return;
    }
    cout << "Stack top is : " << top->data << endl;
}

bool isempty()
{
    return top == nullptr;
}

void display()
{
    if (top == nullptr)
    {
        cout << "stack is empty cannot display!" << endl;
        return;
    }
    cout << "Stack is : " << endl;

    Node *temp = top;

    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    peek();
    cout << boolalpha;
    cout << isempty();
}
