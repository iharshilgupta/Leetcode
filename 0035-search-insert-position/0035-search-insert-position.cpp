class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int t=0;
        int h=nums.size()-1;
        while(t<=h){
            int a=t+(h-t)/2;
            if(nums[a]==target){
                return a;
            }
            else if(nums[a]<target){
                t=a+1;
            }else{
                h=a-1;
            }
        }
        return t;
    }
};