#include <iostream>

using namespace std;

const int row = 3;
int const column = 2;
int arrrow = 1;
int arrcolumn = 0;
int arr[row][column]{
    {1, 2},
};

// function which display the array

void display()
{
    cout << "array is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// insert element in the array

void insert(int element)
{

    if (arrcolumn == column)
    {
        arrrow++;
        arrcolumn = 0;
    }
    if (arrrow < row && arrcolumn < column)
    {
        arr[arrrow][arrcolumn] = element;
        cout << "Element inserted in the array...." << endl;
        arrcolumn++;
    }
    else
    {
        cout << "array overflow cannot insert!" << endl;
    }

    display();
}

// delete element from the array

void pop()
{
    if (arrrow == 0 && arrcolumn == 0)
    {
        cout << "array is underflow cannot pop" << endl;
        return;
    }
    if (arrcolumn == 0)
    {
        arrrow--;
        arrcolumn = column;
    };
    arrcolumn--;
    cout << "Popped element: " << arr[arrrow][arrcolumn] << " from position [" << arrrow << "][" << arrcolumn << "]" << endl;
    arr[arrrow][arrcolumn] = 0;
    display();
}
// main method to call functions
int main()
{
    display();
    insert(33);
    insert(21);
    insert(23);
    insert(25);
    insert(29);
    pop();
    return 0;
}
