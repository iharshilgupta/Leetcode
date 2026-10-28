class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(); // size variable
        vector<int> finalarr(n);
        // for(int i=0;i<n;i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());// sorting the array
        int left=0;
        int right=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[left])>abs(nums[right])) {
                finalarr[i]=nums[left]*nums[left];
                left++;
            }
            else{
                finalarr[i]=nums[right]*nums[right];
                right--;
            }
        }
        return finalarr;
    }
};