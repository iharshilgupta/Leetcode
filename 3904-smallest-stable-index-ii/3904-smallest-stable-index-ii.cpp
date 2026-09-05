class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=0;
        // int mini=0;
        // int index=0;
        // for(int i=0;i<nums.size();++i){
        //     maxi=max(maxi,nums[i]);
        //     mini=min(mini,nums[i]);
        //     if(maxi-mini<=k){
        //         index=i;
        //         break;
        //     }
        // }
        int n=nums.size();
        vector<int> prefix(n);
        prefix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i){
            prefix[i]=min(nums[i],prefix[i+1]);
        }
        for(int i=0;i<n;++i){
            maxi=max(maxi,nums[i]);
            if(maxi-prefix[i]<=k){
                return i;
            }
        }
        return -1;
    }
};