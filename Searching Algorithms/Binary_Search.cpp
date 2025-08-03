#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int binary_search(vector<int> arr, int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
    {
        return binary_search(arr, left, mid - 1, target);
    }
    else
    {
        return binary_search(arr, mid + 1, right, target);
    }
}

int main()
{
    vector<int> nums = {2, 4, 5, 7, 8, 9, 10, 15};
    int res = binary(nums, 20);
    if (res == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << res << endl;
    }

    int res1 = binary_search(nums, 0, nums.size() - 1, 9);

    if (res1 == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << res1 << endl;
    }
    return 0;
}
