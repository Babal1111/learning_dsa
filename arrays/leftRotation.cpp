#include<iostream>
using namespace std;

int rotate(int arr[],int s){
int first=arr[0];
// arr[0]=arr[s-1];
    for(int i=0;i<s-1;i++){
       int temp=arr[i];
        arr[i]=arr[i+1];
        // arr[i+1]=temp; no need

    }
    arr[s-1]=first;
}
//rotate LEFT by n places easiest way rotate left those many times , the positions u want to rotate
int rotate_left(int arr[],int n,int position){
     for(int j=0;j<position;j++){
        rotate(arr,n);
     }

}

int main() {
    int arr[6]= {10,20,30,40,50,100};
int s= sizeof(arr)/sizeof(arr[0]);
cout<<"Given array :\n";
for(int i=0;i<s;i++){
        cout<<" "<<arr[i];
}cout<<endl;

// rotate(arr,s);
// cout<<"After rotating right by 1 place :\n";
//    for(int i=0;i<s;i++){
//         cout<<" "<<arr[i];

//     }cout<<endl;

int position = 2;    //rotate by thi many;
rotate_left(arr,s,position);
cout<<"Rotated array by "<<position<< " positions : \n";
for(int i=0;i<s;i++){
    cout<<" "<<arr[i];
}
}