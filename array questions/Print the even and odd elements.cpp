#include<iostream>

using namespace std;

     
    int arr[]{1,2,3,4,5,6,7,8,9,10}; 
    int arraysize=sizeof(arr)/sizeof(arr[0]);
   
//method to find odd and even elements of an array
void oddeven(int arr[]){
        cout<<"even elements are : ";
for(int i=0; i<arraysize; i++){
        if(arr[i]%2==0){
            cout<<arr[i];
            cout<<" ";
        }
    }
        cout<<endl;
        cout<<"the odd elements are : ";
    for(int i=0; i<arraysize; i++){
        if(arr[i]%2!=0){
            cout<<arr[i];
            cout<<" ";
        }
        }
    }
    

//main method to call functions
int main(){
    oddeven(arr);
       return 0;
}
