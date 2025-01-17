#include<iostream>
using namespace std;
int getSecondLargestEfficient(vector<int> &arr) {
int largest=INT_MIN;
        int secondLargest=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(secondLargest<arr[i] && arr[i]!=largest){
                secondLargest=arr[i];
            }
        }
        return secondLargest == INT_MIN ? -1 : secondLargest;
}

int getSecondLargest(vector<int> &arr) {
        // 
        int temp;
        int n=arr.size();
    
        sort(arr.begin(),arr.end());
        // return arr[n-2];
        
        int largest = arr[n-1];
        bool flag=true;
        for(int i=n-1;i>0;i--){
            if(arr[i-1]<arr[i]){
                return arr[i-1];
                flag =false;
                break;
            }
            
        }
        if(flag) return -1;
    }

    int main(){

    }