class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // first approach after looking at the problem is that we need 2 hashmaps 
        // we need to compare counts and add them to an array if possible
        // total 3 structrues needed
        unordered_map<int,int> one;
        vector<int> ans;
        for(int i:nums1){
            one[i]++; // adding the total values in the nums1
        }
        for(int i:nums2){
            if(one[i]>0){ // checking count greater than 0 and pushing the value in answer array
                ans.push_back(i);
                 one[i]--; // decrementing the value to ignore duplicates// edge case
            }
        }
        return ans;
    }
};