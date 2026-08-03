class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int first=0;
        for(int i=0;i<nums.size();++i){
            if(first==sum-first-nums[i]){
                return i;
            }
            first+=nums[i];
        }
        return -1;
    }
};