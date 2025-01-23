#include<iostream>
#include<unordered_map>
using namespace std;

// void frequency(int arr[],int size){
//     int count=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }


//         }
//     }

// }

int main(){
    int arr[7]={1,2,1,3,4,5,2};
    unordered_map<int,int> map;

    for(int i=0;i<7;i++){
        if(map.find(arr[i])!=map.end()){
            map[arr[i]]+=1;
        }
        else{
            map[arr[i]]=1;
        }
    }

    cout<< "frequency"<<endl;
    for(auto i:map){
        cout<<i.first<<" : "<<i.second<<endl; 
    }
    // frequency(arr,size);

}