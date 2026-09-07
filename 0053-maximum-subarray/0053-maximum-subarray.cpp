class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int first_pointer=nums[0];
        int second_pointer=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            first_pointer=max(nums[i],first_pointer+nums[i]);
            second_pointer=max(second_pointer,first_pointer);
        }
        return second_pointer;
    }
};