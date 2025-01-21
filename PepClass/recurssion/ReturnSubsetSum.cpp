// return the sum of subset


#include<iostream>
using namespace std;

    int subsets(vector<int>& nums) {
        int n =nums.size();
        vector<int> temp;
        return sub(0,n,nums,temp);
        
        }

     int sub(int i,int n,vector<int>& nums,vector<int> temp){
        int sum=0;

        if(i==n && sum==target){
            // ans.push_back(temp);
            
            return ;
        }
        sub(i+1,n,nums,temp);
        temp.push_back(nums[i]);
        sum=sum+nums[i];
        sub(i+1,n,nums,temp);

    
        
    }
};





int main(){

}