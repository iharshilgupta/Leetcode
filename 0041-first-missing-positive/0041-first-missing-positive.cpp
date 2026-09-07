    // class Solution {
    // public:
    //     int firstMissingPositive(vector<int>& nums) {
    //         unordered_set<int> all(nums.begin(),nums.end());
    //         int minimum=1;
    //         while(all.count(minimum)) minimum++;
    //         return minimum;
    //     }
    // };
    // alreayd got the solution by using hash table but not in O(1) auxiliary space, by swapping minumum element everyhwere and updating it via a minimum count in the set and returning it
// this is the second optimal approach satisying the algortithm needs
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
    }
};