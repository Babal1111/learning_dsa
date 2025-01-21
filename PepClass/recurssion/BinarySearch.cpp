class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end=nums.size()-1;
        int start =0;
        
        return binary(nums,target,start,end);
        
    }
    int binary(vector<int>& nums,int target,int start,int end){
        int mid=(start+end)/2;
        if(start>end){
            return -1;
        }

        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            return binary(nums,target,start,mid-1);
        }
        else{
            return binary(nums,target,mid+1,end);
            
        }
    }
};