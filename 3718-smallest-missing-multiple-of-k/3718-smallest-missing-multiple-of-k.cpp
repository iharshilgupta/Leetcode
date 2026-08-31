class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // for(int i=1;i<=nums.size();i++){
        //     int small=k*i;
        //     if(nums.find(small)){
        //         return small;
        //     }
        // }
        unordered_set<int> multi(nums.begin(),nums.end());
        int small=k;
        while(multi.count(small)){
            small+=k;
        }
        return small;
    }
};