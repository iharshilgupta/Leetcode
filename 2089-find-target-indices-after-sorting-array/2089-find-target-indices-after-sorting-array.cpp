class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        // sorting approach, tc: O(nlogn)
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // for(int i=0;i<n;++i){
        //     if(nums[i]==target){
        //         ans.push_back(i);
        //     }
        // }

        /* optimal approach*/
        // tc: O(n)
        int less=0;
        int equ=0;
        for(int i:nums){
            if(i<target){
                less++;
            }
            else if(i==target){
                equ++;
            }
        }
        ans.reserve(equ);
        for(int i=0;i<equ;++i){
            ans.push_back(less+i);
        }
        return ans;

        return ans;
    }
};