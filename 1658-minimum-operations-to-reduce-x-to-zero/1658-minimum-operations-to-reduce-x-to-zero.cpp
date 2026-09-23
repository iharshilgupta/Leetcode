class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        // int count=0;
        // if(nums[n-1]>x && nums[0]>x){
        //     return -1;
        // }
        // int last=n-1;
        // int fir=0;
        // while(n>0){
        //     int candi=max(nums[fir],nums[last]);
        //     n-=candi;
        //     if(candi==nums[fir]) fir++;
        //     else last--;
        //     count++;
        // }
        // return count;
        int count=0;
        for(int i:nums){
            count+=i;
        }
        int tar=count-x;
        if(tar<0) return -1;
        if(tar==0) return n;
        int low=0;
        int len=-1;
        int sum=0;
    
        for(int i=0;i<n;++i){
            sum+=nums[i];
            while(sum> tar && low<=i){
                sum-=nums[low];
                low++;
            }
            if(sum==tar){
                len=max(len,i-low+1);
            }
        }
        return(len==-1) ? -1 :(n-len);
    }
};