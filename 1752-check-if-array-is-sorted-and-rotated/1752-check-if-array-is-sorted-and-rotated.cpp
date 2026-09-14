class Solution {
public:
    bool check(vector<int>& nums) {
        // int n=nums.size();
        // if(n<=2) return true;
        // int mini=101; // its given in the constraints that the numbers in the array will be within 1 to 100 range
        // int index=0;
        // int steps=0;
        // for(int i=0;i<n;++i){
        //     if(nums[i]<mini){
        //         mini=nums[i];
        //         index=i;
        //     }
        // }
        // for(int i=0;i<n;++i){
        //     int curr=(index+i)%n;
        //     int next=(index+i+1)%n;
        //     if(nums[curr]>nums[next]){
        //         steps++;
        //     }
        // }
        // return steps<=1;


        /* optimal approach */ 
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        return true;
    }
};