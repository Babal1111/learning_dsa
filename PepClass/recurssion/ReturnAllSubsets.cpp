#include<iostrem>
using namespace std;


  vector<vector<int>> ans;

    vector<vector<int>> subsets(vector<int>& nums) {
        int n =nums.size();
        vector<int> temp;
        sub(0,n,nums,temp);
        return ans;
        }

     void sub(int i,int n,vector<int>& nums,vector<int> temp){

        if(i==n){
            ans.push_back(temp);
            return;
        }
        sub(i+1,n,nums,temp);
        temp.push_back(nums[i]);
        sub(i+1,n,nums,temp);

    
        
    }
};


int main(){
    
}