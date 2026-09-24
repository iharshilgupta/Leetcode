class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;++i){
            // int t=nums[i];
            // int sum=0;
            // while(t>0){
            //     int rem=t%10;
            //     sum+=rem;
            //     t/=10;
            // }
            // if(sum==i) return i;
            int t=nums[i];
            int sum=t%10;
            t/=10;
            sum+=t%10;
            t/=10;
            sum+=t%10;
            sum+=t/10;
            if(sum==i) return i;
        }
        return -1;
    }
};