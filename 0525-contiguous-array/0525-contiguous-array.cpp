auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> index; // hash map to store first and last occurence of indexes
        //with equal prefix 
        replace(nums.begin(),nums.end(),0,-1); // replacing 0's to -1's is the most crucial step of the question, this helps us implement prefixSum,
        int prefix=0; // intitliazing prefix at 0
        index[0]=-1; // first key value pair or map is 0 key and -1(index which is virtual and also our prefix)
        int maxlen=0; // intiliasing max len to get current index - first index or occurence
        for(int i=0;i<n;++i){
            prefix+=nums[i]; // standard prefix formula
            if(index.find(prefix)!=index.end()){ // to check wheter we find the value of prefix inside our map or not
                maxlen=max(maxlen, i-index[prefix]); // updating max len with max len an current index i - first occurence or our prefix( the target is prefix and to get a consistent prefix)
            }
            else{
                index[prefix]=i; // updating the prefix value in the map if it doesnt already exist
            }
        }   
        return maxlen;
    }
};