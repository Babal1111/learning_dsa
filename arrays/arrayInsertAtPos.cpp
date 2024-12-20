
#include <iostream>
using namespace std;

int main()
{
    // std::cout<<"Hello World";
    int arr[10]= {1,2,3,4,5,6};
    int l = sizeof(arr)/sizeof(arr[0]);
    // int l = arr.size();
    cout<<l<<endl;
    // cout<<arr[19];
    int pos,val;
    
    cout<<"at which position u want to inseart: ";
    cin>>pos;
    cout<<"Enter the value u want to add: ";
    cin>>val;
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=l-1;i>=pos;i--){
        arr[i]=arr[i-1];
        
    }
    arr[pos-1]=val;
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;
}