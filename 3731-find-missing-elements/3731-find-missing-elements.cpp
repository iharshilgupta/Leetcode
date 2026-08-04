// class Solution {
// public:
//     vector<int> missingNumbers(int low, int high) {
//         vector<int> ans;
//         for (int i = low + 1; i < high; ++i) {
//             ans.push_back(i);
//         }
//         return ans;
//     }
//     vector<int> findMissingElements(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int left = 0;
//         int right = 1;
//         vector<int> ans;
//         while (right < nums.size()) {
//             if (nums[right] - nums[left] > 1) {
//                 vector<int> temp = missingNumbers(nums[left], nums[right]);
//                 for (int num : temp) {
//                     ans.push_back(num);
//                 }
//             }
//             right++;
//             left++;
//         }
//         return ans;
//     }
// };
/* minimum maximum element and using helping function to return missing numbers 
withing the range */
// class Solution {
// public:
//     vector<int> missingNumbers(int low, int high) {
//         int mini = *min_element(nums.begin(), nums.end());
//         int maxi = *max_element(nums.begin(), nums.end());
//         unordered_map<int, int> freq;
//         for(int num: nums){
//             freq[num]++;
//         }
//         vector<int> ans;
//         for(int i = mini; i <= maxi; i++){
//             if(freq[i]==0){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };

/* same apporahc of max and mini but just in hasset to iterate from mini to max in a range and printout the missing numbers*/
//Hash - set approach
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = mini; i <= maxi; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};