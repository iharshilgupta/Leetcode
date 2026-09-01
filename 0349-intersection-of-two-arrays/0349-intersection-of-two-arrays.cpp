class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> first(nums1.begin(),nums1.end()); // first set to store the first array unique members
        unordered_set<int> second;// second set to store numbers that appear in both nums1 and nums2
        for(int i:nums2){
            if(first.count(i)){ // if number exists in first(true) it will insert the number into the second set
                second.insert(i);
            }
        }
      
        return vector<int>{second.begin(),second.end()};// convert the set to vector array 
    }
};