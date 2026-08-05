class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int first{1};
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[first-1]){
                nums[first]=nums[i];
                first++;
            }
        }
        return first;
    }
};