// gfg equal no of zerosand ones in a suba array
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int maxSub(int arr[],int n){
    int maxLength=0;
    for(int i=0;i<n;i++){
        int countO=0,countZ=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0) countZ++;
            if(arr[j]==1) countO++;
            if(countZ==countO) maxLength=max(maxLength,j-i+1);

        }
    }
    return maxLength;
}

int main(){
    int arr[7] = {1,0,1,1,1,0,0};
    int arr2[4] = {1,1,1,1};
    int arr3[10] = {0,1,0,1,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max no of zeros and one are : "<<maxSub(arr,n)<<endl;
    cout<<"Max no of zeros and one are : "<<maxSub(arr3,10)<<endl;

    cout<<"Max no of zeros and one are : "<<maxSub(arr2,4);

    

}