#include<iostream>
using namespace std;

int maxSumSub(int arr[],int n){

    int maxSum=0,sum,maxx;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum = sum+ arr[i];
            if(sum>maxSum) maxSum=sum;
            // maxx = max(sum,maxSum);
        }
    }
    return maxSum;
}

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<maxSumSub(arr,5);
}