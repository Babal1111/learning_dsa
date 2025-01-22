#include<iostream>
unsing namespace std;

void merge(int &arr[],int low,int mid,int high){
    int l1=low;
    int l2=high;
    vctor<int> temp;
    while(l1<=mid && l2<=high){
        if(arr[l1]<arr[l2]){
            temp.push_back(arr[l1]);
            l1++;
        }
        else{
            temp.push_back(arr[l2]);
            l2++;
        }
    }
    while(l1<=mid){
        temp.push_back(arr[l1]);
    }
    while(l2<=high){
        temp.push_back(arr[l2]);

    }


for(i=low;i<high;i++){
    arr[low]=temp[i-low];

}

}

void mergeSort(int &arr[],int low,int high){

    // if(low>=high){
    //     return;
    // }
    if(low<high){
    int mid= (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }

}