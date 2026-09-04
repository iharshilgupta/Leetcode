class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
        if(n==0){
            return -1;
        }
        // vector<int> prefix;
        // prefix[0]=0;
        // for(int i=1;i<n;++i){
        //     prefix[i]=prefix[i]+nums[i-1];
        // }
        vector<int> prefix(n); // prefix array to store all the prefix sums
        prefix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i){
            prefix[i]=min(prefix[i+1],nums[i]);
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