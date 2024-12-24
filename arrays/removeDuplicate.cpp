#include<iostream>
using namespace std;


int remDup(int arr[],int l){
int res=1;
for(int i=1;i<l;i++){
    if( arr[i]!=arr[res-1]){
        arr[res]=arr[i];
        res++;
    }
    
}
return res;
}
int main(){
    int l=6;
    int arr[l] = {1,2,2,3,3,3};
    cout<<"index of distinct array: : "<<remDup(arr,l)<<endl;
}