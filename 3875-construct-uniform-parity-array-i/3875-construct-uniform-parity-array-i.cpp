class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // int n=nums1.size();
        // vector<int> nums2(n);
        // bool l=false;
        // for(int i=0;i<n-1;++i){
        //     nums2[i]=nums1[i]-nums1[i+1];
        // }
        // for(int i=0;i<n-1;++i){
        //     if(nums2[i]%2==0){
        //         if(nums2[i+1]%2==0){
        //             l=true;
        //         }
        //         else{
        //             l=false;
        //         }
        //     }
        //     else{
        //         if(nums2[i+1]%2!=0){
        //             l=true;
        //         }
        //         else{
        //             l=false;
        //         }
        //     }
        // }
        int n=nums1.size();
        bool l=false;
        bool t=false;
        for(int i=0;i<n;++i){
            if(nums1[i]%2!=0){
                l=true;
            }
            else{
                t=true;
            }
        }
        if(t && l){
            return true;
        }
        if(!t && l){
            return true;
        }
        if(t && !l){
            return true;
        }
        if(!t && !l){
            return false;
        }
        return true;
    }
};