#include<iostream>
using namespace std;

    int arr[]{23,12,43,23,65,62,32,23,12,43};
    int totalsum=0;    
    int arraysize = sizeof(arr)/sizeof(arr[0]);

//method to get sum of array elements

void sum(){
    
    for(int i=0;i<arraysize;i++){
        totalsum+=arr[i];
    }
}

//method to find average of an array

void averageofarray(){
    float average = (float)totalsum/arraysize;
    cout<<"the average of elements of array is : "<<average<<endl;
}

//main function of program

int main(){
    sum();
    averageofarray();
        return 0;
}
