class Solution {
public:
    int r(int sum,int k){
        return(sum%k+k)%k;
    }
    int longestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;++i){
            long long sum=0;
            unordered_set<int> sub;
            for(int j=i;j<n;++j){
                sum+=nums[j];
                int rem=r(2LL*nums[j],k);
                sub.insert(rem);
                int num=r(sum,k);
                if(num==0){
                    maxi=max(maxi,j-i+1);
                    continue;
                }
                if(sub.count(num)){
                    maxi=max(maxi,j-i+1);
                }
            }
            // for(int j=i;j<n;++j){
            //     sum+=nums[j];
            //     sub.insert(nums[j]);
            //     int rem=r(sum,k);
            //     if(rem==0){
            //         maxi=max(maxi,j-i+1);
            //         continue;
            //     }   
            // bool l=false;
            // for(int num:sub){
            //     if(r(2LL*num,k)==rem){
            //         l=true;
            //         break;
            //     }
            // }
            // if(l){
            //     maxi=max(maxi,j-i+1);
            // }
            // }
        }
        return maxi;
    }
};