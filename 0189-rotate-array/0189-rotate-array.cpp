class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        // for(int i=0;i<n;++i){
        //     // if(k==n){
        //     //     k=0;
        //     // }
        //     nums[i]=nums[k%n];
        //     k++;
        // }

        /* reverse function approach
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin() + k);
        reverse(nums.begin()+k,nums.end());*/


        /* cpp in built function rotate*/
        k=k%n;
        std::rotate(nums.begin(),nums.begin()+(n-k),nums.end());

        /* O(n) extra space used by creating a new array,*/
        // vector<int> ans(n);
        // for(int i=0;i<n;++i){
        //     ans[(i+k)%n]=nums[i];
        // }
        // nums=ans;          
    }
};