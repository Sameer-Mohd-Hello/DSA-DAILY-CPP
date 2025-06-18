#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> insertionsort(vector<int> arr)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        return arr;
    }
};
int main()
{
    Solution obj;
    vector<int> arr1 = obj.insertionsort({5, 4, 3, 2, 1});
    for (int num : arr1)
    {
        cout << num << " ";
    }
}
