#include<iostream>

using namespace std;

     
    int arr[]{1,2,3,4,5,6,7,8,9,10}; 
    int arraysize = sizeof(arr)/sizeof(arr[0]);
    int* arr1 = new int[arraysize];

//method to reverse an array using another array
    
void reverse(int arr[]){
    for(int i=arraysize-1;i>=0;i--){
            arr1[arraysize-1-i]=arr[i];
    }
}

//method to reverse original array

void reverse1(int arr[]){
    int start=0;
    int ending=arraysize-1; 
    int temp;
        while(start<ending){
        temp=arr[start];
        arr[start]=arr[ending];
        arr[ending]=temp;
        start++;
        ending--;
        }
    }


//method to display an array

void display(int arr[]){
     cout<<"array is : ";
    for(int i=0;i<arraysize;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//main method to call functions
int main(){
    display(arr);
    reverse(arr);
    cout<<"After reverse copy ";
    display(arr1);
    reverse1(arr);
    cout<<"After reverse  original ";
    display(arr);
       return 0;
}
