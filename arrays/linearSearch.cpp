#include<iostream>
using namespace std;

int main(){
    int n=101;
    int arr[5]={100,102,101,105,10};
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            cout<<"found at index: "<<i<<endl;
        } 
    }
}