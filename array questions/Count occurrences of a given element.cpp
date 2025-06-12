#include<iostream>
using namespace std;


    int arr[]{23,13,43,23,65,62,32,23,8,43};
    int arraysize = sizeof(arr)/sizeof(arr[0]);

    //method to count number of occurance of an given element
void counting(int element){
        int count = 0;
    for (int i=0;i<arraysize;i++){
            if(element==arr[i]){
                count++;
            }
    }
    cout<<"the element "<<element<<" is present "<<count<<" times"<<endl;
}

//main method to call the counting function
int main(){
    counting(23);
    counting(999);
       return 0;
}
