// intial approach after looking at the quesition is three pointers, first sorting the 0's with first pointer then moving on to the 1's their index will start with 0's pointer plus 1 aand same with 2 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low{0};
        int mid={0};
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};