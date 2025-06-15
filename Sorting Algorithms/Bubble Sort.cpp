#include <iostream>
#include <vector>
using namespace std;
class Sort
{
public:
    // bubblesort using a while and a for loop
    void bubblewhilefor(vector<int> &arr)
    {
        int k = arr.size();

        // keeps track of number of passes bubble has done and works until n-1
        while (k != 1)
        {
            bool issorted = false;

            // help in traversing the array all in a single pass
            for (int i = 0; i < k - 1; i++)
            {

                // if the current element is larger than next swap
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                    issorted = true;
                }
            }

            // early breaks the program if array is early sorted
            if (!issorted)
            {
                break;
            }
            k--;
        }

        // prints the sorted array
        cout << "Sorted array is : ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // bubblesort using double for loops

    void bubbleforfor(vector<int> &arr)
    {
        int k = arr.size();

        // keeps track of number of passes bubble has done and works until n-1

        for (int i = 0; i < k - 1; i++)
        {
            bool issorted = false;

            // help in traversing the array all in a single pass

            for (int j = 0; j < k - i - 1; j++)
            {

                // if the current element is larger than next swap

                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    issorted = true;
                }
            }

            // early breaks the program if array is early sorted

            if (!issorted)
            {
                break;
            }
        }

        // prints the sorted array

        cout << "Sorted array is : ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr = {1, 4, 2, 6, 3, 5};
    vector<int> arr1 = {11, 43, 21, 22, 10, 9};
    Sort obj;
    obj.bubblewhilefor(arr);
    obj.bubbleforfor(arr1);

    return 0;
}
