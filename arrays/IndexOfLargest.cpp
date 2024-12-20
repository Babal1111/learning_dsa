
#include <iostream>
using namespace std;

int largestIndex(int arr[],int size){
      for(int i=0;i<size;i++){
        // cout<<arr[i]<<" ";
        bool flag = true;
        for(int j=0;j<size;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true) return i;
    }
    return -1; // this statement will never occur , coz there will be always largest element; this is for removing errors
    

    
}

int main()

{
    
    int arr[5]={10,20,50,30,10};
    int l = sizeof(arr)/sizeof(arr[0]);
    // int l = arr.size();

cout<<"the index of largest index is :"<<largestIndex(arr,l);

  

    
}