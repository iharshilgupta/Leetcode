class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2; // starting low and high from 1 and n-2 because checking pairs
        // edge cases;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.size()-1] != nums[nums.size()-2]) return nums[nums.size()-1];

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return  nums[mid];// returning mid when its not equal to both the adjacent values
            }
            if((mid%2==0 && nums[mid]==nums[mid+1]) ||(mid%2!=0 && nums[mid]==nums[mid-1])){
                low=mid+1; // even index and right half
            }
            else{
                high=mid-1; // left half
            }
        }
        return -1;
    }
};