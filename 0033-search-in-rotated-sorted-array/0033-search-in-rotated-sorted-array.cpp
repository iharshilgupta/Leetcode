class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){ // simple traversal and finding the target, but its 
        // O(n) time complexity but the questions asks us for O(log n)
        //     if(nums[i]==target){
        //         return i;
        //     }
        // }
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[low]<=nums[mid]){ // checking left or right half is sorted in array
                if(target>=nums[low] && target<nums[mid]){ // if target is in this sorted half
                    high=mid-1;
                }
                else{
                    low=mid+1;// it doesnt and mid updates
                }
            }
            else{
                if(target>nums[mid] && target<=nums[high]){ // check if this half is sorted
                    low=mid+1;
                }
                else{
                    high=mid-1;// if not then all the testcases fail and at the end we return-1
                }
            }
        }
        return -1;
    }
};