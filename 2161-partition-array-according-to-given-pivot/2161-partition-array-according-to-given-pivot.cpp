class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans;
        // int fir=0;
        // int second=n-1;
        // for(int i=0,j=n-1;i<n;++i,j--){
        //     if(nums[i]<pivot){
        //         ans[fir++]=nums[i];
        //     }
        //     if(nums[j]>pivot){
        //         ans[second--]=nums[j];
        //     }
        // }
        // while(fir<=second) {
        //     ans[fir++]=pivot;
        // }
        for(int i:nums){
            if(i<pivot){
                ans.push_back(i);
            }
        }
        for(int i:nums){
            if(i==pivot){
                ans.push_back(i);
            }
        }
        for(int i:nums){
            if(i>pivot){
                ans.push_back(i);
            }
        }
        return ans;
    }
};