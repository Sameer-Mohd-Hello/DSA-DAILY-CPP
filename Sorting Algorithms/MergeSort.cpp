#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int right, int mid)
{
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {

        temp.push_back(arr[i++]);
    }
    while (j <= right)
    {
        temp.push_back(arr[j++]);
    }
    for (int k = 0; k < temp.size(); k++)
    {
        arr[k + left] = temp[k];
    }
}
void mergesort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}
int main()
{
    vector<int> brr = {4, 2, 3, 5, 1, 6};
    int n = brr.size();
    mergesort(brr, 0, n - 1);
    cout << "Sorted array is : ";
    for (int val : brr)
    {
        cout << val << " ";
    }
    return 0;
}
