class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int len=INT_MAX;
        int sum=0;
        int left=0;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            while(sum>=target){
                int curr=i-left+1;
                len=min(len,curr);
                sum-=nums[left];
                left++;
            }
        }
        return (len==INT_MAX)?0:len;
    }
};