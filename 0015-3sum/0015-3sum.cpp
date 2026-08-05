class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        set<vector<int>> wp;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(k>j){
                int s=nums[i]+nums[j]+nums[k];
                if(s==0){
                    wp.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(s<0) {
                    j++;
                } 
                else {
                    k--;
                }
            }
        }
    vector<vector<int>> nr(wp.begin(),wp.end());
    return nr;
    }
};