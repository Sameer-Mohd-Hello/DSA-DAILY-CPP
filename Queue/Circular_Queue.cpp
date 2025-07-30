#include <iostream>
using namespace std;

class CircularQueue
{

    int *arr;
    int front, back, size, capacity;

public:
    CircularQueue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        back = front = -1;
        size = 0;
    }

    void Enque(int val)
    {
        if (isFull())
        {
            cout << "Que is full cannot Enque!\n";
            return;
        }
        if (isEmpty())
        {
            back = front = 0;
            arr[back] = val;
            size++;
            return;
        }
        back = (back + 1) % capacity;
        arr[back] = val;
        size++;
    }

    int Deque()
    {
        if (size == 0)
        {
            cout << "Que is empty cannot Deque!\n";
            return -1;
        }
        int temp = arr[front];
        arr[front] = 0;
        front = (front + 1) % capacity;
        size--;
        if (size == 0)
        {
            front = back = -1;
        }
        cout << "element Deque : \n";
        return temp;
    }

    int Front()
    {
        if (size == 0)
        {
            cout << "Que is empty!\n";
            return -1;
        }
        return arr[front];
    }

    int Back()
    {
        if (size == 0)
        {
            cout << "Que is empty!\n";
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

    void display()
    {
        cout << "Printing the Que :\n";
        for (int i = 0; i < size; i++)
        {
            int index = (front + i) % capacity;
            cout << arr[index] << " ";
        }
        cout << endl;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};
int main()
{
    CircularQueue q(4);

    q.Enque(10);
    q.Enque(20);
    q.Enque(30);
    q.Enque(40);
    cout << q.Deque() << endl;
    q.Enque(50);
    q.display();
    cout << "Front : " << q.Front() << endl;
    cout << "Back : " << q.Back() << endl;
    cout << boolalpha;
    cout << "isFull : " << q.isFull() << endl;
    cout << "isEmpty : " << q.isEmpty();
}
