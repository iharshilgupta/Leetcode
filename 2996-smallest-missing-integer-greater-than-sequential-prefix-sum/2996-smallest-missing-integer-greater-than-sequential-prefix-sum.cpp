auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int prefix=nums[0];
          for(int i=1;i<n;++i){ 
            if(nums[i]-nums[i-1]==1){
                prefix+=nums[i];
            }
            else{
                break;
            }
        }
        unordered_set<int> valid(nums.begin(),nums.end());
        while(valid.count(prefix)){
            prefix++;
        }
        return prefix;
    }
};