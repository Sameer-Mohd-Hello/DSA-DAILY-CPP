#include<iostream>

using namespace std;

     
    int arr[]{1,2,2,3,3,4,5,5,6,7,7,8,9,10}; 
    int arraysize=sizeof(arr)/sizeof(arr[0]);
   
void duplicate(int element){
        int count=0;
    for(int i=0; i<arraysize; i++){
        if(arr[i]==element){
            count++;
        }
        
    }
if(count>=2){
      cout<<"element is duplicate in array : "<<element<<endl;
}
if(count==1){
    cout<<"Element is not duplicate........"<<element<<endl;;
}
if(count==0){
    cout<<"Element not present in array! "<<element<<endl;
}

}
//main method to call functions
int main(){
    duplicate(2);
    duplicate(1);
    duplicate(7);
    duplicate(25);
       return 0;
}
