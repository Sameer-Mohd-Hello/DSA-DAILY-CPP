#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{

    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertatend(int value)
    {
        Node *newnode = new Node(value);

        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    LinkedList list;
    list.insertatend(10);
    list.insertatend(20);
    list.insertatend(30);
    list.insertatend(40);
    list.insertatend(50);
    list.insertatend(60);
    list.display();
}
