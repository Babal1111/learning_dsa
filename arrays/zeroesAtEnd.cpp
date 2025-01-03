#include<iostream>
using namespace std;

int main(){
    int arr[7]= {1,2,3,0,5,0,7};
    int size =7;

    int temp[size];
    int count=0;
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            count++;
        }
        j++;

    }
    for(int i=count;i<size;i++){
        temp[i]=0;
    }
    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }


//update
}