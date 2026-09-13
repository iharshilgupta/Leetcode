class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool l=true;
        set<int> s(nums.begin(), nums.end());
        if(s.size()==nums.size()){
            l=false;
        }
        return l;
    }
};