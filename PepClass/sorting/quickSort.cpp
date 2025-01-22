#include<iostream>
using namespace std;


void quickSort(int &arr,int low,int high){
    int pivotIndex = position(arr,low,high);

    quickSort(arr,low,pivotIndex-1);
    quickSort(arr,pivotIndex+1,high);
    
}
int position(int &arr,int low,int high){
    int pivotIndex = high;
    int i = low-1;
    

}

int main(){
    int arr[5]={5,4,1,3,2};
    quickSort(arr,0,arr.size()-1);
}


