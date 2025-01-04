#include<iostream>
using namespace std;
int swapEfficient(int arr[],int l){
    int count=0;
    for(int i=0;i<7;i++){
    if(arr[i]!=0){
        int temp = arr[i];
        arr[i]=arr[count];
        arr[count]=temp;
        count++;
    }

    }
}

int swap(int arr[],int l){
    for(int i=0;i<l;i++){
        if(arr[i]==0){
            for(int j=i+1;j<l;j++){
                if(arr[j]!=0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}

// using swaping 
int main(){
 int arr[7]= {1,2,3,0,5,0,7};
cout<<"original arrary :";
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
swap(arr,7);
cout<<"array after swapping : ";
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
    }
}

// my desi method of moving zeros at end
// int main(){
//     int arr[7]= {1,2,3,0,5,0,7};
//     int size =7;

//     int temp[size];
//     int count=0;
//     int j=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]!=0){
//             temp[j]=arr[i];
//             count++;
//         }
//         j++;

//     }
//     for(int i=count;i<size;i++){
//         temp[i]=0;
//     }
//     for(int i=0;i<size;i++){
//         cout<<temp[i]<<" ";
//     }


// //update
// }