#include<iostream>

using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}



int main(){
    int arr[5] ={1,2,3,4,5};
    int size=5;
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }

}
