#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

Node *front = nullptr;
Node *back = nullptr;
int Size = 0;

void Enque(int val)
{
    Node *newNode = new Node(val);
    Size++;
    if (front == nullptr)
    {
        back = front = newNode;
        return;
    }

    back->next = newNode;
    back = newNode;
}

void Deque()
{
    if (front == nullptr)
    {
        cout << "Que is empty! cannot Deque\n";
        return;
    }

    Node *temp = front;
    front = front->next;
    cout << temp->data << " <-dequed..\n";
    delete temp;
    Size--;

    if (front == nullptr)
    {
        back = nullptr;
    }
}

void Display()
{
    if (front == nullptr)
    {
        cout << "Que is empty cannot display!\n";
        return;
    }

    cout << "Que is : \n";
    Node *temp = front;
    for (int i = 0; i < Size; i++)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Front()
{
    if (Size == 0)
    {
        cout << "Front is NULL!\n";
        return;
    }

    cout << "Front -> " << front->data << endl;
}

void Back()
{
    if (Size == 0)
    {
        cout << "Back is NULL!\n";
        return;
    }

    cout << "Back -> " << back->data << endl;
}

bool isEmpty()
{
    cout << "Que isEmpty : ";
    return Size == 0;
}

int main()
{
    cout << boolalpha;
    Enque(10);
    Enque(20);
    Enque(30);
    Enque(40);
    Enque(50);
    cout << isEmpty() << endl;
    Display();
    Deque();
    Front();
    Back();
}
