#include<iostream>
using namespace std;
//creating an array

    const int maxsize=6;
    int arr[maxsize]={1,2,3,4,5};


   void display(){
    cout<<"elements in the array are : ";
    for(int j=0;j<maxsize;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
   }

   void insertatbegining(int element){
    for(int i=maxsize;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=element;


    //printing elements present in the array
    display();
}

    void insertatending(int element){
    
    arr[maxsize-1]=element;


    //printing elements present in the array
    display();
}

    void insertatanywhere(int index, int element){
        if(index<0||index>=maxsize){
            cout<<"index not in range of array";
        }else{
    for(int i=maxsize;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    

    //printing elements present in the array
    display();
}
}

//main function of the program

int main(){
    cout<<"Original array :\n";
    display();
    insertatbegining(20);
    insertatending(44);
    insertatanywhere(3,33);
    insertatanywhere(31,36);
}

