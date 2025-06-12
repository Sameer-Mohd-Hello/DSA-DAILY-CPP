#include<iostream>
using namespace std;

//method to get size of array

void arraysize(){
    int arraysize;
    int arr[]{23,12,43,23,65,74,32,23,12,43};
        arraysize = sizeof(arr)/sizeof(arr[0]);
    
        cout<<"The size of the array is : "<<arraysize;
}

//main function of program

int main(){
    arraysize();
        return 0;
}
