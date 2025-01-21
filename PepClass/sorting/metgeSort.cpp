#include<iostream>
unsing namespace std;

void merge(int arr[],int low,int mid,int high){
    

}

void mergeSort(int arr[],int low,int high){

    if(low>=high){
        return;
    }
    int mid= (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}