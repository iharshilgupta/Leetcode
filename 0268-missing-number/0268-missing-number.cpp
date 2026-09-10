class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();++i){
        //     if(nums[i]!=1){
        //         return i;
        //     }
        // }
        // return nums.size();

        // int ans=nums.size();
        // for(int i=0;i<nums.size();++i){
        //     ans^=i;
        //     ans^=nums[i];
        // }
        // return ans;

        int n=nums.size();
        int sum=n*(n+1)/2;
        for(int i:nums){
            sum-=i;
        }
        return sum;
    }
};