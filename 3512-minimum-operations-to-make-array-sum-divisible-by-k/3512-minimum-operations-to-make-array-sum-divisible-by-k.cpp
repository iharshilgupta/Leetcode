class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // the selection of index i here suppose to be depending on if nums[i] is the greater or queal to the least number of steps needed to make the sum divisible 
        // the first apporach here in this problem is that we needto find the remainder after dividing the sum, sum can be taken with accumulate funciton in cpp
        // then we decrease the sum and increase steps when we first hit the index
        /* first aproach
        int sum=accumulate(nums.begin(),nums.end(),0);
        int rem=sum%k;
        int steps=0;
        if(rem%k==0){
            return steps;
        }
        else{
            return rem;  
        }
        */
        /*optimized version*/
        return accumulate(nums.begin(),nums.end(),0) %k;
    }
};