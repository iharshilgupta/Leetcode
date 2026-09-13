class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || nums.empty()){
            return 0;
        }
        int s=0;
        int c=0;
        for(int i:nums){
            int a=std::max(s,c+i);
            c=s;
            s=a;
        }
        return s;
    }
};