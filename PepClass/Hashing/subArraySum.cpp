// subArray sum =0 or any value
#include<iostream>
#include<unordered_map>
using namespace std;

bool subArraysum(int arr[],int n){ // naive approach

    int sum;
    for(int i =0;i<n;i++){
        sum =0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
            if(sum==0){
                return true;
            }
        }

    }
    return false;
}
bool prefixsum(int arr[],int n){
    unordered_map<int,int> map;
    int presum=0;
    for(int i=0;i<n;i++){
        presum +=  arr[i];
        if(map.find(presum)!=map.end()){
            return true;
            break;
        }
        if(presum==0){
            return true;
            break;
        }
        map[presum]=i;
    }
    return false;

}


int main(){
    int arr[5] = {1, 2, -1, 4, -3};
        int n = sizeof(arr)/sizeof(arr[0]);

    cout<<subArraysum(arr,n)<<endl;
    cout<<prefixsum(arr,n)<<endl;
    int arr1[5] = {1, 2, 2, 4, 1}; // all positive, 0 subArray sum not posible
        cout<<subArraysum(arr1,n)<<endl;
    cout<<prefixsum(arr1,n)<<endl;
 int arr2[5] = {1, 2, 2, 4, 0};
        cout<<subArraysum(arr2,n)<<endl;
    cout<<prefixsum(arr2,n);
}