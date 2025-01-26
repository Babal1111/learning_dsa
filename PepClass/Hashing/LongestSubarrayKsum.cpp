// longest subArray with sum k
#include<iostream<
using namespace std;

  int longestSubarray(vector<int>& arr, int k) { // naive approach O(n^2)
        int length=0,maxLength=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(sum==k){
                    length=(j-i)+1;
                    maxLength= max(maxLength,length);
                }
                
            }
            
        }
        return maxLength;
        // code here
    }

int main(){

}