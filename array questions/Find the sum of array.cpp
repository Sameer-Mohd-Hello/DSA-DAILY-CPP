#include<iostream>
using namespace std;

//method to get sum of array elements

void sum(){
    int sum;
    int size=10;
    int arr[size]{23,12,43,23,65,74,32,23,12,43};
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
        cout<<"The sum of all elements of array is : "<<sum;
}

//main function of program

int main(){
    sum();
        return 0;
}
