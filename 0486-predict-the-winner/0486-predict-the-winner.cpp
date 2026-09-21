class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        if(n%2==0) return true;
        vector<int> answer(nums);
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                answer[j]=max(nums[i]-answer[j],nums[j]-answer[j-1]);
            }
        }
        return answer[n-1]>=0;
        }
};