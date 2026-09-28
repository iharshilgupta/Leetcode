class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixS(nums.size());
        int prefix=0;
        for(int i=0;i<nums.size();++i){
            prefix+=nums[i];
            prefixS[i]+=prefix;
        }
        return prefixS;
    }
};