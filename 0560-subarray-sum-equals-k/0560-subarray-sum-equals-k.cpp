auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum=0; // prefix sum
        int count=0; // count variable to store the number of subarrays that will be satisfy k 
        unordered_map<int, int> freq; // frequency hashmap to count how many times we find k
        freq[0]=1; // starting value of nums[0] can be k so we need to intiliaze it by 1, 
        for(int it:nums){
            prefixSum+=it;
            if(freq.find(prefixSum-k)!= freq.end()){
                count+=freq[prefixSum-k]; // only increasing count when we find k, because k can be 0
            }
            freq[prefixSum]++;
        }
        return count;
    }
};