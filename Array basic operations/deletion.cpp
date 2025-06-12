#include<iostream>
using namespace std;
//creating an array

    const int maxsize=6;
    int currentsize=maxsize;
    int arr[maxsize]={1,2,31,3,4,5};

//Method to display elements present in array

   void display(){
    cout<<"elements in the array are : ";
    for(int j=0;j<currentsize;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
   }

//Method to delete element from begining of array

   void deleteatbegining(){
    if(currentsize==0){
        cout<<"Array is empty!";
    }else{
    cout<<"Element removed from begining : "<<arr[0]<<endl;;
    for(int i=1;i<currentsize;i++){
        arr[i-1]=arr[i];
    }
    currentsize--;
    }


//printing elements present in the array
    display();
}

//Method to delete element from ending of array
   
void deleteatending(){
    cout<<"Element removed from ending : "<<arr[currentsize-1]<<endl;
    currentsize--;


//printing elements present in the array

    display();
}

//Method to delete element from index of your choice

    void deleteatanywhere(int index){
        if(index<0||index>=currentsize){
            cout<<"index not in range of array";
        }else{
            cout<<"Element removed from : "<<arr[index]<<endl;
            currentsize--;
    for(int i=index;i<currentsize-1;i++){
        arr[i]=arr[i+1];
    }
    

//printing elements present in the array
    
    display();
}
    }

//Method to delete element of your choice

void deleteelement(int element){
    int index=-1;
for (int i = 0; i<currentsize; i++)
{
    if(arr[i]==element){
        index=i;
        break;
    }
}
if(index==currentsize-1){
    cout<<"Element removed from array index :"<<index<<endl;
    currentsize--;
    display();
}if(index!=-1){
    cout<<"Element removed from array index :"<<index<<endl;
    for(int i=index;i<currentsize;i++){
        arr[i]=arr[i+1];
    }
    currentsize--;
    display();
}if(index==-1){
    cout<<"element not present in array";
}

}

//main function

int main(){
    cout<<"Original array :\n";
    display();
    deleteatbegining();
    deleteatending();
    deleteatanywhere(3);
    deleteelement(31);
    return 0;
}
