
#include <iostream>
using namespace std;
void arrRev(int arr[],int l){
    cout<<"the reversed array is : ";
    for(int i=l-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
// or 
void arrRev2(int arr[],int l){
    cout<<"the reversed array is : ";
    int low=0;
    int high=l-1;
    int temp;
    while(low<high){
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

}
int main()
{
 int arr[5]={1,2,3,4,50};
 int l= sizeof(arr)/sizeof(arr[0]);
 arrRev(arr,l);
 cout<<endl;
 int arr2[5]={10,20,30,40,50};
 int l2= sizeof(arr2)/sizeof(arr2[0]);
 arrRev2(arr2,l);
for(int i=0;i<l;i++){
        cout<<arr2[i]<<" ";
    }
}