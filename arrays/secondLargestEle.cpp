#include<iostream>
using namespace std;
int getLargest(int arr[],int l){
    int largest=0;
    for(int i=0;i<l;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int secondLargest(int arr[],int l){
    int largest= getLargest(arr,l);
    int secLargest=0;  // we can write -1 
    for(int i=0;i<l;i++){
        if(arr[i]==largest){
            continue;
        }
        if(arr[i]>secLargest){
            secLargest=arr[i];
        }
    }
    return secLargest;


}
int main(){
    int arr[5]={1,2,3,8,10};
    int arr2[4]={20,10,10,20};
    int arr3[3]={10,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,size)<<endl;

    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<secondLargest(arr2,size2)<<endl;

 int size3 = sizeof(arr3)/sizeof(arr3[0]);
    cout<<secondLargest(arr3,size3)<<endl;
    
} // namespace std;
