// search count inversions on gfg 
#include<iostream>
#include<vector>
using namespace std;

// int inversionCount(vector<int> &arr) {
//         int count=0;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i+1;j<arr.size();j++){
//                 if(arr[i]>arr[j]){
                    
//                     count++;
//                 }
                
//             }
//         }
//         return count;
//         // Your Code Here
//     }
       int inversionCount(vector<int> &arr) {
    
        return mergeSortAndCount(arr,0,arr.size()-1);
        
        // Your Code Here
    }


    int mergeSortAndCount(vector<int> &arr,int left,int right){
        int count=0;
        if(left<right){
            int mid=(left+right)/2;
            count+=mergeSortAndCount(arr,left,mid);
            count+=mergeSortAndCount(arr,mid+1,right);
            cout+=mergeAndCount(arr,left,mid,right);
            
        }
        return count;
    }
    int mergeAndCount(vector<int> &arr,int left,int mid,int right){
        vector<int> temp(right-left);
        // incomplete
    }
};

int main(){
    vector<int> arr = {1, 3, 5, 2, 4};
    cout << "Number of inversions are " << inversionCount(arr);
}