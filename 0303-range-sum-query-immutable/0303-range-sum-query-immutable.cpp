auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class NumArray {
private:
    vector<int> prefixSum; // declaring prefix sum as a private vector to store sum 
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefixSum.resize(n+1,0);// the resize function takes two arguements, first the new size and the new value that will fill the vector
        for(int i=0;i<n;i++){
            prefixSum[i+1]=prefixSum[i]+nums[i]; // standard prefix sum formula which uses another array to calculate answer,
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right+1] -prefixSum[left]; // sum range, prefix sum array already created that gives us an advantage to direclty return the subtraction and work along the answer instead of waiting
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */