class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int fir=-1;
        int sec=-1;
        vector<int> ans(2,-1);  
        if(nums.size()==0) return ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                fir=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                sec=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        ans[0]=fir;
        ans[1]=sec;
        return ans;
    }
};