#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *left;

    Node(int value)
    {
        data = value;
        next = NULL;
        left = NULL;
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
        newnode->left = temp;
    }

    void insertatbegining(int value)
    {
        Node *newnode = new Node(value);

        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        head = newnode;
        head->next = temp;
        newnode->left = head;
    }

    void display()
    {
        Node *temp = head;
        cout << "forward : ";
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            if (temp->next == NULL)
                break;
            temp = temp->next;
        }
        cout << "NULL" << endl;
        cout << "Backwards : ";
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->left;
        }
        cout << "NULL" << endl;
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
    cout << "insert at end : " << endl;
    list.display();
    cout << "Insert at begining : " << endl;
    list.insertatbegining(5);
    list.display();
}
