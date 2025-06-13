#include<iostream>

using namespace std;

     
    int arr[]{1,2,2,3,33,31,5,5,6,7,7,8,9,10}; 
    int arraysize=sizeof(arr)/sizeof(arr[0]);
   
void secondlargest(int arr[]){
    int largest=arr[0];
    int secondlargest;
 for(int i=1; i<arraysize; i++){
    if(largest<arr[i]){
        secondlargest=largest;
        largest=arr[i] ; 
    }
    else if(arr[i]>secondlargest&&arr[i]!=largest){
        secondlargest=arr[i];
    }
 }
 cout<<"Second largest number in array is : "<< secondlargest<<endl;


}
//main method to call functions
int main(){
        secondlargest(arr);
       return 0;
}
