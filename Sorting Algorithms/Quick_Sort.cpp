#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{

    int j = low - 1;
    int pivot = arr[high];
    for (int i = low; i < high; i++)
    {
        if (pivot > arr[i])
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j + 1], arr[high]);
    return j + 1;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    vector<int> arr = {6, 3, 5, 4, 8, 11, 2, 9};
    int n = arr.size();
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array is : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
