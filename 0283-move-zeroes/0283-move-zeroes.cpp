class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first{1};// my approach is two pointer, I have spotted two pointers needed to travel through the array, while updating the second one only when the condition of i being a zero is statisfied
        for(int i=0;i<nums.size();i++){// starting the array from 0. because the array length is minimum 1
            if(nums[i]!=0){
                nums[first-1]=nums[i];
                first++;
            }// not returning because of void 
        }
        for(int i=first-1;i<nums.size();i++){
            nums[i]=0;// making all the leftover elements 0, because it is specified to make the leftover elements zero and without making a copy
        }
    }
};