
#include <iostream>
using namespace std;
void arrRev(int arr[],int l){
    cout<<"the reversed array is : ";
    for(int i=l-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main()
{
 int arr[5]={1,2,3,4,50};
 int l= sizeof(arr)/sizeof(arr[0]);
 arrRev(arr,l);
}