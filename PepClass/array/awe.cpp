#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int max=0,secondMax=0;

    for(int i=0;i<n;i++){
        if(arr[i]>max) 
        {
        secondMax=max;
        max = arr[i];}

        if(secondMax<arr[i] && max!=arr[i]){
            secondMax=arr[i];
        }

    }
    return secondMax;
}

int main(){
    int arr[6] = {1,2,3,4,5,5};
    cout<<"Second largest :"<<secondLargest(arr,6);
    // cout<<"\n Size of 100 :"<<sizeof(1000);
    

}