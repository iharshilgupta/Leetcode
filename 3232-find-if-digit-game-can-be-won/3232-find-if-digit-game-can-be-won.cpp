class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int oneS=0;
        int twoS=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>=10){
                twoS+=nums[i];
            }
            else{
                oneS+=nums[i];
            }
        }
        return oneS!=twoS;
    }
};