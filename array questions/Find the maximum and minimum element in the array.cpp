#include<iostream>
using namespace std;


    int arr[]{23,13,43,23,65,62,32,23,8,43};
    int arraysize = sizeof(arr)/sizeof(arr[0]);
    int minimum=arr[0];
    int maximum=arr[0];

void min(){
    for(int i=1;i<arraysize;i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    cout<<"the minimum element in array is : "<<minimum<<endl;
}

void max(){
    for(int i=1;i<arraysize;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
        }
    }
    cout<<"the maximum element in array is : "<<maximum<<endl;
}

int main(){
    min();
    max();
       return 0;
}
