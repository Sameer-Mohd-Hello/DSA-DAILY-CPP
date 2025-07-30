#include <iostream>
using namespace std;

class Queue
{

private:
    int *arr;
    int front;
    int back;
    int size;
    int capacity;

public:
    Queue(int maxsize)
    {
        capacity = maxsize;
        arr = new int[capacity];
        size = 0;
        front = -1;
        back = -1;
    }

    void Enque(int val)
    {
        if (back == capacity - 1)
        {
            cout << "reached max size cannot enque!\n";
            return;
        }

        if (front == -1)
        {
            front++;
            back++;
            size++;
            arr[back] = val;
            return;
        }

        back++;
        arr[back] = val;
        size++;
    }

    int Deque()
    {
        if (size == 0)
        {
            cout << "Queue is empty cannot Deque!\n";
            return -1;
        }
        int temp = arr[front++];
        size--;

        if (size == 0)
        {
            front = back = -1;
        }
        return temp;
    }

    int Front()
    {
        if (size == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int Back()
    {
        if (size == 0)
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[back];
    }

    bool isFull()
    {
        return size == capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty cannot print!\n";
            return;
        }
        cout << "Printing the Queue : \n";
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Queue q(4);
    q.Enque(10);
    q.Enque(20);
    q.Enque(30);
    q.Enque(40);
    q.Enque(50);
    q.Display();
    cout << "element Dequed : " << q.Deque() << endl;
    cout << "element Dequed : " << q.Deque() << endl;
    cout << endl;
    q.Display();
    cout << endl;
    cout << boolalpha;

    cout << "The Front of the Que is : " << q.Front() << endl;
    cout << "The Back of the Que is : " << q.Back() << endl;
    cout << "the Que is Full : " << q.isFull() << endl;
    cout << "the Que is Empty : " << q.isEmpty() << endl;
}
