#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
void push(int element)
{
    arr.push_back(element);
    cout << "Element pushed in vector..." << endl;
}
void pop()
{
    cout << "Element poped from vector " << arr.back() << endl;
    arr.pop_back();
}
void size()
{
    cout <<"The size of the vector is : "<< arr.size() << endl;
}
void capacity()
{
    cout <<"the capacity of the vector is : "<< arr.capacity() << endl;
}
void atindex(int index)
{
    if(index<0 && index>=arr.size()){
        cout<<"vector index out of bonds"<<endl;
    }else{
    cout << "the element at index "<<index<< " is : "<< arr.at(2) << endl;
}
}
void frontend()
{
    if (!arr.empty())
    {
        cout <<"The element at the front of the vector is : "<< arr.front() << endl;
        cout <<"The element at the back of the vector is : "<< arr.back() << endl;
    }
}
void sortascending(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    cout <<"vector is desending order : ";
    for (int x : arr)
    {
        cout<< x << " ";
    }
    cout<<endl;
}
void sortdecending(vector<int> arr)
{
    sort(arr.rbegin(), arr.rend());
    cout <<"vector is acsending order : ";
    for (int x : arr)
    {
        cout<< x << " ";
    }
}
int main()
{
push(23);
push(54);
push(65);
push(34);
push(22);
push(65);
push(9);
pop();
size();
capacity();
atindex(3);
frontend();
sortascending(arr);
sortdecending(arr);
    return 0;
}
