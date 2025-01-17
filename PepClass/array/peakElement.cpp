#include<iostream>
using namespace std;
//peakelement an element whose imidiate left and right are smaller than it
void peakElement(int arr[],int l){
    for(int i=1;i<l-1;i++){
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            cout<<"Peak element is "<<arr[i]<<endl;
    }
    }
}





int main(){
int arr[5] = {1,2,1,5,4};

peakElement(arr,5);
}