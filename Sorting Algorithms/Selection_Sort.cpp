#include <iostream>
using namespace std;

void Select(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int arr[] = {29, 10, 14, 37, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    Select(arr, size);
    cout << "Sorted array is : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
