#include<iostream>
using namespace std;
//creating an array
int main(){
    int size=5;
    int arr[size];
    //taking array elements from user
    cout<<"enter elements to be entered : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //printing elements present in the array
    cout<<"elements in the array are : ";
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}
