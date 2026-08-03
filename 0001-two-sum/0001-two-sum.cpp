class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash1;//hashmap  declared 
        hash1.reserve(nums.size());
        for(int i=0;i<nums.size();i++){
            int div=target-nums[i];// getting the firdt value to match 
            auto sol=hash1.find(div);//searching for it
            if(sol!=hash1.end()){// if the particular complement exists, meaning they can be a valid pair
                return{sol->second,i};
            }
            hash1[nums[i]]=i;//current no and the index
        }
        return {};
    }
};